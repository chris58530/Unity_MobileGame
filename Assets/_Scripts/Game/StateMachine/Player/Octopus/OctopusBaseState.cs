using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class OctopusBaseState
{
    public Rigidbody rb;

    public virtual void EnterState(OctopusStateManager creature)
    {
        Debug.Log(string.Format("<color=#f5f5dc>{0}</color>", creature.currentState + "模式"));
        rb = creature.GetComponent<Rigidbody>();
    }
    public virtual void UpdateState(OctopusStateManager creature)
    {


        if (!Input.anyKey && creature.currentAttackCD <= 0)
            creature.SwitchState(creature.attackState);
        else
            creature.SwitchState(creature.moveState);

        //if (Input.touchCount == 0 && creature.CreatureData.currentAttackCD <= 0)
        //    creature.SwitchState(creature.attackState);
        //else
        //    creature.SwitchState(creature.moveState);


        if (creature.currentAttackCD > 0)
            creature.currentAttackCD -= Time.deltaTime;

        if (creature.currentDamagedCD > 0)
            creature.currentDamagedCD -= Time.deltaTime;


    }

    public virtual void OnCollisionEnter(OctopusStateManager creature, Collision collision)
    {
        if (collision.gameObject.tag == ("EnemyAttack") && creature.currentDamagedCD <= 0)
        {
            Debug.Log("EnemyAttack!!!");

            Vector3 forcePos = new Vector3(creature.transform.position.x - collision.transform.position.x, 0, creature.transform.position.z - collision.transform.position.z);
            rb.AddForce(forcePos.normalized * 100);
            creature.SwitchState(creature.hurtState);
        }
    }
}
#region Player_Octopus: Idle Move Attack Hurt Destroy


public class OctopusIdleState : OctopusBaseState
{
    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        creature.SwitchState(creature.moveState);
        creature.octopusAni.SetBool("isWalking", false);

    }
    public override void UpdateState(OctopusStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
    }
}
public class OctopusMoveState : OctopusBaseState
{
    private FixedJoystick _joystick;

    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        _joystick = creature.fixedJoystick;
        rb = creature.gameObject.GetComponent<Rigidbody>();

    }

    public override void UpdateState(OctopusStateManager creature)
    {
        base.UpdateState(creature);

        if (_joystick.Horizontal >= 0.1f || _joystick.Vertical >= 0.1f && _joystick.Horizontal <= -0.1f || _joystick.Vertical <= -0.1f)
        {
            rb.velocity = new Vector3(creature.fixedJoystick.Horizontal * creature.currentMoveSpeed
             , rb.velocity.y, creature.fixedJoystick.Vertical * creature.currentMoveSpeed);
            creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
            creature.octopusAni.SetBool("isWalking", true);

        }
        else
            creature.octopusAni.SetBool("isWalking", false);


    }

}

public class OctopusAttackState : OctopusBaseState
{

    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        creature.octopusAni.SetBool("isWalking", false);

    }
    public override void UpdateState(OctopusStateManager creature)
    {
        base.UpdateState(creature);
        if (creature.currentAttackCD <= 0)
        {
            OctopusAttack octopusAttack = creature.GetComponent<OctopusAttack>();
            octopusAttack.Attack();
            creature.currentAttackCD = creature.characterBase.GetAttackCD();
            creature.octopusAni.SetTrigger("Attack");

        }
    }
}


public class OctopusHurtState : OctopusBaseState
{
    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        creature.currentDamagedCD = creature.characterBase.GetDamagedCD();
        creature.SwitchState(creature.idleState);
        creature.octopusAni.SetTrigger("Hurt");

    }
}
public class OctopusDestroyState : OctopusBaseState
{
    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        //噴掉落物
        //動畫
        GameObject.Destroy(creature.gameObject);
    }

    public override void UpdateState(OctopusStateManager creature)
    {
        throw new System.NotImplementedException();
    }
}
#endregion
