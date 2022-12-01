using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CowBaseState
{
    public Rigidbody rb;

    public virtual void EnterState(CowStateManager creature)
    {
        Debug.Log(string.Format("<color=#f5f500>{0}</color>", creature.currentState + "¼Ò¦¡"));
        rb = creature.GetComponent<Rigidbody>();
    }
    public virtual void UpdateState(CowStateManager creature)
    {


        if (!Input.anyKey && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD <= 0)
            creature.SwitchState(creature.attackState);
        else
            creature.SwitchState(creature.moveState);

      


        if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD > 0)
            creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD -= Time.deltaTime;

        if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD > 0)
            creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD -= Time.deltaTime;


    }

    public virtual void OnCollisionEnter(CowStateManager creature, Collision collision)
    {
        if (collision.gameObject.tag == ("EnemyAttack") && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD <= 0)
        {
            Debug.Log("EnemyAttack!!!");

            Vector3 forcePos = new Vector3(creature.transform.position.x - collision.transform.position.x, 0, creature.transform.position.z - collision.transform.position.z);
            rb.AddForce(forcePos.normalized * 50 * 100);
            creature.SwitchState(creature.hurtState);
        }
    }
}
#region Player_Cow: Idle Move Attack Hurt Destroy


public class CowIdleState : CowBaseState
{
    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);

    }
    public override void UpdateState(CowStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
    }
}
public class CowAttackState : CowBaseState
{
    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);
        rb.AddForce(creature.transform.forward* 100);
        creature.StartCoroutine(TimeToIdle(creature));

    }
    public override void UpdateState(CowStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
        if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD <= 0)
        {
           creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD = creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).attackCD;
        }
    }
    IEnumerator TimeToIdle(CowStateManager creature)
    {
        Debug.Log("TimeToIdle");
        yield return new WaitForSeconds(1);
        creature.SwitchState(creature.hurtState);
    }
}
public class CowMoveState : CowBaseState
{
    private FixedJoystick _joystick;

    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);
        _joystick = creature.fixedJoystick;

    }
    public override void UpdateState(CowStateManager creature)
    {
        //animation here
        base.UpdateState(creature);
        rb.velocity = new Vector3(creature.fixedJoystick.Horizontal * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).moveSpeed, rb.velocity.y
            , creature.fixedJoystick.Vertical * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).moveSpeed);
        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
        {
            creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
        }
    }
}
public class CowHurtState : CowBaseState
{
    public override void EnterState(CowStateManager creature)
    {
        base.EnterState(creature);
    }
   
}
#endregion
