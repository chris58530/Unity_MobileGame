using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Resteruant : MonoBehaviour
{
    [SerializeField]
    private TMP_Text moneyCount;

    private float money;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        money += (1 *PlayerCurrentData.AbilityCount*Time.deltaTime);
        moneyCount.text = Mathf.Round(money).ToString();
       
    }
    public void PickMoney()
    {
        SoundManager.instance.Coin();
        PlayerCurrentData.playerMoney += (int)Mathf.Round(money);  
        money = 0;
    }
}
