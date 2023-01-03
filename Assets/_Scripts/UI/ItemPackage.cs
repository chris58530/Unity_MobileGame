using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using TMPro;
public class ItemPackage : MonoBehaviour
{
    [SerializeField]
    private TMP_Text[] text;
    public void Start()
    {
        string path = Path.Combine(Application.persistentDataPath, SaveSystem.PackageSave);
        if (!System.IO.File.Exists(path))
        {
            Debug.Log(System.IO.File.Exists(path));
            SaveSystem.SaveByJson(SaveSystem.PackageSave, SavingData());
        }
        else
        {
            var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.PackageSave);

            PlayerCurrentData.itemCount[0] = saveData.EggCount;
            PlayerCurrentData.itemCount[1] = saveData.EyeCount;
            PlayerCurrentData.itemCount[2] = saveData.HornCount;
            PlayerCurrentData.itemCount[3] = saveData.LeafCount;
            PlayerCurrentData.itemCount[4] = saveData.MeatCount;
            PlayerCurrentData.itemCount[5] = saveData.MushroomCount;
            PlayerCurrentData.itemCount[6] = saveData.PotatoCount;
            PlayerCurrentData.itemCount[7] = saveData.PotatoTailCount;
            PlayerCurrentData.itemCount[8] = saveData.PumpkingCount;
            PlayerCurrentData.itemCount[9] = saveData.SimeCount;
            PlayerCurrentData.itemCount[10] = saveData.SmallMeatCount;
        }
    }
    private void Update()
    {
        for (int i = 0; i < text.Length; i++)
        {
            text[i].text = PlayerCurrentData.itemCount[i].ToString();
        }
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
