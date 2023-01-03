using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class EndViewUI : MonoBehaviour
{
    [SerializeField]
    private Image[] ItemImage;

    private void OnEnable()
    {
        GameManager.instance.PauseTime(true);
    }
    private void OnDisable()
    {
        GameManager.instance.PauseTime(false);
        
    }
    public void VideoButton()
    {

    }
    public void FinishButton()
    {
        SaveSystem.SaveByJson(SaveSystem.PackageSave, SavingData());
        SceneManager.LoadScene("MenuScene");
    }
    SaveData SavingData()
    {

        var saveData = new SaveData();
        saveData.EggCount = PlayerCurrentData.itemCount[0];
        saveData.EyeCount = PlayerCurrentData.itemCount[1];
        saveData.HornCount = PlayerCurrentData.itemCount[2];
        saveData.LeafCount = PlayerCurrentData.itemCount[3];
        saveData.MeatCount = PlayerCurrentData.itemCount[4];
        saveData.MushroomCount = PlayerCurrentData.itemCount[5];
        saveData.PotatoCount = PlayerCurrentData.itemCount[6];
        saveData.PotatoTailCount = PlayerCurrentData.itemCount[7];
        saveData.PumpkingCount = PlayerCurrentData.itemCount[8];
        saveData.SimeCount = PlayerCurrentData.itemCount[9];
        saveData.SmallMeatCount = PlayerCurrentData.itemCount[10];      

        return saveData;
    }
}
