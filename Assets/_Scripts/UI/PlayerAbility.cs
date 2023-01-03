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
    private Button button1 , button2, button3;

    [SerializeField]
    private Image[] abilityArray;

    public int abliltyCount = 0;

    private int currentFoodIndex1;
    private int currentFoodIndex2;
    private int currentFoodIndex3;

    private GameObject player;
    private void OnEnable()
    {
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
        abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex1).foodIcon;
        abliltyCount++;
        //switch (currentFoodIndex1)
        //{
        //    case 0:
        //        CharacterBase characterBase =  player.GetComponent<CharacterBase>();
        //        break;

           
        //}
    }
    public void ButtonClick_2() //有空要架構化
    {
        abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex2).foodIcon;
        abliltyCount++;
        //switch (currentFoodIndex1)
        //{
        //    case 0:
        //        CharacterBase characterBase =  player.GetComponent<CharacterBase>();
        //        break;


        //}
    }
    public void ButtonClick_3() //有空要架構化
    {
        abilityArray[abliltyCount].sprite = foodData.GetFood(currentFoodIndex3).foodIcon;
        abliltyCount++;
        //switch (currentFoodIndex1)
        //{
        //    case 0:
        //        CharacterBase characterBase =  player.GetComponent<CharacterBase>();
        //        break;


        //}
    }
}
