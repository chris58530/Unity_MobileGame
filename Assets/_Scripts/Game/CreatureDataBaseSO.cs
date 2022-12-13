using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Creature Data",menuName ="ScriptableObject/Creat Creature Asset",order =1)]
public class CreatureDataBaseSO : ScriptableObject
{
    public List<Creature> _creatureList;
   
 
    public Creature GetCreature(string creatureName)
    {
        return _creatureList.Find(i => i.creatureName == creatureName);
    }
 
   
}
[System.Serializable]
public class Creature
{
    public string creatureName;

    [Space(20)]
    public int moveSpeed;
    public int attackPower;


    public float attackCD;

    [HideInInspector]
    public float currentAttackCD;

    public float hurtCD;

    [HideInInspector]
    public float currentHurtCD;

    public int maxHP;

    [HideInInspector]
    public float currentHP;

    [Header("掉落物-物件和機率順序需一致")]
    [SerializeField]
    public GameObject[] items;
    [SerializeField]
    public int[] probability;
   
}