using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stove : MonoBehaviour
{
    public GameObject select;
    private void OnEnable()
    {
        select = GameObject.Find("SystemCanvas");
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") || other.CompareTag("PlayerAttack"))
        {
            select.transform.Find("SelectCanvas").gameObject.SetActive(true);


            Destroy(gameObject);
        }
    }
}
