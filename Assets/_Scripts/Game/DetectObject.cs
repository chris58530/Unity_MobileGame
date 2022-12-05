using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectObject : MonoBehaviour
{
    [SerializeField]
    [Range(1, 15)]
    private float detectRange;

    [SerializeField]
    private float attackSpeed;

    public bool canDetect;

    void Start()
    {
        //��l��scale
        transform.localScale = new Vector3(0, 0, 0);

        canDetect = true;
    }

    
    private void FixedUpdate()
    {
        if(canDetect && transform.localScale.x<=detectRange)
        {
            //���Ȧ�detect�W����
            transform.localScale += new Vector3(1, 0, 1);
        }
      
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EnemyAttack") && canDetect)
        {
            //��l��scale currentRange
            transform.localScale = new Vector3(0, 0, 0);
            Actions.OnShootEnemy?.Invoke(other.transform);
            canDetect = false;
            StartCoroutine(DetectCount());
        }
    }
    IEnumerator DetectCount()
    {
        yield return new WaitForSecondsRealtime(attackSpeed);  
        canDetect = true;    
    }
}
