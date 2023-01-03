using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "New Ingredients Data", menuName = "ScriptableObject/Creat Ingredients Asset", order = 5)]
public class IngredientsDataSO : ScriptableObject
{
    public List<Ingredients> _ingredient;
    public Ingredients GetIngredient(int index)
    {
        return _ingredient[index];
    }
}
[System.Serializable]
public class Ingredients
{
    public string name;

    public Sprite sprite;

    public int cost;
}
