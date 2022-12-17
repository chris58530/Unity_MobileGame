using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorEvent : MonoBehaviour
{
    public void Destroy()
    {
        Destroy(gameObject.transform.parent.gameObject);
    }
}
