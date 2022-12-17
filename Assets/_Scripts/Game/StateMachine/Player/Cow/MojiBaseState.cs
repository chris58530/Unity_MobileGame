using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MojiBaseState
{
    public Rigidbody rb;

    public virtual void EnterState(MojiStateManager creature)
    {
        Debug.Log(string.Format("<color=#f5f500>{0}</color>", creature.currentState + "¼Ò¦¡"));
        rb = creature.GetComponent<Rigidbody>();
    }
    public virtual void UpdateState(MojiStateManager creature)
    {


        if (!Input.anyKey && creature.currentAttackCD <= 0)
            creature.SwitchState(creature.attackState);
        else
            creature.SwitchState(creature.moveState);

      


        if (creature.currentAttackCD > 0)
            creature.currentAttackCD -= Time.deltaTime;

        if (creature.currentDamagedCD > 0)
            creature.currentDamagedCD -= Time.deltaTime;


    }

    public virtual void OnCollisionEnter(MojiStateManager creature, Collision collision)
    {
        if (collision.gameObject.tag == ("EnemyAttack") && creature.currentDamagedCD <= 0)
        {
            Debug.Log("EnemyAttack!!!");

            Vector3 forcePos = new Vector3(creature.transform.position.x - collision.transform.position.x, 0, creature.transform.position.z - collision.transform.position.z);
            rb.AddForce(forcePos.normalized * 500);
            creature.SwitchState(creature.hurtState);
        }
    }
}
#region Player_Moji: Idle Move Attack Hurt Destroy


public class MojiIdleState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);

    }
    public override void UpdateState(MojiStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
    }
}
public class MojiAttackState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);
        rb.AddForce(creature.transform.forward* 100);
        creature.StartCoroutine(TimeToIdle(creature));
        creature.CompareTag("PlayerAttack");

        base.EnterState(creature);
        creature.ani.SetBool("isWalking", false);

    }
    public override void UpdateState(MojiStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
      
    }
    IEnumerator TimeToIdle(MojiStateManager creature)
    {
        Debug.Log("TimeToIdle");
        yield return new WaitForSeconds(1);
        creature.SwitchState(creature.hurtState);
    }
}
public class MojiMoveState : MojiBaseState
{
    private FixedJoystick _joystick;

    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);
        _joystick = creature.fixedJoystick;

    }
    public override void UpdateState(MojiStateManager creature)
    {
        base.UpdateState(creature);

        if (_joystick.Horizontal >= 0.1f || _joystick.Vertical >= 0.1f && _joystick.Horizontal <= -0.1f || _joystick.Vertical <= -0.1f)
        {
            rb.velocity = new Vector3(creature.fixedJoystick.Horizontal * creature.currentMoveSpeed
             , rb.velocity.y, creature.fixedJoystick.Vertical * creature.currentMoveSpeed);
            creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
            creature.ani.SetBool("isWalking", true);

        }
        else
            creature.ani.SetBool("isWalking", false);
    }
}
public class MojiHurtState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);
    }
   
}
#endregion
