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
        Debug.Log(string.Format("<color=#fff000>{0}</color>", creature.currentState + "¼Ò¦¡"));
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
        rb = creature.GetComponent<Rigidbody>();
    }
    public abstract void UpdateState(RatStateManager creature);
    public virtual void OnTriggerEnter(RatStateManager creature, Collider other)
    {
        if (other.gameObject.CompareTag("PlayerAttack"))
        {
            float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
            creature.CreatureData.GetCreature(Rat).currentHP -= damage;
            creature.SwitchState(creature.hurtState);
            if (creature.CreatureData.GetCreature(Rat).currentHP <= 0)
                GameObject.Destroy(creature.gameObject);
        }
    }
}
#region NChicken: Idle Move Attack Hurt Destroy
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

        rb.constraints = RigidbodyConstraints.None;

    }

    public override void UpdateState(RatStateManager creature)
    {
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1 * creature.CreatureData.GetCreature(Rat).moveSpeed * Time.deltaTime));
        }
        else
        {
            Debug.Log("NO PlAYER");

        }
    }
    public override void OnTriggerEnter(RatStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);

        //creature.CreatureData.hp -= collision.gameObject.GetComponent<CreatureDataSO>().attack;

        if (creature.CreatureData.GetCreature(Rat).currentHP < 0)
            creature.SwitchState(creature.moveState);
        else
            creature.SwitchState(creature.hurtState);
    }
}

public class RatAttackState : RatBaseState
{
    public override void EnterState(RatStateManager creature)
    {
        base.EnterState(creature);

        //GameObject.FindObjectOfType<PlayerController>().GetDamage(creature.transform);
        creature.SwitchState(creature.moveState);
    }
    public override void UpdateState(RatStateManager creature)
    {
        throw new System.NotImplementedException();
    }
}


public class RatHurtState : RatBaseState
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
