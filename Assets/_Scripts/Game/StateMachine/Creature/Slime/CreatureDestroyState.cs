using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public  class CreatureDestroyState : CreatureBaseState
{
    public override void EnterState(CreatureStateManager creature)
    {
        Debug.Log("Destory EnterState");
        GameObject.Destroy(creature.gameObject);
    }

    public override void OnCollisionEnter(CreatureStateManager creature, Collision collision)
    {
    }

    public override void UpdateState(CreatureStateManager creature)
    {
    }
}
