using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Rigidbody))]
public class PlayerController : MonoBehaviour 
{
    public delegate void playerDelegate();
    playerDelegate playerState;

    [SerializeField] float forceStrength;


    [SerializeField] private Rigidbody rb;

    [SerializeField] protected FixedJoystick joystick;

    [SerializeField] float moveSpeed;

    [SerializeField] float attackCD;

    [SerializeField] CapsuleCollider attackCollider;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    private void Start()
    {
        playerState += Pattern_Move;

    }

    private void FixedUpdate()
    {
        if (playerState != null)
        {
            playerState();
        }
        //if(Input.touchCount == 0)
        //{
        //    Debug.Log("手機專用");
        //}
    }
    public void Pattern_Move()
    {
        rb.velocity = new Vector3(joystick.Horizontal * moveSpeed, rb.velocity.y, joystick.Vertical * moveSpeed);
        if (joystick.Horizontal != 0 || joystick.Vertical != 0)
        {
            transform.rotation = Quaternion.LookRotation(rb.velocity);
        }
    }
    public void GetDamage(Transform creature)
    {
        playerState -= Pattern_Move;

        Vector3 forcePos = new Vector3(creature.transform.position.x-transform.position.x, 0, creature.transform.position.z-transform.position.z);      
        rb.AddForce(-forcePos.normalized * forceStrength *100);
        StartCoroutine(countTime(0.25f, Pattern_Move));

    }
    public void Attack()
    {
    }
    IEnumerator countTime(float setTime,playerDelegate playerDelegate)
    {
        yield return new WaitForSeconds(setTime);
        playerState += playerDelegate;
    }

}
