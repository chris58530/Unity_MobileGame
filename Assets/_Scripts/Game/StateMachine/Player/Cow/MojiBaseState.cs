using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MojiBaseState
{
    protected Rigidbody rb;
    protected bool canAttack;
    public virtual void EnterState(MojiStateManager creature)
    {
        //Debug.Log("MOJI" + creature.currentState );
        rb = creature.GetComponent<Rigidbody>();
        //rb.constraints = RigidbodyConstraints.FreezePositionY;

    }
    public virtual void UpdateState(MojiStateManager creature)
    {

        //放開自動攻擊
        if (!Input.anyKey && canAttack)
            creature.SwitchState(creature.attackState);
        else
            creature.SwitchState(creature.moveState);

        //持續減攻擊CD並傳回CD bar CD採用加法方式計時
        float attackCD = creature.characterBase.GetAttackCD() ;
        if (creature.currentAttackCD < attackCD)
        {
            creature.currentAttackCD += (1 *Time.deltaTime * PlayerAbility.ability_RideAttackSpeed);
            creature.characterBase.CDBarUpdate(creature.currentAttackCD);
            canAttack = false;
        }
        else
            canAttack = true;



        if (creature.currentDamagedCD > 0)
        {
            creature.currentDamagedCD -= Time.deltaTime;
        }
    }

    public virtual void OnCollisionEnter(MojiStateManager creature, Collision collision)
    {
        if (collision.gameObject.tag == ("EnemyAttack") && creature.currentDamagedCD <= 0)
        {
            //重設受傷CD時間
            creature.currentDamagedCD = creature.characterBase.GetDamagedCD();


            //彈開
            float forceX = creature.transform.position.x - collision.transform.position.x;
            float forceZ = creature.transform.position.z - collision.transform.position.z;
            Vector3 forcePos = new Vector3(forceX, 0, forceZ);
            rb.AddForce(forcePos * 500);

            //扣血
            //string collisionName = collision.gameObject.GetComponent<CreatureBase>().GetName();
            string collisionName = collision.gameObject.GetComponent<CreatureBase>().Name;
            int damage = collision.gameObject.GetComponent<CreatureBase>().GetAttack(collisionName, (int)Time.time);
            creature.currentHp -= damage;
            Debug.Log("玩家受到  " + collisionName + " : " + damage + "  的傷害");
            creature.characterBase.OnDamaged(creature.currentHp);
            //鏡頭晃動



            //Shader閃紅

            creature.SwitchState(creature.hurtState);
        }
    }
}
#region Player_Moji: Idle Move Attack Hurt Destroy


public class MojiIdleState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);
        creature.tag = ("Player");

        BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
        boxCollider.isTrigger = false;


    }
    public override void UpdateState(MojiStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
    }
}
public class MojiAttackState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {

        base.EnterState(creature);
        creature.currentAttackCD = 0;
        creature.characterBase.CDBarUpdate(0);

        creature.ani.SetBool("isWalking", false);
        creature.tag = ("PlayerAttack");

        SoundManager.instance.CowAttack();

        BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
        boxCollider.isTrigger = true;

        

        creature.ani.SetTrigger("Attack");
        creature.StartCoroutine(TimeToIdle(creature));

        canAttack = false;

    }
    public override void UpdateState(MojiStateManager creature)
    {
        if (creature.currentAttackCD < creature.characterBase.GetAttackCD())
        {
            creature.currentAttackCD += (1 * Time.deltaTime);
            creature.characterBase.CDBarUpdate(creature.currentAttackCD);     
        }
  

    }
    IEnumerator TimeToIdle(MojiStateManager creature)
    {
        rb.AddForce(creature.transform.forward * 5000);

        yield return new WaitForSeconds(1);

        creature.SwitchState(creature.idleState);
    }
}
public class MojiMoveState : MojiBaseState
{
    private FloatingJoystick _joystick;

    public override void EnterState(MojiStateManager creature)
    {
        base.EnterState(creature);
        _joystick = creature.floatingJoystick;

    }
    public override void UpdateState(MojiStateManager creature)
    {

        base.UpdateState(creature);

        float moveX = creature.floatingJoystick.Horizontal;
        float moveY = creature.floatingJoystick.Vertical;
        float speed = (creature.currentMoveSpeed + PlayerAbility.ability_RideMoveSpeed);
        rb.velocity = new Vector3(moveX * speed, rb.velocity.y, moveY * speed);
        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
        {
            creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
            creature.ani.SetBool("isWalking", true);
        }
        else
            creature.ani.SetBool("isWalking", false);
    }
    public override void OnCollisionEnter(MojiStateManager creature, Collision collision)
    {
        base.OnCollisionEnter(creature, collision);
    }
}
public class MojiHurtState : MojiBaseState
{
    public override void EnterState(MojiStateManager creature)
    {
        creature.ani.SetTrigger("Hurt");
        creature.SwitchState(creature.idleState);
        SoundManager.instance.GetHurt();

    }
    public override void UpdateState(MojiStateManager creature)
    {
        if (creature.currentAttackCD <= creature.characterBase.GetAttackCD())
        {
            creature.characterBase.CDBarUpdate(creature.currentDamagedCD);
            creature.currentAttackCD += Time.deltaTime;
            canAttack = false;
        }
        else
            canAttack = true;

    }
}
#endregion
