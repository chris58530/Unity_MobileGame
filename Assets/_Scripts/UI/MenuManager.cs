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
        SceneManager.LoadScene(scene);
    }
    private void LoadData() //讀取SaveData Json 目前只有星球
    {       
        string planetConst = SaveSystem.PlanetSave; //SaveSystem.const
        var saveData =  SaveSystem.LoadFormJson<SaveData>(planetConst);

        Planet planet = PlanetDataBaseSO.GetPlanet(saveData.selectPlanet);
        Instantiate(planet.planetObject, PlanetSpawnPoint.position  , Quaternion.identity);        
    }
   
}
