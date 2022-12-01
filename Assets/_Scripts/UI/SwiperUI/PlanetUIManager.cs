using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlanetUIManager : MonoBehaviour
{
   
    public void ChangeScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }
    public void SelectPlanet()
    {
        SaveSystem.SaveByJson(SaveSystem.PlanetSave, SavingData());
        SceneManager.LoadScene("MenuScene");

    }
    SaveData SavingData()
    {
        var saveData = new SaveData();
        saveData.selectPlanet = PlanetSwipe.currentPlanet;
        saveData.planetBarValue = PlanetSwipe.currentPlanetBarValue;
        return saveData;
    }
 
}
