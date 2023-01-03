using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class ItemPackage : MonoBehaviour
{
    [SerializeField]
    private TMP_Text[] text;

    private void Update()
    {
        for (int i = 0; i < text.Length; i++)
        {
            text[i].text = PlayerCurrentData.itemCount[i].ToString();
        }
    }
}
