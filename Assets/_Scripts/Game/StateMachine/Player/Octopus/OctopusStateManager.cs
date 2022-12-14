using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class OctopusStateManager : MonoBehaviour
{

    public OctopusBaseState currentState; //DEBUG 使用 正式版需改為PRIVATE!!!!!!

    public OctopusAttackState attackState = new OctopusAttackState();
    public OctopusDestroyState destroyState = new OctopusDestroyState();
    public OctopusHurtState hurtState = new OctopusHurtState();
    public OctopusMoveState moveState = new OctopusMoveState();
    public OctopusIdleState idleState = new OctopusIdleState();

    [HideInInspector]
    public CharacterBase characterBase;

    public float currentAttackCD;
    public float currentDamagedCD;
    public float currentMoveSpeed;
    public float currentHp;

    public FloatingJoystick floatingJoystick;





    public Animator octopusAni;
    private void Awake()
    {
        characterBase = GetComponent<CharacterBase>();
        floatingJoystick = FindObjectOfType<FloatingJoystick>();

    }
    private void Start()
    {
        currentState = idleState;

        currentState.EnterState(this);

        currentAttackCD = characterBase.GetAttackCD();
        currentDamagedCD = characterBase.GetDamagedCD();
        currentMoveSpeed = characterBase.GetMoveSpeed();
        currentHp = characterBase.GetHealth();

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

    public void SwitchState(OctopusBaseState creatureBaseState)
    {
        currentState = creatureBaseState;
        creatureBaseState.EnterState(this);
    }


}
