using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatureMoveState : CreatureBaseState
{
    Transform playerTrans;

    Rigidbody rb;
    public override void EnterState(CreatureStateManager creature)
    {
        Debug.Log("Move EnterState");
        rb = creature.GetComponent<Rigidbody>();
        playerTrans = GameObject.Find("Player").transform;
    }
    public override void UpdateState(CreatureStateManager creature)
    {
        if (playerTrans != null)
        {
            rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y,playerTrans.position.z));
            rb.transform.Translate(new Vector3(0, 0, 1 * Time.deltaTime));
        }
        else
        {
            Debug.Log("NO PlAYER");
            creature.SwitchState(creature.destroyState);

        }

    }
    public override void OnCollisionEnter(CreatureStateManager creature, Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("Attack PlAYER");
            //collision.gameObject.GetComponent<PlayerController>().GetComponent<Rigidbody>().velocity = creature.transform.position * 100;
            //collision.gameObject.GetComponent<PlayerController>().GetDamage(creature);
        }
    }
}
