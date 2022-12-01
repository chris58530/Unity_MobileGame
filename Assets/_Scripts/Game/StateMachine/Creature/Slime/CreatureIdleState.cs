using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatureIdleState : CreatureBaseState
{
    public float RandomTime;
    public override void EnterState(CreatureStateManager creature)
    {
        RandomTime = Random.Range(1, 2);
        Debug.Log("Idle EnterState");
        Debug.Log(RandomTime);

    }
    public override void UpdateState(CreatureStateManager creature)
    {
        Debug.Log("Idle UpdateState");
        RandomTime -= Time.deltaTime;

        if (RandomTime <= 0)
        {
            creature.SwitchState(creature.moveState);
        }
     

    }
    public override void OnCollisionEnter(CreatureStateManager creature, Collision collision)
    {

    }
}
