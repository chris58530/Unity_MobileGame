using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MChickenBaseState
{
    protected string Chicken = "Chicken";
    public virtual void EnterState(MChickenStateManager creature)
    {
        Debug.Log(string.Format("<color=#fff000>{0}</color>", creature.currentState + "模式"));
    }
    public abstract void UpdateState(MChickenStateManager creature);
    public virtual void OnTriggerEnter(MChickenStateManager creature, Collider other)
    {
        if (other.gameObject.CompareTag("PlayerAttack"))
        {
            float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
            creature.CreatureData.GetCreature(Chicken).currentHP -= damage;
            creature.SwitchState(creature.hurtState);
        }
    }
}
#region NChicken:  Move  Hurt 

public class MChickenMoveState : MChickenBaseState
{
    Transform playerTrans;
    Rigidbody rb;


    public override void EnterState(MChickenStateManager creature)
    {
        base.EnterState(creature);
        rb = creature.GetComponent<Rigidbody>();
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;

    }

    public override void UpdateState(MChickenStateManager creature)
    {
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            //rb.transform.Translate(new Vector3(0, 0,  creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).moveSpeed * Time.deltaTime));
        }
        else
        {
            Debug.Log("NO PlAYER");

        }
    }
    public override void OnTriggerEnter(MChickenStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);


   
    }
}


public class MChickenHurtState : MChickenBaseState //計時僵直時間
{
    public override void EnterState(MChickenStateManager creature)
    {
        if(creature.CreatureData.GetCreature(Chicken).currentHP <= 0)
            GameObject.Destroy(creature.gameObject);
       base.EnterState(creature);
       creature.CreatureData.GetCreature(Chicken).currentHurtCD = creature.CreatureData.GetCreature(Chicken).hurtCD;
    }
    public override void UpdateState(MChickenStateManager creature)
    {
        if (creature.CreatureData.GetCreature(Chicken).currentHurtCD > 0)
            creature.CreatureData.GetCreature(Chicken).currentHurtCD -= Time.deltaTime;
        else
            creature.SwitchState(creature.moveState);
    }
}

#endregion
