using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CowBaseState
{
    protected Transform playerTrans;
    protected Rigidbody rb;
    protected string Cow = "Cow";
    public virtual void EnterState(CowStateManager creature)
    {

        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
        rb = creature.GetComponent<Rigidbody>();

    }
    public virtual void UpdateState(CowStateManager creature)
    {

        rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));       
    }
   
    public virtual void OnTriggerEnter(CowStateManager creature, Collider other)
    {
        //if (other.gameObject.CompareTag("PlayerAttack"))//在蓄力的時候才會被打到
        //{
            
        //}
        if (other.gameObject.CompareTag("Bullet"))//被這個打到不用表演
        {
            int damage = other.gameObject.GetComponent<Bullet>().GetBulletDamage();
            creature.currentHP -= damage;

        }
        //if (other.gameObject.CompareTag("Player")) //特殊的攻擊模式所以不適用
        //{          

        //}
        if (creature.currentHP <= 0)
        {
            creature.SwitchState(creature.dieState);
        }
    }
}
#region SlimeState:  Move Attack Charge Hurt Die



public class CowMoveState : CowBaseState
{


    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);

    }

    public override void UpdateState(CowStateManager creature)
    {
        base.UpdateState(creature);
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1 * creature.creatureBase.GetSpeed(Cow) * Time.deltaTime));
            float distance = Vector3.Distance(playerTrans.position, creature.transform.position);
       
            if (distance <= creature.attackDistance)
            {
                creature.SwitchState(creature.chargeState);
            }
        }
      
       
       
    }
}
public class CowChargeState : CowBaseState 
{
    //純粹倒數時間
    float charge = 2; //續力時間
    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);
        creature.ani.SetTrigger("Attack_1");
    }
    public override void UpdateState(CowStateManager creature)
    {
          
        base.UpdateState(creature);

        charge -= Time.deltaTime;
        if (charge <= 0)
            creature.SwitchState(creature.attackState);
        
      
    }
    public override void OnTriggerEnter(CowStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);
        if (other.gameObject.CompareTag("PlayerAttack"))//被這個打到要表演
        {
            int damage = other.gameObject.GetComponentInParent<CharacterBase>().GetAttack();
            Vector3 forcePos = new Vector3(creature.transform.position.x - other.transform.position.x, 0, creature.transform.position.z - other.transform.position.z);
            rb.AddForce(forcePos * 500);
            creature.currentHP -= damage;
            creature.SwitchState(creature.hurtState);
        }
    }

}
public class CowAttackState : CowBaseState
{
    Vector3 target;

    float wait; //攻擊結束等待時間
    public override void EnterState(CowStateManager creature)
    {
        creature.ani.SetTrigger("Attack_2");

        base.EnterState(creature);
        target = playerTrans.position;
    }

    public override void UpdateState(CowStateManager creature)
    {
        rb.transform.LookAt(new Vector3(target.x, creature.transform.position.y, target.z));

        creature.transform.position = 
            Vector3.MoveTowards(
                creature.transform.position, target,creature.creatureBase.GetSpeed(Cow)*15*Time.deltaTime);
        wait -= Time.deltaTime;
        if (wait <= 0)      
            creature.SwitchState(creature.moveState);
        
    }
    public override void OnTriggerEnter(CowStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);
    }
}
public class CowHurtState : CowBaseState
{
    bool stiff = false;

    public override void EnterState(CowStateManager creature)
    {

        int hp = creature.currentHP;
        if (hp <= 0)
        {
            creature.SwitchState(creature.dieState);

        }
        else
        {
            stiff = true;
        }
        base.EnterState(creature);
    }
    public override void UpdateState(CowStateManager creature)
    {
        base.UpdateState(creature);
        creature.StartCoroutine(StiffTime(2));
        if (!stiff)
            creature.SwitchState(creature.moveState);
    }
    IEnumerator StiffTime(float time)
    {
        yield return new WaitForSeconds(time);
        stiff = false;
    }
    public override void OnTriggerEnter(CowStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);
    }
}
public class CowDieState : CowBaseState
{
    public override void EnterState(CowStateManager creature)
    {   
        base.EnterState(creature);
        creature.CompareTag("DeadEnemy");

        creature.ani.SetTrigger("Die");
        creature.creatureBase.GetDrop(creature.creatureBase.GetCreature(Cow), creature.transform);
    }
    public override void UpdateState(CowStateManager creature)
    {
    }
    public override void OnTriggerEnter(CowStateManager creature, Collider other)
    {
    }
}
#endregion