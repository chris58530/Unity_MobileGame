using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterSpawn : MonoBehaviour
{
    public static int currentPlayer = 1;
    public Transform characterSpawnPos;
    [SerializeField]
    private CharacterDataBaseSO CharacterDataBaseSO;
    void Awake()
    {
        var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.CharacterSave);
        currentPlayer = saveData.selectCharacter;
        
        GameObject character = CharacterDataBaseSO.GetCharacter(currentPlayer).characterObject;
        Instantiate(character, characterSpawnPos.position, Quaternion.identity);
    }


}
