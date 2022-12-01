using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CharacterUIManager : MonoBehaviour
{

    public void SelectCharacter()
    {
        SaveSystem.SaveByJson(SaveSystem.CharacterSave, SavingData());
        SceneManager.LoadScene("GameScene");

    }
    public void GoBackMenu(string scene)
    {
        SceneManager.LoadScene(scene);
    }
    SaveData SavingData()
    {
        var saveData = new SaveData();
        saveData.selectCharacter = CharacterSwipe.currentCharacter;
        return saveData;
    }
}
