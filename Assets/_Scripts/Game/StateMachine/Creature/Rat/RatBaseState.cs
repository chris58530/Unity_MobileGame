using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract  class RatBaseState 
{
    protected Transform playerTrans;
    protected Rigidbody rb; 
    protected string Rat = "Rat";
    public virtual void EnterState(RatStateManager creature)
    {
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
        rb = creature.GetComponent<Rigidbody>();
    }
    public abstract void UpdateState(RatStateManager creature);
    public virtual void OnTriggerEnter(RatStateManager creature, Collider other)
    {
        if (other.gameObject.CompareTag("PlayerAttack"))//被這個打到要表演
        {
            int damage = other.gameObject.GetComponentInParent<CharacterBase>().GetAttack();
            Vector3 forcePos = new Vector3(creature.transform.position.x - other.transform.position.x, 0, creature.transform.position.z - other.transform.position.z);
            rb.AddForce(forcePos * 500);
            creature.currentHP -= damage;
            creature.SwitchState(creature.hurtState);
        }
        if (other.gameObject.CompareTag("Bullet"))//被這個打到不用表演
        {
            int damage = other.gameObject.GetComponent<Bullet>().GetBulletDamage();
            creature.currentHP -= damage;
            Debug.Log(damage);

        }
        if (other.gameObject.CompareTag("Player"))
        {
            creature.ani.SetTrigger("Attack");

        }
        if (creature.currentHP <= 0)
        {
            creature.SwitchState(creature.dieState);
        }
    }
}
#region NChicken: Idle Move Attack Hurt Die
public class RatIdleState : RatBaseState
{
    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);
        creature.transform.position += new Vector3(0, -3, 0);
        rb.constraints = RigidbodyConstraints.FreezePosition;
        BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
        boxCollider.isTrigger = true;
    }
    public override void UpdateState(RatStateManager creature)
    {
        float distance = Vector3.Distance(playerTrans.position, creature.transform.position);
        //Debug.Log(distance);
        //if (creature.CreatureData.currentAttackCD > 0)
        //{
        //    creature.CreatureData.currentAttackCD -= Time.deltaTime;
        //}
        if (distance <=   10 /*&& creature.CreatureData.currentAttackCD <= 0*/)
        {
            creature.SwitchState(creature.moveState);
            creature.transform.position += new Vector3(0, 4, 0);
            BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
            boxCollider.isTrigger = false;
        }
    }
}

public class RatMoveState : RatBaseState
{
   

    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);
        creature.ani.SetTrigger("Jump");
        rb.constraints = RigidbodyConstraints.None;

    }

    public override void UpdateState(RatStateManager creature)
    {
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1 * creature.creatureBase.GetSpeed(Rat) * Time.deltaTime));
        }
     
    }
    public override void OnTriggerEnter(RatStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);


     
    }
}

public class RatAttackState : RatBaseState
{
    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);
        creature.ani.SetTrigger("Attack");
    }
    public override void UpdateState(RatStateManager creature)
    {
        throw new System.NotImplementedException();
    }
}


public class RatHurtState : RatBaseState
{
   
    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);
    }
    public override void UpdateState(RatStateManager creature)
    {
        if (hurtCD > 0)
            hurtCD -= Time.deltaTime;
        else
            creature.SwitchState(creature.moveState);
    }
}
public class RatDieState : RatBaseState
{
    float hurtCD;
    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);
    }
    public override void UpdateState(RatStateManager creature)
    {
        if (hurtCD > 0)
            hurtCD -= Time.deltaTime;
        else
            creature.SwitchState(creature.moveState);
    }
}
#endregion
