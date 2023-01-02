using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class FixedUI : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI playerLevel, playerRuby, playerMoney;
    // Start is called before the first frame update
    void Start()
    {
        UpdateFixedUI();
    }

    // Update is called once per frame
    void LateUpdate()
    {
        UpdateFixedUI();
    }

    public void UpdateFixedUI()
    {
        playerLevel.text = PlayerCurrentData.playerLevel.ToString();
        playerRuby.text = PlayerCurrentData.playerRuby.ToString();
        playerMoney.text = PlayerCurrentData.playerMoney.ToString();
    }
}
