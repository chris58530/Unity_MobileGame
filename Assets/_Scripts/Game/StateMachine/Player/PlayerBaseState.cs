using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PlayerBaseState 
{

    public abstract void EnterState(OctopusStateManager creature);
    public abstract void UpdateState(CreatureStateManager creature);
    public abstract void OnCollisionEnter(CreatureStateManager creature, Collision collision);
}

