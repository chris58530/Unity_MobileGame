using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
public class CurvesEditer : Editor
{
    private string[] m_Tabs = { "天賦解鎖成本", "天賦加成曲線","怪物加成倍率" ,"關卡掉落倍率"};
    private int m_TabsSelecteed = -1;
    Vector2 scroll;

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        EditorGUILayout.BeginVertical();
        m_TabsSelecteed = GUILayout.Toolbar(m_TabsSelecteed, m_Tabs);
        EditorGUILayout.EndVertical();
        if (m_TabsSelecteed >= 0)
        {
            switch (m_Tabs[m_TabsSelecteed])
            {
                case "天賦解鎖成本":
                    OptionOne();
                    break;
                case "天賦加成曲線":
                    OptionTwo();
                    break;
                case "怪物加成倍率":
                    OptionThree();
                    break;
                case "關卡掉落倍率":
                    OptionFour();
                    break;

            }
        }

    }

    private void OptionOne()
    {
        EditorGUILayout.Space();
        Curves cURVES = (Curves)target;
        scroll = EditorGUILayout.BeginScrollView(scroll, GUILayout.MaxHeight(500));

        for (int i = 1; i < 41; i++)
        {
            EditorGUILayout.BeginHorizontal("box");
            EditorGUILayout.LabelField("第" + (i)+"個天賦");
            EditorGUILayout.LabelField("花費"+((int)cURVES.talentUnlock.Evaluate(i)) + "金錢");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();
    }

    private void OptionTwo()
    {
        EditorGUILayout.Space();
        Curves cURVES = (Curves)target;
        scroll = EditorGUILayout.BeginScrollView(scroll, GUILayout.MaxHeight(500));
        int n=0;
        int x = 1;

        for (int i = 1; i < 41; i++)
        {
            n = n + 1;
            EditorGUILayout.BeginHorizontal("box");
            EditorGUILayout.LabelField("第" + (i) + "個天賦");
            if (n == 1)
            {
                EditorGUILayout.LabelField("攻擊加成" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i)));
            }
            else if (n == 2)
            {
                EditorGUILayout.LabelField("血量加成" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i))*3);
            }
            else if (n == 3)
            {
                EditorGUILayout.LabelField("跑速加成" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i))*0.5+"%");
            }
            else if (n == 4)
            {
                EditorGUILayout.LabelField("攻速加成" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i)) * 0.25 + "%");
                n = 0;
            }
            if (i % 4 == 0)
            {
                EditorGUILayout.LabelField("符紋" + x + "解鎖");
                x = x + 1;
            }
            else
            {
                EditorGUILayout.LabelField(" ");
            }
                
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();
    }
    private void OptionThree()
    {
        EditorGUILayout.Space();
        Curves cURVES = (Curves)target;
        scroll = EditorGUILayout.BeginScrollView(scroll, GUILayout.MaxHeight(500));

        for (float i = 0; i <= 300; i = i+10)
        {
            EditorGUILayout.BeginHorizontal("box");
            EditorGUILayout.LabelField("第" + i + "秒鐘");
            EditorGUILayout.LabelField(((float)cURVES.monsterBoost.Evaluate(i)) + "倍");
            EditorGUILayout.LabelField("跑速倍率"+(1+(float)cURVES.monsterBoost.Evaluate(i)*0.2) + "倍");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();
    }
    private void OptionFour()
    {
        EditorGUILayout.Space();
        Curves cURVES = (Curves)target;
        scroll = EditorGUILayout.BeginScrollView(scroll, GUILayout.MaxHeight(500));

        for (int i = 1; i <= 10; i ++)
        {
            EditorGUILayout.BeginHorizontal("box");
            EditorGUILayout.LabelField("星球等級" + i );
            EditorGUILayout.LabelField("掉落物資" + ((float)cURVES.levelEarn.Evaluate(i)) + "倍");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();
    }
}
