using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class FoodLockUI : MonoBehaviour
{
    [SerializeField]
    private FoodDataBaseSO foodData;

    [SerializeField]
    private GameObject[] foodLockImage;
    private TMP_Text[] foodText;
    private void LateUpdate()
    {
        UnlockFood();
    }
    void UnlockFood()
    {
        for (int i = 0; i < PlayerCurrentData.AbilityCount; i++)
        {
            foodLockImage[i].SetActive(false);
        }
    }
    public void B4()
    {
        int cost1 = 1;
        int cost2 = 1;
        int cost3 = 1;

        if ((PlayerCurrentData.itemCount[4] - cost1) >= 0)
        {
            if ((PlayerCurrentData.itemCount[10] - cost2) >= 0)
            {
                if ((PlayerCurrentData.itemCount[2] - cost3) >= 0)
                {
                    PlayerCurrentData.itemCount[4] -= cost1;
                    PlayerCurrentData.itemCount[10] -= cost2;
                    PlayerCurrentData.itemCount[2] -= cost3;
                    PlayerCurrentData.AbilityCount++;
                    SoundManager.instance.UnlcokItem();
                }
            }
        }
    }
    public void B5()
    {
        int cost1 = 1;
        int cost2 = 1;
        int cost3 = 1;
        if ((PlayerCurrentData.itemCount[4] - cost1) >= 0)
        {
            if ((PlayerCurrentData.itemCount[10] - cost2) >= 0)
            {
                if ((PlayerCurrentData.itemCount[0] - cost3) >= 0)
                {
                    PlayerCurrentData.itemCount[4] -= cost1;
                    PlayerCurrentData.itemCount[10] -= cost2;
                    PlayerCurrentData.itemCount[0] -= cost3;
                    PlayerCurrentData.AbilityCount++;
                    SoundManager.instance.UnlcokItem();

                }
            }
        }
    }
    public void B6()
    {
        int cost1 = 1;
        int cost2 = 1;
        int cost3 = 1;
        if ((PlayerCurrentData.itemCount[4] - cost1) >= 0)
        {
            if ((PlayerCurrentData.itemCount[10] - cost2) >= 0)
            {
                if ((PlayerCurrentData.itemCount[8] - cost3) >= 0)
                {
                    PlayerCurrentData.itemCount[4] -= cost1;
                    PlayerCurrentData.itemCount[10] -= cost2;
                    PlayerCurrentData.itemCount[8] -= cost3;
                    PlayerCurrentData.AbilityCount++;

                    SoundManager.instance.UnlcokItem();
                }
            }
        }
    }
    public void B7()
    {
        int cost1 = 1;
        int cost2 = 1;
        int cost3 = 1;
        if ((PlayerCurrentData.itemCount[4] - cost1) >= 0)
        {
            if ((PlayerCurrentData.itemCount[10] - cost2) >= 0)
            {
                if ((PlayerCurrentData.itemCount[5] - cost3) >= 0)
                {
                    PlayerCurrentData.itemCount[4] -= cost1;
                    PlayerCurrentData.itemCount[10] -= cost2;
                    PlayerCurrentData.itemCount[5] -= cost3;
                    PlayerCurrentData.AbilityCount++;
                    SoundManager.instance.UnlcokItem();

                }
            }
        }
    }
}
