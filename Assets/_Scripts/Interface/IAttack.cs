using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IAttack
{
    public IEnumerator AttackCD(float CD,GameObject creature);   
}
