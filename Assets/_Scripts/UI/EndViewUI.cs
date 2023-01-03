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
        saveData.EggCount = PlayerCurrentData.EggCount;
        saveData.EyeCount = PlayerCurrentData.EyeCount;
        saveData.HornCount = PlayerCurrentData.HornCount;
        saveData.LeafCount = PlayerCurrentData.LeafCount;
        saveData.MeatCount = PlayerCurrentData.MeatCount;
        saveData.MushroomCount = PlayerCurrentData.MushroomCount;
        saveData.PotatoCount = PlayerCurrentData.PotatoCount;
        saveData.PotatoTailCount = PlayerCurrentData.PotatoTailCount;
        saveData.PumpkingCount = PlayerCurrentData.PumpkingCount;
        saveData.SimeCount = PlayerCurrentData.SimeCount;
        saveData.SmallMeatCount = PlayerCurrentData.SmallMeatCount;      

        return saveData;
    }
}
