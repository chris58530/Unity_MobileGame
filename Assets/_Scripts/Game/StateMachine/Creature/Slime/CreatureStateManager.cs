using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatureStateManager : MonoBehaviour
{
    CreatureBaseState currentState;    

    public CreatureIdleState idleState =new CreatureIdleState();    
    public CreatureAttackState attackState =new CreatureAttackState();
    public CreatureHurtState hurtState =new CreatureHurtState();    
    public CreatureMoveState moveState =new CreatureMoveState();
    public CreatureDestroyState destroyState = new CreatureDestroyState();
    private void Start()
    {
        currentState = idleState;

        currentState.EnterState(this);
    }
    private void FixedUpdate()
    {
        currentState.UpdateState(this); 
    }

    private void OnCollisionEnter(Collision collision)
    {
        currentState.OnCollisionEnter(this,collision);
    }

    public void SwitchState(CreatureBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
