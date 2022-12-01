using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SlimeBaseState 
{
    public virtual void EnterState(SlimeStateManager creature)
    {
        Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "¼Ò¦¡"));
    }
    public abstract void UpdateState(SlimeStateManager creature);
    public virtual void OnTriggerEnter(SlimeStateManager creature, Collider other)
    {
        if (other.gameObject.CompareTag("PlayerAttack"))
        {
            float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
            creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP -= damage;
            creature.SwitchState(creature.hurtState);
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
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1* creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).moveSpeed * Time.deltaTime));
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
        if (creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP <= 0)
        {
            GameObject.Destroy(creature.gameObject);
            EnemyDrop enemyDrop = new EnemyDrop();
            enemyDrop.DropItem(creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime), creature.transform);
        }
        base.EnterState(creature);
        creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD = creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).hurtCD;
    }  
    public override void UpdateState(SlimeStateManager creature)
    {
        if (creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD > 0)
            creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD -= Time.deltaTime;
        else
            creature.SwitchState(creature.moveState);
    }
}

#endregion