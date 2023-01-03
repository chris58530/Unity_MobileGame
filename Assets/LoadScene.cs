using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadScene : MonoBehaviour
{
    [SerializeField]
    private Image value;

    public float wait=0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (wait <= 4)
        {
            value.fillAmount = wait / 4;
            if (wait >= 2.5f && wait <= 3f)
            {
                wait += 0.2f * Time.deltaTime;

            }
            else if (wait >= 3.5f)
            {
                wait += 2 * Time.deltaTime;

            }
            else
                wait += 1 * Time.deltaTime;
        }
        else SceneManager.LoadScene("MenuScene");


    }

}
