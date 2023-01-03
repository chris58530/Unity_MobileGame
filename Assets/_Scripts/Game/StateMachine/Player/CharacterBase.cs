using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class CharacterBase : MonoBehaviour
{
    [SerializeField]
    private CharacterDataBaseSO Data;

  

    private Image healthBar;

    private Image CDBar;
    private void Start()
    {
        healthBar = GameObject.Find("HealthBar").GetComponent<Image>();
        CDBar = GameObject.Find("CDBar").GetComponent<Image>();
        //��l�Ʀ��
        healthBar.fillAmount = 1;
        CDBar.fillAmount = 1;
    }

    public int GetHealth() //�[�J���u�����ƭ� //�Ʋz�[��
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
        if (healthBar.fillAmount <= 0)
        {
            GameObject select = GameObject.Find("SystemCanvas");
            select.transform.Find("EndView").gameObject.SetActive(true);
            
        }
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
    }
}
