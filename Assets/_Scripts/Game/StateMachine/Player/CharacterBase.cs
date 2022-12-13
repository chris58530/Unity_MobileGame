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

    public int GetHealth() //�[�J���u�����ƭ�
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

    public void Die() // �ʵeEvent
    {
        Destroy(gameObject);
        toMenu?.Invoke();
    }
}
