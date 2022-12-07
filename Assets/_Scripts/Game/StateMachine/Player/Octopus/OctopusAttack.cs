using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OctopusAttack : MonoBehaviour
{
    [SerializeField]
    private BoxCollider[] attackCollider;
    public void Attack()
    {
        for (int i = 0; i < attackCollider.Length; i++)
        {
            attackCollider[i].GetComponent<BoxCollider>().enabled = true;
        }
       
        StartCoroutine(Enabled());
        //設置動畫Event
    }
    IEnumerator Enabled()
    {
        yield return new WaitForSeconds(1f); //相當於開啟攻擊一秒鐘

        for (int i = 0; i < attackCollider.Length; i++)
        {
            attackCollider[i].GetComponent<BoxCollider>().enabled = false;
        }


    }

}
