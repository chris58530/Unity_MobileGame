using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatureBase : MonoBehaviour
{
    [HideInInspector]
    public Transform playerTrans;

    [SerializeField]
    private CreatureDataBaseSO Data;


    [SerializeField]
    private float stiffTime;

    private void Start()
    {
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
    }
    private void Update()
    {
        DistanceWithPlayer();
    }
    private void DistanceWithPlayer()
    {
        float dis = Vector3.Distance(playerTrans.position, transform.position);
        if (dis > 100)
        {
            Destroy(transform.gameObject);
        }
    }
    public int GetHealth(string creature) //加入曲線難度
    {
        return Data.GetCreature(creature).maxHP;
    }
    public int GetAttack(string creature)
    {
        return Data.GetCreature(creature).attackPower;
    }
    public int GetSpeed(string creature)
    {
        return Data.GetCreature(creature).moveSpeed;
    }
   
   
    public Creature GetCreature(string creature)
    {
        return Data.GetCreature(creature);

    }
    public void Die(Creature creature,Transform trans) // 動畫Event
    {
        GameActions.OnDropItem(creature,trans);
        StartCoroutine(Destroy());
    }
    IEnumerator Destroy()
    {
        yield return new WaitForSecondsRealtime(1);
        Destroy(gameObject);

    }


}
