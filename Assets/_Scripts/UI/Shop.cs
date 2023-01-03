using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Shop : MonoBehaviour
{
    [SerializeField]
    private IngredientsDataSO ingredientsData;

    public static int item1 = 0;
    public static int item2 = 0;
    public static int item3 = 0;
    [SerializeField]
    private Image itemImage1;
    [SerializeField]
    private Image itemImage2;
    [SerializeField]
    private Image itemImage3;

    [SerializeField]
    private TMP_Text name1;
    [SerializeField]
    private TMP_Text name2;
    [SerializeField]
    private TMP_Text name3;

    [SerializeField]
    private TMP_Text cost1;
    [SerializeField]
    private TMP_Text cost2;
    [SerializeField]
    private TMP_Text cost3;

    private void LateUpdate()
    {
        cost1.text = ingredientsData.GetIngredient(item1).cost.ToString();
        cost2.text = ingredientsData.GetIngredient(item2).cost.ToString();
        cost3.text = ingredientsData.GetIngredient(item3).cost.ToString();
        itemImage1.sprite = ingredientsData.GetIngredient(item1).sprite;
        itemImage2.sprite = ingredientsData.GetIngredient(item2).sprite;
        itemImage3.sprite = ingredientsData.GetIngredient(item3).sprite;
        name1.text = ingredientsData.GetIngredient(item1).name.ToString();
        name2.text = ingredientsData.GetIngredient(item2).name.ToString();
        name3.text = ingredientsData.GetIngredient(item3).name.ToString();

        Debug.Log(PlayerCurrentData.itemCount[1]);

    }
    public void Item1()
    {
        int cost = ingredientsData.GetIngredient(item1).cost;
        if ((PlayerCurrentData.playerMoney - cost) >= 0)
        {
            PlayerCurrentData.playerMoney -= cost;
            PlayerCurrentData.itemCount[item1] += 1;
            Debug.Log(PlayerCurrentData.itemCount[item1]);
        }
        else Debug.Log("金錢不夠");
    }
    public void Item2()
    {
        int cost = ingredientsData.GetIngredient(item2).cost;
        if ((PlayerCurrentData.playerMoney - cost) >= 0)
        {
            PlayerCurrentData.itemCount[item2] += 1;
            PlayerCurrentData.playerMoney -= cost;
            Debug.Log(PlayerCurrentData.itemCount[item2]);

        }
        else Debug.Log("金錢不夠");
    }
    public void Item3()
    {
        int cost = ingredientsData.GetIngredient(item3).cost;
        if ((PlayerCurrentData.playerMoney - cost) >= 0)
        {
            PlayerCurrentData.itemCount[item3] += 1;
            PlayerCurrentData.playerMoney -= cost;
            Debug.Log(PlayerCurrentData.itemCount[item3]);
        }
        else Debug.Log("金錢不夠");
    }
    public void MoneyB1()
    {
        int cost = 1;
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= 1;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("寶石不夠");
       
    }
    public void MoneyB2()
    {
        int cost = 10; 
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= cost;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("寶石不夠");
      

    }
    public void MoneyB3()
    {
        int cost = 50; 
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= cost;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("寶石不夠");
        

    }
    public void RubyB1()
    {
        PlayerCurrentData.playerRuby += 1;
    }
    public void RubyB2()
    {
        PlayerCurrentData.playerRuby += 12;
    }
    public void RubyB3()
    {
        PlayerCurrentData.playerRuby += 40;
    }
}
