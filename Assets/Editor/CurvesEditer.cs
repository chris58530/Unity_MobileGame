using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
public class CurvesEditer : Editor
{
    private string[] m_Tabs = { "�ѽ���ꦨ��", "�ѽ�[�����u","�Ǫ��[�����v" ,"���d�������v"};
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
                case "�ѽ���ꦨ��":
                    OptionOne();
                    break;
                case "�ѽ�[�����u":
                    OptionTwo();
                    break;
                case "�Ǫ��[�����v":
                    OptionThree();
                    break;
                case "���d�������v":
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
            EditorGUILayout.LabelField("��" + (i)+"�Ӥѽ�");
            EditorGUILayout.LabelField("��O"+((int)cURVES.talentUnlock.Evaluate(i)) + "����");
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
            EditorGUILayout.LabelField("��" + (i) + "�Ӥѽ�");
            if (n == 1)
            {
                EditorGUILayout.LabelField("�����[��" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i)));
            }
            else if (n == 2)
            {
                EditorGUILayout.LabelField("��q�[��" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i))*3);
            }
            else if (n == 3)
            {
                EditorGUILayout.LabelField("�]�t�[��" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i))*0.5+"%");
            }
            else if (n == 4)
            {
                EditorGUILayout.LabelField("��t�[��" + Mathf.RoundToInt((int)cURVES.talentBonus.Evaluate(i)) * 0.25 + "%");
                n = 0;
            }
            if (i % 4 == 0)
            {
                EditorGUILayout.LabelField("�ů�" + x + "����");
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
            EditorGUILayout.LabelField("��" + i + "����");
            EditorGUILayout.LabelField(((float)cURVES.monsterBoost.Evaluate(i)) + "��");
            EditorGUILayout.LabelField("�]�t���v"+(1+(float)cURVES.monsterBoost.Evaluate(i)*0.2) + "��");
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
            EditorGUILayout.LabelField("�P�y����" + i );
            EditorGUILayout.LabelField("��������" + ((float)cURVES.levelEarn.Evaluate(i)) + "��");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();
    }
}
