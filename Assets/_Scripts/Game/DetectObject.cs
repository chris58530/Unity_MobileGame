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
        //初始化scale
        transform.localScale = new Vector3(0, 0, 0);

        canDetect = true;
    }

    
    private void FixedUpdate()
    {
        if(canDetect && transform.localScale.x<=detectRange)
        {
            //膨脹至detect上限值
            transform.localScale += new Vector3(2, 0, 2);
        }
      
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EnemyAttack") && canDetect)
        {
            //初始化scale currentRange
            transform.localScale = new Vector3(0, 0, 0);
            GameActions.OnShootEnemy?.Invoke(other.transform);
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
