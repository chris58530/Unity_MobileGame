using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Creature Data", menuName = "ScriptableObject/Creat Character Asset", order = 4)]

public class CharacterDataBaseSO : ScriptableObject
{
    public List<Character> _characterList;


    //public Character GetCharacter(string playerName)
    //{
    //    return _playerList.Find(i => i.name == playerName);
    //}
   
   
    public Character GetCharacter(int index)
    {
        return _characterList[index];
    }
   
}
[System.Serializable]
public class Character
{
    public string name;
    public string introduciotn;
    [Space(10)]
    public GameObject characterObject; //PlayerSpanw 生產一個player

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

}
