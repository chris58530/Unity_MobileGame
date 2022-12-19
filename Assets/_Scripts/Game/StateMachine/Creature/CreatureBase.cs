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

    [SerializeField]
    public string Name;

    [SerializeField]
    private Curves CreatureCurves;

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
    public int GetHealth(string creature,int time) //加入曲線難度
    {
        float curvesHealth = CreatureCurves.monsterBoost.Evaluate(time);

        float Hp = Data.GetCreature(creature).maxHP * curvesHealth;

        return (int)Hp;
    }
    public int GetAttack(string creature, int time)
    {
        float curvesAttack = CreatureCurves.monsterBoost.Evaluate(time);

        float ATK = Data.GetCreature(creature).attackPower * curvesAttack;

        return (int)ATK;    
    }
    public int GetSpeed(string creature)
    {
        return Data.GetCreature(creature).moveSpeed;
    }

    public string GetName() //提供玩家讀取
    {
        return name;
    }
    public Creature GetCreature(string creature)
    {
        return Data.GetCreature(creature);

    }
    public void GetDrop(Creature creature, Transform trans) // animation 動畫 Event
    {
        GameActions.OnDropItem?.Invoke(creature, trans);
    }



}
