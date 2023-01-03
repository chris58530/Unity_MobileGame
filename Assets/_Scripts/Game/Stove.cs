using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stove : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") || other.CompareTag("PlayerAttack"))
        {
            Destroy(gameObject);
            GameObject selectMenu = GameObject.Find("SelectionMenu");
            selectMenu.gameObject.SetActive(true);
        }
    }
}
