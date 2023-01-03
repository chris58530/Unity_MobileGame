using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        PlayerAbility.ability_BulletDamage = 0;
        PlayerAbility.ability_CatDetectRange = 0;
        PlayerAbility.ability_CatShootSpeed = 0;
        PlayerAbility.ability_RideAttackSpeed = 1;
        PlayerAbility.ability_RideMoveSpeed = 0;
        PlayerAbility.ability_RideAttackDamage = 0;
        PlayerAbility.ability_BulltetScale = 0;

        PlayerCurrentData.EggCount = 0;
        PlayerCurrentData.EyeCount = 0;
        PlayerCurrentData.HornCount = 0;
        PlayerCurrentData.LeafCount = 0;
        PlayerCurrentData.MeatCount = 0;
        PlayerCurrentData.MushroomCount = 0;
        PlayerCurrentData.PotatoCount = 0;
        PlayerCurrentData.PotatoTailCount = 0;
        PlayerCurrentData.PumpkingCount = 0;
        PlayerCurrentData.SimeCount = 0;
        PlayerCurrentData.SmallMeatCount = 0;
    }
    public void PauseTime(bool b)
    {
        Time.timeScale = b ? 0 : 1;
    }
    private void OnDisable()
    {
        PauseTime(false);
    }
    
   
}
