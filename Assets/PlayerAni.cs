using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAni : MonoBehaviour
{
    Animator ani;
    private void Awake()
    {
        ani = GetComponent<Animator>(); 
    }

}
