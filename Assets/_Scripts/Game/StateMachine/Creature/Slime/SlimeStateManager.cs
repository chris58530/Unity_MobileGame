using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class SlimeStateManager : MonoBehaviour
{
    public SlimeBaseState currentState;

    public SlimeMoveState moveState = new SlimeMoveState();
    public SlimeHurtState hurtState = new SlimeHurtState();

    [HideInInspector]
    public CreatureBase creatureBase;

    public float currentAttackCD;
    public float currentDamagedCD;
    public float currentMoveSpeed;


    public int currentHP;

    private void Awake()
    {
        creatureBase = GetComponent<CreatureBase>();
    }
    private void Start()    
    {
        currentState = moveState;

        currentState.EnterState(this);

        currentHP = creatureBase.GetCreature("Slime").maxHP;

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
