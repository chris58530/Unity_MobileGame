using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class ChickenStateManager : MonoBehaviour
{
    public ChickenBaseState currentState;
    public ChickenHurtState hurtState = new ChickenHurtState();
    public ChickenMoveState moveState = new ChickenMoveState();

    [HideInInspector]
    public CreatureBase creatureBase;

    public int currentHP;

    public Animator ani;
    private void Awake()
    {
        creatureBase = GetComponent<CreatureBase>();
    }


    private void Start()
    {
        currentState = moveState;

        currentState.EnterState(this);

    
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
    

    public void SwitchState(ChickenBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
