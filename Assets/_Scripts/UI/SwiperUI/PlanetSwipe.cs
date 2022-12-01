using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
public class PlanetSwipe : MonoBehaviour
{ 
    #region ·Æ°ÊUI
    [SerializeField] 
    private GameObject scrollBar;
    float scrollPos = 0;
    float[] pos;
    #endregion

    [SerializeField]
    private PlanetDataBaseSO _planetDataBase;

    [SerializeField]
    private TextMeshProUGUI _planetTitle;

    [SerializeField]
    private TextMeshProUGUI _planetIntroduce;

    public static int currentPlanet;
    public static float currentPlanetBarValue;

    private void Awake()
    {
        var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.PlanetSave);
        scrollBar.GetComponent<Scrollbar>().value = saveData.planetBarValue;

    }
    void Update()
    {
        pos = new float[transform.childCount];
        float distance = 1f / (pos.Length - 1f);
        for (int i = 0; i < pos.Length; i++)
        {
            pos[i] = distance * i;
        }
        if (Input.GetMouseButton(0))
        {
            scrollPos = scrollBar.GetComponent<Scrollbar>().value;
        }
        else
        {
            for (int i = 0; i < pos.Length; i++)
            {
                if(scrollPos < pos[i] + (distance/2) && scrollPos > pos[i] - distance / 2)
                {
                    scrollBar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollBar.GetComponent<Scrollbar>().value, pos[i], 0.1f);

                    currentPlanetBarValue = scrollBar.GetComponent<Scrollbar>().value;

                }
            }
        }
        for (int i = 0; i < pos.Length; i++)
        {
            if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
            {
                transform.GetChild(i).DOScale(new Vector2(1.3f, 1.3f), 0.1f).SetEase(Ease.InOutBounce);
                transform.GetChild(i).GetComponent<RawImage>().color = Color.white;
                currentPlanet = i;
                UpdatePlanetInfo(i);
                //transform.GetChild(i).localScale = Vector2.Lerp(transform.GetChild(i).localScale,new Vector2(1f,1f),0.1f);
                for (int a = 0; a < pos.Length; a++)
                {
                    if (a != i)
                    {
                        transform.GetChild(a).DOScale(new Vector2(0.6f, 0.6f), 0.1f).SetEase(Ease.InOutBounce);
                        transform.GetChild(a).GetComponent<RawImage>().color = Color.gray;
                    }
                }
            }
        }
    }
    private void UpdatePlanetInfo(int selectedOption)
    {
        Planet planet = _planetDataBase.GetPlanet(selectedOption);
        _planetTitle.text = planet.planetTitle;
        _planetIntroduce.text = planet.planetIntroduce;
    }
  
}
