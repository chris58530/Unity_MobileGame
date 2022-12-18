using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TimeCount : MonoBehaviour
{
    [SerializeField]
    private  TextMeshProUGUI timer;

    [SerializeField]
    private int m ;
    [SerializeField]
    private int s ;
    private void Start()
    {
       StartCoroutine(StartTime());
    }
    IEnumerator StartTime()
    {

        while (m >= 0)
        {
            timer.text = string.Format("{0}:{1}", m.ToString("00"), s.ToString("00"));

            if (s == 0)
            {
                //每分鐘產生一個BOSS
                s = 59;
                m -= 1;
            }
            else
            {
                s -= 1;
                yield return new WaitForSeconds(1);
            }
        }
        //通關 玩家星球等級+1
        Debug.Log("時間到了");
    }
}
