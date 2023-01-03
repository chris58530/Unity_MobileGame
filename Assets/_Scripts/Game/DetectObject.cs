using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectObject : MonoBehaviour
{
    [SerializeField]
    [Range(1, 50)]
    public float detectRange;

    [SerializeField]
    public float attackSpeed;

    public bool canDetect;
    public Animator catAni;

  

    void Start()
    {
        //��l��scale
        transform.localScale = new Vector3(0, 0, 0);

        canDetect = true;

    }

    
    private void FixedUpdate()
    {
        
        if(canDetect && transform.localScale.x<=(detectRange + PlayerAbility.ability_CatDetectRange))
        {
            //���Ȧ�detect�W����
            transform.localScale += new Vector3(2, 0, 2);

        }

    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EnemyAttack") && canDetect)
        {
            //��l��scale currentRange
            transform.localScale = new Vector3(0, 0, 0);
            GameActions.OnShootEnemy?.Invoke(other.transform);
            canDetect = false;
            catAni.SetTrigger("Shoot");
            StartCoroutine(DetectCount());
        }
    }
    IEnumerator DetectCount()
    {
        yield return new WaitForSecondsRealtime((attackSpeed - PlayerAbility.ability_CatShootSpeed));  
        canDetect = true;    
    }
   
}
