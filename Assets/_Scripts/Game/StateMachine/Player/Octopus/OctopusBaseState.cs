using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class OctopusBaseState
{
    public Rigidbody rb;

    public virtual void EnterState(OctopusStateManager creature)
    {
        rb = creature.GetComponent<Rigidbody>();
    }
    public virtual void UpdateState(OctopusStateManager creature)
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

    public virtual void OnCollisionEnter(OctopusStateManager creature, Collision collision)
    {
      
        if (collision.gameObject.tag == ("EnemyAttack") && creature.currentDamagedCD <= 0)
        {
            //重設受傷CD時間
            creature.currentDamagedCD = creature.characterBase.GetDamagedCD();
            Debug.Log(creature.currentAttackCD);
            Debug.Log(creature.characterBase.GetDamagedCD());

            //彈開
            float forceX = creature.transform.position.x - collision.transform.position.x;
            float forceZ = creature.transform.position.z - collision.transform.position.z;
            Vector3 forcePos = new Vector3(forceX, 0, forceZ);
            rb.AddForce(forcePos * 500);

            //扣血
            //string collisionName = collision.gameObject.GetComponent<CreatureBase>().GetName();
            string collisionName = collision.gameObject.GetComponent<CreatureBase>().Name;
            Debug.Log(collisionName);
            int damage = collision.gameObject.GetComponent<CreatureBase>().GetAttack(collisionName, (int)Time.time);
            creature.currentHp -= damage;
            creature.characterBase.OnDamaged(creature.currentHp);
            //鏡頭晃動

            //Shader閃紅

            Debug.Log("EnemyAttack");
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
    private FloatingJoystick  _joystick;

    public override void EnterState(OctopusStateManager creature)
    {
        base.EnterState(creature);
        _joystick = creature.floatingJoystick;
        rb = creature.gameObject.GetComponent<Rigidbody>();

    }

    public override void UpdateState(OctopusStateManager creature)
    {
        base.UpdateState(creature);

        float moveX = creature.floatingJoystick.Horizontal;
        float moveY = creature.floatingJoystick.Vertical;
        rb.velocity = new Vector3(moveX * creature.currentMoveSpeed, rb.velocity.y, moveY * creature.currentMoveSpeed);
        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
        {
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
