using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "New Creature Data", menuName = "ScriptableObject/Creat Character Asset", order = 3)]

public class CharacterDataBaseSO : ScriptableObject
{
    public Character[] _character;
    public int CharacterCount
    {
        get { return _character.Length; }
    }
    public Character GetCharacter(int index)
    {
        return _character[index];
    }
}
[System.Serializable]
public class Character
{
    public string characterTitle;
    public string characterIntroduce;
}
