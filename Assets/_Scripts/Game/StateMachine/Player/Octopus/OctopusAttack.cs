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
        //�]�m�ʵeEvent
    }
    IEnumerator Enabled()
    {
        yield return new WaitForSeconds(1f); //�۷��}�ҧ����@����

        for (int i = 0; i < attackCollider.Length; i++)
        {
            attackCollider[i].GetComponent<BoxCollider>().enabled = false;
        }


    }

}
