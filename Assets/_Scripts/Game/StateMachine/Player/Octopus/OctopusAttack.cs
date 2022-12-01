using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OctopusAttack : MonoBehaviour
{
    [SerializeField]
    private GameObject attackObject;
    public void Attack()
    {
        Debug.Log("PlayerAttack!");
        attackObject.GetComponent<CapsuleCollider>().enabled = true;
        attackObject.GetComponent<MeshRenderer>().enabled = true;
        StartCoroutine(Enabled());
        //³]¸m°ÊµeEvent
    }
    IEnumerator Enabled()
    {
        yield return new WaitForSeconds(0.25f);
        Debug.Log("PlayerDontAttack!");

        attackObject.GetComponent<MeshRenderer>().enabled = false;
        attackObject.GetComponent<CapsuleCollider>().enabled = false;

    }

}
