using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Food Data", menuName = "ScriptableObject/Creat Food Asset", order = 4)]

public class FoodDataBaseSO : ScriptableObject
{

    public List<Food> _food;

    public Food GetFood(int index)
    {
        return _food[index];
    }
}

[System.Serializable]
public class Food
{
    public string name;
    public string introduciotn;
    public string abilityInfo;

    public Sprite foodSprite;
    public Sprite foodIcon;

    public int gameLevel;
}
