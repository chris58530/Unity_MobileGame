using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawn : MonoBehaviour
{
    public static int currentPlayer;
    public Transform playerSpawnPos;
    [SerializeField]
    private PlayerDataBaseSO playerDataBaseSO;
    void Awake()
    {
        var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.CharacterSave);
        currentPlayer = saveData.selectCharacter;
        GameObject player = playerDataBaseSO.GetPlayerByJson(currentPlayer).playerObject;
        Instantiate(player, playerSpawnPos.position, Quaternion.identity);
    }


}
