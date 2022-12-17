using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MojiStateManager : MonoBehaviour
{
    public MojiBaseState currentState; //DEBUG ¨Ï¥Î 

    public MojiIdleState idleState = new MojiIdleState();
    public MojiMoveState moveState = new MojiMoveState();
    public MojiAttackState attackState = new MojiAttackState();
    public MojiHurtState hurtState = new MojiHurtState();

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

    public void SwitchState(MojiBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
