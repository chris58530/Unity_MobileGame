using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    [SerializeField]
    private GameObject menuCanvas;

    [SerializeField]
    private Transform PlanetSpawnPoint;

    [SerializeField]
    private PlanetDataBaseSO PlanetDataBaseSO;

    private void Start()
    {
        LoadData();
    }
    public void AddLoadScene(string scene)
    {
        SceneManager.LoadScene(scene, LoadSceneMode.Additive);
    }
    public void ChangeScene(string scene)
    {
        SoundManager.instance.Bottun();
        SaveSystem.SaveByJson(SaveSystem.PackageSave, SavingData());
        SQLConnection.UpdatelDataFromSQL();
        SceneManager.LoadScene(scene);
    }
    private void LoadData() //讀取SaveData Json 目前只有星球
    {       
        string planetConst = SaveSystem.PlanetSave; //SaveSystem.const
        var saveData =  SaveSystem.LoadFormJson<SaveData>(planetConst);

        Planet planet = PlanetDataBaseSO.GetPlanet(saveData.selectPlanet);
        Instantiate(planet.planetObject, PlanetSpawnPoint.position  , Quaternion.identity);        
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
