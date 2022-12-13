using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SlimeBaseState 
{
    protected string Slime = "Slime"; 

    protected Rigidbody rb;
    public virtual void EnterState(SlimeStateManager creature)
    {
        rb = creature.GetComponent<Rigidbody>();
        Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "模式"));
    }
    public virtual void UpdateState(SlimeStateManager creature)
    {
     
    }
    public virtual void OnTriggerEnter(SlimeStateManager creature, Collider other)
    {
       
        if (other.gameObject.CompareTag("PlayerAttack"))//被這個打到要表演
        {
            int damage = other.gameObject.GetComponentInParent<CharacterBase>().GetAttack();
            Vector3 forcePos = new Vector3(creature.transform.position.x - other.transform.position.x, 0, creature.transform.position.z - other.transform.position.z);
            rb.AddForce(forcePos.normalized * 1000);
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
            GameActions.OnDropItem?.Invoke(creature.creatureBase.GetCreature(Slime), creature.transform);

            //EnemyDrop enemyDrop = new EnemyDrop();
            //enemyDrop.DropItem(creature.creatureData.GetCreature(Slime), creature.transform);
        }
    }
    
}
#region SlimeState:  Move  Hurt 




public class SlimeMoveState : SlimeBaseState
{
    Transform playerTrans;


    public override void EnterState(SlimeStateManager creature)
    {
       base.EnterState(creature);
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
    }

    public override void UpdateState(SlimeStateManager creature)
    {
        base.UpdateState(creature);
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1* creature.creatureBase.GetSpeed(Slime) * Time.deltaTime));
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
    }  
    public override void UpdateState(SlimeStateManager creature)
    {
        base.UpdateState(creature);
      
        creature.SwitchState(creature.moveState);
    }
}

#endregion