using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPointer : MonoBehaviour
{
    public void ClickActive(GameObject o)
    {        
        o.SetActive(!o.activeInHierarchy);
    }
 
}
