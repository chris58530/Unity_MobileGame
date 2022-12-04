using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData : MonoBehaviour
{
    [SerializeField]
    private PlayerDataBaseSO Data;

    public float attack { get { return Data.GetPlayer(PlayerDataBaseSO.Name.player_Cow).attackPower; } } //之後要改
}
