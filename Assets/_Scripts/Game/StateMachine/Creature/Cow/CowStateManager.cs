using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class CowStateManager : MonoBehaviour
{
    public CowBaseState currentState;
    public CowAttackState attackState = new CowAttackState();
    public CowMoveState moveState = new CowMoveState();
    public CowChargeState chargeState = new CowChargeState();
    public CowHurtState hurtState = new CowHurtState();
    public CowDieState dieState = new CowDieState();

    [HideInInspector]
    public CreatureBase creatureBase;
    public int currentHP;
    public Animator ani;

    public float attackDistance = 15;
    public float attackTime = 3;//§ðÀ»½Ä¨ë®É¶¡

    private void Awake()
    {
        creatureBase = GetComponent<CreatureBase>();
        currentHP = creatureBase.GetHealth("Cow");
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
   

    public void SwitchState(CowBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }
}
