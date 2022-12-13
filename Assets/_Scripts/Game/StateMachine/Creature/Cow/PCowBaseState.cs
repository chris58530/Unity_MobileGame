using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PCowBaseState
{
    protected Transform playerTrans;
    protected Rigidbody rb;
    protected string PCow = "PCow";
    public virtual void EnterState(PCowStateManager creature)
    {
        Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "模式"));

        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
        rb = creature.GetComponent<Rigidbody>();

    }
    public virtual void UpdateState(PCowStateManager creature)
    {

        rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));       
    }
   
    public virtual void OnTriggerEnter(PCowStateManager creature, Collider other)
    {
  
    }
}
#region SlimeState:  Move Attack Hurt 



public class PCowMoveState : PCowBaseState
{


    public override void EnterState(PCowStateManager creature)
    {
        base.EnterState(creature);

    }

    public override void UpdateState(PCowStateManager creature)
    {
        base.UpdateState(creature);
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1 * creature.CreatureData.GetCreature(PCow).moveSpeed * Time.deltaTime));
            float distance = Vector3.Distance(playerTrans.position, creature.transform.position);
            //Debug.Log(distance);
            //if (creature.CreatureData.currentAttackCD > 0)
            //{
            //    creature.CreatureData.currentAttackCD -= Time.deltaTime;
            //}
            if (distance <= 15 /*&& creature.CreatureData.currentAttackCD <= 0*/)
            {
                creature.SwitchState(creature.chargeState);
            }
        }
        else
        {
            Debug.Log("NO PlAYER");
        }
       
       
    }
}
public class PCowChargeState : PCowBaseState , IDamageable
{
    //純粹倒數時間
    float charge; //續力時間
    public override void EnterState(PCowStateManager creature)
    {
        base.EnterState(creature);
        charge = creature.CreatureData.GetCreature(PCow).attackCD;

    }
    public override void UpdateState(PCowStateManager creature)
    {
          
        base.UpdateState(creature);

        charge -= Time.deltaTime;
        if (charge <= 0)
            creature.SwitchState(creature.attackState);
        if (creature.CreatureData.GetCreature(PCow).currentHP <= 0)
            GameObject.Destroy(creature.gameObject  );
      
    }
    public override void OnTriggerEnter(PCowStateManager creature, Collider collision)
    {
        if (collision.gameObject.CompareTag("PlayerAttack"))
        {
            float damage = collision.GetComponentInParent<CharacterBase>().GetAttack();
            creature.CreatureData.GetCreature(PCow).currentHP -= damage;
         
        }
    }
    public void GetHurt(float damage)
    {

    }
}
public class PCowAttackState : PCowBaseState
{
    Vector3 target;

    float wait; //攻擊結束等待時間
    public override void EnterState(PCowStateManager creature)
    {
        base.EnterState(creature);
        wait = creature.CreatureData.GetCreature(PCow).attackCD;
        target = playerTrans.position;
        rb = creature.GetComponent<Rigidbody>();
    }

    public override void UpdateState(PCowStateManager creature)
    {
        rb.transform.LookAt(new Vector3(target.x, creature.transform.position.y, target.z));

        creature.transform.position = Vector3.MoveTowards(creature.transform.position, target,creature.CreatureData.GetCreature(PCow).moveSpeed*15*Time.deltaTime);
        wait -= Time.deltaTime;
        if (wait <= 0)      
            creature.SwitchState(creature.moveState);
        
    }
}
#endregion