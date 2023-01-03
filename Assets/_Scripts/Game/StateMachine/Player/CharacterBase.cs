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
        //初始化血條
        healthBar.fillAmount = 1;
        CDBar.fillAmount = 1;
    }

    public int GetHealth() //加入曲線成長數值 //料理加乘
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
        //血條改變
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

    public void Die() // 動畫Event
    {
        Destroy(gameObject);
    }
}
