using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerAbility : MonoBehaviour
{
    [SerializeField]
    private FoodDataBaseSO foodData;
    [SerializeField]
    private Button button1, button2, button3;

    [SerializeField]
    private Image[] abilityArray;

    private int[] abilityLevel = { 1, 1, 1, 1, 1 };

    public int abliltyCount = 0;
    string[] abilityNameArray = { "", "", "", "", "" };

    private int currentFoodIndex1 =0;
    private int currentFoodIndex2=0;
    private int currentFoodIndex3 = 0;

    //腳色能力
    public static int ability_BulletDamage = 0;
    public static int ability_CatDetectRange = 0;
    public static float ability_CatShootSpeed = 0;
    public static float ability_RideAttackSpeed = 1;
    public static float ability_RideMoveSpeed = 0;
    public static float ability_RideAttackDamage = 0;
    public static float ability_BulltetScale = 0;

    private void OnEnable()
    {
        GameManager.instance.PauseTime(true);

        currentFoodIndex1 = Random.Range(0, 7);
        currentFoodIndex2 = Random.Range(0, 7);
        while (currentFoodIndex1 == currentFoodIndex2)
        {
            currentFoodIndex2 = Random.Range(0, 7);
        }
        currentFoodIndex3 = Random.Range(0, 7);
        while (currentFoodIndex2 == currentFoodIndex3 || currentFoodIndex1 == currentFoodIndex3)
        {
            currentFoodIndex3 = Random.Range(0, 7);
        }

        button1.image.sprite = foodData.GetFood(currentFoodIndex1).foodSprite;
        TMP_Text text1 = button1.GetComponentInChildren<TMP_Text>();
        text1.text = foodData.GetFood(currentFoodIndex1).introduciotn;


        button2.image.sprite = foodData.GetFood(currentFoodIndex2).foodSprite;
        TMP_Text text2 = button2.GetComponentInChildren<TMP_Text>();
        text2.text = foodData.GetFood(currentFoodIndex2).introduciotn;


        button3.image.sprite = foodData.GetFood(currentFoodIndex3).foodSprite;
        TMP_Text text3 = button3.GetComponentInChildren<TMP_Text>();
        text3.text = foodData.GetFood(currentFoodIndex3).introduciotn;
    }
    public void ButtonClick_1() //有空要架構化
    {
        for (int i = 0; i < 5; i++)
        {
            string foodName = foodData.GetFood(currentFoodIndex1).name;
            if (abilityNameArray[i] == foodName)
            {
                TMP_Text text = abilityArray[i].GetComponentInChildren<TMP_Text>();
                text.text = abilityLevel[i].ToString();
                abilityLevel[i]++; 
                AddAbility(currentFoodIndex1);
             
                return;
            }
        }
        if (abliltyCount < 5)
        {
            abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex1).foodIcon;
            abilityArray[abliltyCount].gameObject.SetActive(true);
            abilityNameArray[abliltyCount] = foodData.GetFood(currentFoodIndex1).name;
            TMP_Text text = abilityArray[abliltyCount].GetComponentInChildren<TMP_Text>();
            text.text = abilityLevel[abliltyCount].ToString();
            abilityLevel[abliltyCount]++;

            abliltyCount++; 
            AddAbility(currentFoodIndex1);
            return;
        }
    }
    public void ButtonClick_2() //有空要架構化
    {
        for (int i = 0; i < 5; i++)
        {
            string foodName = foodData.GetFood(currentFoodIndex2).name;
            if (abilityNameArray[i] == foodName)
            {
                TMP_Text text = abilityArray[i].GetComponentInChildren<TMP_Text>();
                text.text = abilityLevel[i].ToString();
                abilityLevel[i]++;
                AddAbility(currentFoodIndex2);
                return;
            }
        }
        if (abliltyCount < 5)
        {
            abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex2).foodIcon;
            abilityArray[abliltyCount].gameObject.SetActive(true);
            abilityNameArray[abliltyCount] = foodData.GetFood(currentFoodIndex2).name;
            TMP_Text text = abilityArray[abliltyCount].GetComponentInChildren<TMP_Text>();
            text.text = abilityLevel[abliltyCount].ToString();
            abilityLevel[abliltyCount]++;
            abliltyCount++;
            AddAbility(currentFoodIndex2);
            return;
        }
    }
    public void ButtonClick_3() //有空要架構化
    {
        for (int i = 0; i < 5; i++)
        {
            string foodName = foodData.GetFood(currentFoodIndex3).name;
            if (abilityNameArray[i] == foodName)
            {
                TMP_Text text = abilityArray[i].GetComponentInChildren<TMP_Text>();
                text.text = abilityLevel[i].ToString();
                abilityLevel[i]++;
                AddAbility(currentFoodIndex3);
               
                return;
            }
        }
        if (abliltyCount < 5)
        {
            abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex3).foodIcon;
            abilityArray[abliltyCount].gameObject.SetActive(true);
            abilityNameArray[abliltyCount] = foodData.GetFood(currentFoodIndex3).name;
            TMP_Text text = abilityArray[abliltyCount].GetComponentInChildren<TMP_Text>();
            text.text = abilityLevel[abliltyCount].ToString();
            abilityLevel[abliltyCount]++;
            abliltyCount++;
            AddAbility(currentFoodIndex3);
            return;
        }
    }
    public void AddAbility(int count)
    {
        switch (count)
        {
            case 0:
                Debug.Log("薯條能力 加射擊範圍");
               
                ability_CatDetectRange += 1;
                break;
            case 1 :
                Debug.Log("可頌能力 加坐騎攻擊速度");

                ability_RideAttackSpeed += 0.1f;
                break;
            case 2 :

                Debug.Log("拉麵能力 加貓攻擊速度");
            
                ability_CatShootSpeed += 0.1f;
                break;
            case 3 :
                Debug.Log("牛排飯能力 加移動速度");

                ability_RideMoveSpeed += 3;
                break;
            case 4 :

                Debug.Log("蔬菜湯能力 加坐騎攻擊傷害");
                ability_RideAttackDamage += 2;
                break;
            case 5 :
                Debug.Log("南瓜派能力 加貓攻擊傷害");
                ability_BulletDamage += 1;
                break;
            case 6 :
                Debug.Log("香菇雞湯能力 加腳色體積");

                ability_BulltetScale += 1;
                break;
        }
        GameObject select = GameObject.Find("SystemCanvas");
        select.transform.Find("SelectCanvas").gameObject.SetActive(false);
    }
    private void OnDisable()
    {
        GameManager.instance.PauseTime(false);

    }
}
