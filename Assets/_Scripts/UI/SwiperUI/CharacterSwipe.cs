using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
public class CharacterSwipe : MonoBehaviour
{
    #region 滑動UI
    [SerializeField]
    private GameObject scrollBar;
    float scrollPos = 0;
    float[] pos;
    #endregion

    [SerializeField]
    private CharacterDataBaseSO _characterDataBase;

    [SerializeField]
    private TextMeshProUGUI _characterTitle;

    [SerializeField]
    private TextMeshProUGUI _characterIntroduce;

    public static int currentCharacter;//存檔
    public static float currentCharacterBarValue;//想要存當前side進度，但失敗

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
                if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
                {
                    scrollBar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollBar.GetComponent<Scrollbar>().value, pos[i], 0.1f);

                }
            }
        }
        for (int i = 0; i < pos.Length; i++)
        {
            if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
            {
                transform.GetChild(i).DOScale(new Vector2(1.5f, 1.5f), 0.1f).SetEase(Ease.InOutBounce);
                transform.GetChild(i).GetComponent<RawImage>().color = Color.white;
                UpdateCharacter(i);
                currentCharacter = i;

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
    private void UpdateCharacter(int selectedOption)
    {
        Character character = _characterDataBase.GetCharacter(selectedOption);
        _characterTitle.text = character.name;
        _characterIntroduce.text = character.introduciotn;
    }

}
