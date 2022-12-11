using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Menu_PanelFive : MonoBehaviour
{
    [SerializeField]
    private GameObject panelType1, panelType2, panelType3;

    private void Start()
    {
        panelType1.SetActive(true);
        panelType2.SetActive(false);
        panelType3.SetActive(false);
    }
    public void ChangeActiveType(int num)
    {
        switch (num)
        {
            case 1:
                panelType1.SetActive(true);
                panelType2.SetActive(false);
                panelType3.SetActive(false);
                break;
            case 2:
                panelType1.SetActive(false);
                panelType2.SetActive(true);
                panelType3.SetActive(false);
                break;
            case 3:
                panelType1.SetActive(false);
                panelType2.SetActive(false);
                panelType3.SetActive(true);
                break;
            default:
                panelType1.SetActive(true);
                panelType2.SetActive(false);
                panelType3.SetActive(false);
                break;
        }
    }
}
