using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class MChickenStateManager : MonoBehaviour
{
    public MChickenBaseState currentState;
    public MChickenHurtState hurtState = new MChickenHurtState();
    public MChickenMoveState moveState = new MChickenMoveState();

    public CreatureDataBaseSO CreatureData;


    private void Start()
    {
        currentState = moveState;

        currentState.EnterState(this);

        //CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHP = CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).maxHP;

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
    

    public void SwitchState(MChickenBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
