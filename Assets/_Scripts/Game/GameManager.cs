using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;



    private void Awake()
    {
        instance = this;
    }
   
    public void PauseTime(bool b)
    {
        Time.timeScale = b ? 0 : 1;
    }
    private void OnDisable()
    {
        PauseTime(false);
    }
  
}
