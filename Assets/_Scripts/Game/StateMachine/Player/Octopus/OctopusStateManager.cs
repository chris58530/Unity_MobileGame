using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OctopusStateManager : MonoBehaviour
{

    public OctopusBaseState currentState; //DEBUG 使用 正式版需改為PRIVATE!!!!!!

    public OctopusAttackState attackState = new OctopusAttackState();
    public OctopusDestroyState destroyState = new OctopusDestroyState();
    public OctopusHurtState hurtState = new OctopusHurtState();
    public OctopusMoveState moveState = new OctopusMoveState();
    public OctopusIdleState idleState = new OctopusIdleState();

    public PlayerDataBaseSO playerData;

    public FixedJoystick fixedJoystick;
    private Vector3 fixedJoystickPos;
    private void Start()
    {
        currentState = idleState;
        playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD = playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).attackCD;

        currentState.EnterState(this);
        fixedJoystickPos = fixedJoystick.transform.position;

    }
    private void FixedUpdate()
    {
        if (currentState == null)
            currentState = idleState;
        else
            currentState.UpdateState(this);
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (currentState == null)
            currentState = idleState;
        else
            currentState.OnCollisionEnter(this, collision);
    }

    public void SwitchState(OctopusBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }


}
