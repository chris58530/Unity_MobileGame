using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    private GameObject player;
    [SerializeField] Vector3 offSet;
    public void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }
    private void Update()
    {
        if(player != null)
            transform.position = new Vector3(player.transform.position.x, 0, player.transform.position.z)+offSet;
    }
}
