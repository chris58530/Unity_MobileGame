using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class SlimeStateManager : MonoBehaviour
{
    public SlimeBaseState currentState;
    public SlimeMoveState moveState = new SlimeMoveState();
    public SlimeHurtState hurtState = new SlimeHurtState();
    public SlimeDieState dieState = new SlimeDieState();

    [HideInInspector]
    public CreatureBase creatureBase;
    public int currentHP;
    public Animator ani;

    private void Awake()
    {
        creatureBase = GetComponent<CreatureBase>();
        currentHP = creatureBase.GetHealth("Slime", (int)Time.time);
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
