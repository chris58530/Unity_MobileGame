using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class RatStateManager : MonoBehaviour
{
    public RatBaseState currentState;
    public RatAttackState attackState = new RatAttackState();
    public RatIdleState idleState = new RatIdleState();
    public RatHurtState hurtState = new RatHurtState();
    public RatMoveState moveState = new RatMoveState();

    public CreatureDataBaseSO CreatureData;


    private void Start()
    {
        currentState = idleState;

        currentState.EnterState(this);

        CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).currentHP = CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).maxHP;

    }
    private void FixedUpdate()
    {
        if (currentState == null)
            currentState = idleState;
        else
            currentState.UpdateState(this);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (currentState == null)
            currentState = idleState;
        else
            currentState.OnTriggerEnter(this, other);
    }

    public void SwitchState(RatBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
