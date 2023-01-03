using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public static class SaveSystem
{
    #region 指定文件名
    const string SCELECT_PLANET = "Player.Planet.sav";
    const string SCELECT_CHARACTER = "Player.Character.sav";
    const string SCELECT_SQL = "Player.SQL.sav";
    const string SCELECT_Package = "Player.Package.sav";
    #endregion
    #region 外部存取文件名
    public static string PlanetSave => SCELECT_PLANET;
    public static string CharacterSave => SCELECT_CHARACTER;
    public static string SQLSave => SCELECT_SQL;
    public static string PackageSave => SCELECT_Package;
    #endregion

    public static void SaveByJson(string fileName , object data)
    {
        var json = JsonUtility.ToJson(data);    
        var path = Path.Combine(Application.persistentDataPath,fileName);

        File.WriteAllText(path,json); 
    }
    public static T LoadFormJson<T>(string fileName)
    {
        var path = Path.Combine(Application.persistentDataPath ,fileName);

        var json = File.ReadAllText(path);
      

        var data = JsonUtility.FromJson<T>(json);

        return data;
    }
    public static void DeleteSaveFile(string fileName)
    {
        var path = Path.Combine (Application.persistentDataPath ,fileName);

        File.Delete(path);
        Debug.LogWarning("Delete : "+fileName);
    }
 
}
