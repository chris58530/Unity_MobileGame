using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class CharacterBase : MonoBehaviour
{
    [SerializeField]
    private CharacterDataBaseSO Data;

    [SerializeField]
    private UnityEvent toMenu;

    [SerializeField]
    private Image healthBar;

    [SerializeField]
    private Image CDBar;
    private void Start()
    {
        //��l�Ʀ��
        healthBar.fillAmount = 1;
        CDBar.fillAmount = 1;
    }

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
        return Data.GetCharacter(CharacterSpawn.currentPlayer).hurtCD;
    }
    public void OnDamaged(float currentHp)
    {
        //�������
        healthBar.fillAmount = currentHp / GetHealth();
    }
    public void CDBarUpdate(float currentCD)
    {
        CDBar.fillAmount = currentCD / GetAttackCD();
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
