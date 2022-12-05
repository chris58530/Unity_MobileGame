using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SlimeBaseState 
{
    protected string Slime = "Slime"; 
    public virtual void EnterState(SlimeStateManager creature)
    {
        Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "模式"));
    }
    public virtual void UpdateState(SlimeStateManager creature)
    {
     
    }
    public virtual void OnTriggerEnter(SlimeStateManager creature, Collider other)
    {
       
        if (other.gameObject.CompareTag("PlayerAttack"))//被這個打到要表演
        {
            int damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
            creature.currentHP -= damage;
            creature.SwitchState(creature.hurtState);
        }
        if (other.gameObject.CompareTag("Bullet"))//被這個打到不用表演
        {
            int damage = other.gameObject.GetComponent<Bullet>().GetBulletDamage();
            creature.currentHP -= damage;
            Debug.Log(damage);
        }
        if (creature.currentHP <= 0)
        {
            Debug.Log("droppppp");
            GameObject.Destroy(creature.gameObject);
            EnemyDrop enemyDrop = new EnemyDrop();
            enemyDrop.DropItem(creature.creatureData.GetCreature(Slime), creature.transform);
        }
    }
    
}
#region SlimeState:  Move  Hurt 




public class SlimeMoveState : SlimeBaseState
{
    Transform playerTrans;
    Rigidbody rb;


    public override void EnterState(SlimeStateManager creature)
    {
       base.EnterState(creature);
        rb = creature.GetComponent<Rigidbody>();
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
    }

    public override void UpdateState(SlimeStateManager creature)
    {
        base.UpdateState(creature);
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1* creature.creatureData.GetCreature(Slime).moveSpeed * Time.deltaTime));
        }
     
    }
    public override void OnTriggerEnter(SlimeStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);
    }
}

public class SlimeHurtState : SlimeBaseState
{
  
    public override void EnterState(SlimeStateManager creature)
    {
        
        base.EnterState(creature);
        creature.creatureData.GetCreature(Slime).currentHurtCD = creature.creatureData.GetCreature(Slime).hurtCD;
    }  
    public override void UpdateState(SlimeStateManager creature)
    {
        base.UpdateState(creature);
        if (creature.creatureData.GetCreature(Slime).currentHurtCD > 0)
            creature.creatureData.GetCreature(Slime).currentHurtCD -= Time.deltaTime;
        else
            creature.SwitchState(creature.moveState);
    }
}

#endregion