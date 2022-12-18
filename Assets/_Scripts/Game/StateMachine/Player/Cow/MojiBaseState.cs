using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MojiBaseState
{
    protected Rigidbody rb;

    public virtual void EnterState(MojiStateManager creature)
    {
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
            //重設受傷CD時間
            creature.currentDamagedCD = creature.characterBase.GetDamagedCD();

            //彈開
            float forceX = creature.transform.position.x - collision.transform.position.x;
            float forceZ = creature.transform.position.z - collision.transform.position.z;
            Vector3 forcePos = new Vector3(forceX, 0, forceZ);
            rb.AddForce(forcePos * 500);

            //扣血
            //string collisionName = collision.gameObject.GetComponent<CreatureBase>().GetName();
            string collisionName = collision.gameObject.GetComponent<CreatureBase>().Name;
            Debug.Log(collisionName);
            int damage = collision.gameObject.GetComponent<CreatureBase>().GetAttack(collisionName);
            creature.currentHp -= damage;
            creature.characterBase.OnDamaged(creature.currentHp);
            //鏡頭晃動

            //Shader閃紅

            Debug.Log("EnemyAttack");
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
        creature.tag = ("Player");

        BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
        boxCollider.isTrigger = false;
        rb.constraints = RigidbodyConstraints.None;

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
        creature.ani.SetBool("isWalking", false);
        creature.tag = ("PlayerAttack");
        rb.constraints = RigidbodyConstraints.FreezePositionY;

        BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
        boxCollider.isTrigger = true;

    }
    public override void UpdateState(MojiStateManager creature)
    {
        base.UpdateState(creature);
        if (creature.currentAttackCD <= 0)
        {
            creature.StartCoroutine(TimeToIdle(creature));

            creature.currentAttackCD = creature.characterBase.GetAttackCD();
            creature.ani.SetTrigger("Attack");


        }

    }
    IEnumerator TimeToIdle(MojiStateManager creature)
    {
        rb.AddForce(creature.transform.forward * 5000);

        yield return new WaitForSeconds(1);
        Debug.Log("TimeToIdle");

        creature.SwitchState(creature.idleState);
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
        creature.ani.SetTrigger("Hurt");
        creature.SwitchState(creature.idleState);
    }

}
#endregion
