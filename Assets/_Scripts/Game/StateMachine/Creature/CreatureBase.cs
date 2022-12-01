using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatureBase : MonoBehaviour
{
    Transform playerTrans;
    private void Start()
    {
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
    }
    private void Update()
    {
        DistanceWithPlayer();
    }
    private void DistanceWithPlayer()
    {
        float dis = Vector3.Distance(playerTrans.position, transform.position);
        if (dis > 100)
        {
            Destroy(transform.gameObject);
        }
    }
}
