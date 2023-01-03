using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shop : MonoBehaviour
{
    public void MoneyB1()
    {
        int cost = 1;
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= 1;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("Ä_¥Û¤£°÷");
       
    }
    public void MoneyB2()
    {
        int cost = 10; 
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= cost;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("Ä_¥Û¤£°÷");
      

    }
    public void MoneyB3()
    {
        int cost = 50; 
        if ((PlayerCurrentData.playerRuby - cost) >= 0)
        {
            PlayerCurrentData.playerRuby -= cost;
            PlayerCurrentData.playerMoney += 30;
        }
        else Debug.Log("Ä_¥Û¤£°÷");
        

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
