using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "New Data", menuName = "ScriptableObject/Creat Planet Asset", order = 2)]
public class PlanetDataBaseSO : ScriptableObject
{
    public Planet[] _planet;
    public int PlanetCount
    {
        get { return _planet.Length; }
    }
    public Planet GetPlanet(int index)
    {
        return _planet[index];
    }
}

[System.Serializable]
public class Planet
{
    public string planetTitle;
    public string planetIntroduce;
    public GameObject planetObject;
}
