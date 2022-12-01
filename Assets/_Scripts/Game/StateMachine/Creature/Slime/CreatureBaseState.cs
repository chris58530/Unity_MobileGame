using System.Collections;
using UnityEngine;

public abstract class CreatureBaseState
{
    public abstract void EnterState(CreatureStateManager creature);
    public abstract void UpdateState(CreatureStateManager creature);
    public virtual void OnCollisionEnter(CreatureStateManager creature,Collision collision)
    {
        if(collision.gameObject.CompareTag("Player"))
        {
            creature.SwitchState(creature.attackState);
        }
    }
}

