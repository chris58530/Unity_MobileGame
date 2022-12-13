using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CowStateManager : MonoBehaviour
{
    public CowBaseState currentState; //DEBUG 使用 正式版需改為PRIVATES

    public CowIdleState idleState = new CowIdleState();
    public CowMoveState moveState = new CowMoveState();
    public CowAttackState attackState = new CowAttackState();
    public CowHurtState hurtState = new CowHurtState();

    public FixedJoystick fixedJoystick;
    private Vector3 fixedJoystickPos;

    [HideInInspector]
    public CharacterBase characterBase;

    public float currentAttackCD;
    public float currentDamagedCD;
    public float currentMoveSpeed;

    private void Start()
    {
        currentState = idleState;

        currentState.EnterState(this);
        fixedJoystickPos = fixedJoystick.transform.position;

        currentAttackCD = characterBase.GetAttackCD();
        currentDamagedCD = characterBase.GetDamagedCD();
        currentMoveSpeed = characterBase.GetMoveSpeed();

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

    public void SwitchState(CowBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
