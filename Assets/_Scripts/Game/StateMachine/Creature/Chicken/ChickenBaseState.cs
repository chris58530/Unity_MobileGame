using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ChickenBaseState
{
    protected string Chicken = "Chicken";

    public virtual void EnterState(ChickenStateManager creature)
    {
        Debug.Log(string.Format("<color=#fff000>{0}</color>", creature.currentState + "模式"));

    }
    public abstract void UpdateState(ChickenStateManager creature);
    public virtual void OnTriggerEnter(ChickenStateManager creature, Collider other)
    {
        if (other.gameObject.CompareTag("PlayerAttack"))
        {
            creature.SwitchState(creature.hurtState);
        }
        if (other.gameObject.CompareTag("Player"))
        {
            creature.ani.SetTrigger("Attack");

        }
        if (other.gameObject.CompareTag("Bullet"))//被這個打到不用表演
        {
            int damage = other.gameObject.GetComponent<Bullet>().GetBulletDamage();
            creature.currentHP -= damage;
            Debug.Log(damage);
        }
    }
}
#region Chicken:  Move  Hurt 

public class ChickenMoveState : ChickenBaseState
{
    Rigidbody rb;


    public override void EnterState(ChickenStateManager creature)
    {
        base.EnterState(creature);
        rb = creature.GetComponent<Rigidbody>();

    }

    public override void UpdateState(ChickenStateManager creature)
    {
        Transform playerTrans = creature.creatureBase.playerTrans;
        if (playerTrans != null)
        {
            int speed = creature.creatureBase.GetSpeed(Chicken);
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, speed * Time.deltaTime));
        }
        else
        {
            Debug.Log("NO PlAYER");
        }
    }
    public override void OnTriggerEnter(ChickenStateManager creature, Collider other)
    {
        base.OnTriggerEnter(creature, other);



    }
}


public class ChickenHurtState : ChickenBaseState //計時僵直時間
{
    bool stiff=false;
    public override void EnterState(ChickenStateManager creature)
    {
        int hp = creature.currentHP;
        if (hp <= 0)
        {
            creature.ani.SetTrigger("Die");
            creature.creatureBase.Die(creature.creatureBase.GetCreature(Chicken), creature.transform);
        }
        else
        {
            //creature.ani.SetTrigger("Hurt"); //並沒有
            stiff = true;
        }
        base.EnterState(creature);
    }
    public override void UpdateState(ChickenStateManager creature)
    {
        creature.StartCoroutine(StiffTime(2));
        if (!stiff)
            creature.SwitchState(creature.moveState);


    }
    IEnumerator StiffTime(float time)
    {
        yield return new WaitForSeconds(time);
        stiff = false;
    }
}

#endregion
