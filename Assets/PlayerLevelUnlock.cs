using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerLevelUnlock : MonoBehaviour
{
    [SerializeField]
    private GameObject[] lockImage;
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        UnlockLevel();
    }
    void UnlockLevel()
    {
        for (int i = 0; i < PlayerCurrentData.playerLevel; i++)
        {
            lockImage[i].SetActive(true );
        }
    }
    public void UnLockBT()
    {
        if((PlayerCurrentData.playerMoney-1000) >=0)
        {
            PlayerCurrentData.playerMoney -= 1000;
            PlayerCurrentData.playerLevel += 1;
        }
    }
}
