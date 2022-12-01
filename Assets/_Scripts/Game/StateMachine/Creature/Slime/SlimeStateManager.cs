using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class SlimeStateManager : MonoBehaviour
{
    public SlimeBaseState currentState;

    public SlimeMoveState moveState = new SlimeMoveState();
    public SlimeHurtState hurtState = new SlimeHurtState();

    public CreatureDataBaseSO creatureData;


    private void Start()    
    {
        currentState = moveState;

        currentState.EnterState(this);

        creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP = creatureData.GetCreature(CreatureDataBaseSO.Name.slime).maxHP;

    }
    private void FixedUpdate()
    {
        if(currentState == null)        
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

    public void SwitchState(SlimeBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
    
}
