using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCurrentData : MonoBehaviour
{

    public static PlayerCurrentData instance;

    public string playerPID;
    public int playerLevel;
    public int playerMoney;
    public int playerRuby;

    private void Awake()
    {
        instance = this;
    }
    public int GetPlayerID()
    {

        return instance.GetPlayerID();
    }
    //public int GetPlayerLevel()
    //{
    //    SQLConnection connection = new SQLConnection();

    //}
}
