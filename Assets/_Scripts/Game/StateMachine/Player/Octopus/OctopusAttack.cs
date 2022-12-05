using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OctopusAttack : MonoBehaviour
{
    [SerializeField]
    private GameObject attackObject;
    public void Attack()
    {
        attackObject.GetComponent<CapsuleCollider>().enabled = true;
        attackObject.GetComponent<MeshRenderer>().enabled = true;
        StartCoroutine(Enabled());
        //³]¸m°ÊµeEvent
    }
    IEnumerator Enabled()
    {
        yield return new WaitForSeconds(0.25f);

        attackObject.GetComponent<MeshRenderer>().enabled = false;
        attackObject.GetComponent<CapsuleCollider>().enabled = false;

    }

}
