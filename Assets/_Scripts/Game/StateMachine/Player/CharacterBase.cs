using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class CharacterBase : MonoBehaviour
{
    [SerializeField]
    private CharacterDataBaseSO Data;

    [SerializeField]
    private UnityEvent toMenu;

    public int GetHealth() //加入曲線成長數值
    {
        return Data.GetCharacter(CharacterSpawn.currentPlayer).maxHP;
    }
    public int GetAttack()
    {
        return Data.GetCharacter(CharacterSpawn.currentPlayer).attackPower;
    }
    public float GetAttackCD()
    {
        return Data.GetCharacter(CharacterSpawn.currentPlayer).attackCD;
    }
    public float GetDamagedCD()
    {
        return Data.GetCharacter(CharacterSpawn.currentPlayer).currentHurtCD;
    }
    public int GetMoveSpeed()
    {
        return Data.GetCharacter(CharacterSpawn.currentPlayer).moveSpeed;

    }

    public void Die() // 動畫Event
    {
        Destroy(gameObject);
        toMenu?.Invoke();
    }
}
