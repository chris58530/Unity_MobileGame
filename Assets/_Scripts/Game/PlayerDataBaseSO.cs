using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Creature Data", menuName = "ScriptableObject/Creat Player Asset", order = 4)]

public class PlayerDataBaseSO : ScriptableObject
{
    public Player[] _player;

    public int PlayerCount
    {
        get { return _player.Length; }
    }
    public Player GetPlayer(Name name)
    {
        return _player[(int)name];
    }
    public Player GetPlayerByJson(int index)
    {
        return _player[index];
    }
    public enum Name
    {
        player_Cow,
        player_Octopus
    }
}
[System.Serializable]
public class Player
{
    public string name;
    [Space(10)]
    public GameObject playerObject;
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

    public GameObject[] items;
}
