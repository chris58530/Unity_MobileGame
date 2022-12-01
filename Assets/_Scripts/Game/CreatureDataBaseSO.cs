using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Creature Data",menuName ="ScriptableObject/Creat Creature Asset",order =1)]
public class CreatureDataBaseSO : ScriptableObject
{
    public Creature[] _creature;
   
    public int CreatureCoun
    {
        get { return _creature.Length; }
    }
    public Creature GetCreature(Name name)
    {
        return _creature[(int)name];    
    }
    public enum Name
    {
        slime,
        chicken,
        PCow,
        rat
    }
   
}
[System.Serializable]
public class Creature
{
    public string creatureName;
    [Space(20)]

    public float moveSpeed;
    public float attackPower;


    public float attackCD;
    [HideInInspector]
    public float currentAttackCD;

    public float hurtCD;
    [HideInInspector]
    public float currentHurtCD;

    public float maxHP;
    [HideInInspector]
    public float currentHP;

    [Header("掉落物-物件和機率順序需一致")]
    [SerializeField]
    public GameObject[] items;
    [SerializeField]
    public int[] probability;
   
}