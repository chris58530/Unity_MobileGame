using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PCowStateManager : MonoBehaviour
{
    public PCowBaseState currentState;
    public PCowAttackState attackState = new PCowAttackState();
    public PCowMoveState moveState = new PCowMoveState();
    public PCowChargeState chargeState = new PCowChargeState();

    public CreatureDataBaseSO CreatureData;


    private void Start()
    {
        currentState = moveState;

        currentState.EnterState(this);

        CreatureData.GetCreature("PCow").currentHP = CreatureData.GetCreature("PCow").maxHP;
    }
    private void FixedUpdate()
    {
        if (currentState == null)
            currentState = moveState;
        else
            currentState.UpdateState(this);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (currentState == null)
            currentState = moveState;
        else
            currentState.OnTriggerEnter(this, other);
    }
   

    public void SwitchState(PCowBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
