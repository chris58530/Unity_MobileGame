using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stove : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player") || collision.CompareTag("PlayerAttack"))
        {
            Destroy(gameObject);
            GameObject.Find("Selection Menu").SetActive(true);

        }
    }
}
