using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuRotate : MonoBehaviour
{
    [SerializeField]
    [Range(0.05f,1)]
    private float rotateSpeed = 0.1f;
    
    void Update()
    {
        transform.Rotate(Vector3.down * rotateSpeed, Space.World);
    }
}
