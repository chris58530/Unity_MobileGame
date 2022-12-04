using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamagePopUp : MonoBehaviour
{
    Camera Camera;
    void Start()
    {
        Camera = FindObjectOfType(typeof(Camera)) as Camera;
    }

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(Camera.main.transform);
    }
}
