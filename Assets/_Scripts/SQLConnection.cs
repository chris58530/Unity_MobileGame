using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data.SqlClient;
using System.Data;

public class SQLConnection :MonoBehaviour
{
    const string connectionString = "Data Source= aws-database.cuar87we7atl.ap-northeast-1.rds.amazonaws.com,1433;" +
               "User ID = chris58530; Password = 12345678;" +
               "Initial Catalog=Resteraunt PlayerData;" +
               "Integrated Security = false; ";

    int totalCount = 0;

    void Start()
    {
        //���q���aJson�䦳�L PID �p�G���N��Json�̪�PID �h SQL�U�����
        //�S�����ܴN�|�۰ʵ��U Register()
        var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.CharacterSave);
        if (saveData.PlayerIDFormSQL != null)
        {
            PlayerCurrentData.playerPID = saveData.PlayerIDFormSQL;


            GetDataFromSQL(); //Register()�g�b�̭�
        }
        else Register();
           


    }  
    public void GetDataFromSQL()//�S�����ܴN�|�۰ʵ��U Register()
    {
        Debug.Log("GetDataFromSQL");

        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "SELECT * FROM PlayerTable WHERE PID = @1 ";
        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);
        string PID = PlayerCurrentData.playerPID;

        sqlCommand.Parameters.Add(new SqlParameter("@1", PID));
        SqlDataReader reader = sqlCommand.ExecuteReader();
        if (reader.Read())
        {
            PlayerCurrentData.playerLevel = int.Parse(reader[1].ToString());
            PlayerCurrentData.playerRuby = int.Parse(reader[2].ToString());
            PlayerCurrentData.playerMoney = int.Parse(reader[3].ToString());
            Debug.Log("���aPID : " + PlayerCurrentData.playerPID);
            Debug.Log("���a���� : " + PlayerCurrentData.playerLevel);
            Debug.Log("���a�_�� : " + PlayerCurrentData.playerRuby);
            Debug.Log("���a���� : " + PlayerCurrentData.playerMoney);
            sqlConnection.Close();
            sqlConnection.Dispose();
        }
        else
            Debug.Log("SQLŪ������");
        

    }
    public void UpdatelDataFromSQL()
    {
        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "UPDATE PlayerTable SET PlayerMoney = @Money,PlayerLevel = @Level,PlayerRuby = @Ruby WHERE PID = @1 ,PlayerName = @2";
        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);

        string PID = PlayerCurrentData.playerPID;
        string Name = PlayerCurrentData.playerName;
        int Level = PlayerCurrentData.playerLevel;
        int Ruby = PlayerCurrentData.playerRuby;
        int Money = PlayerCurrentData.playerMoney;
        sqlCommand.Parameters.Add(new SqlParameter("@1", PID));
        sqlCommand.Parameters.Add(new SqlParameter("@2", Name));
        sqlCommand.Parameters.Add(new SqlParameter("@Level", Level));
        sqlCommand.Parameters.Add(new SqlParameter("@Ruby", Ruby));
        sqlCommand.Parameters.Add(new SqlParameter("@Money", Money));

        SqlDataReader reader = sqlCommand.ExecuteReader();
        if (reader.Read())
        {
            PlayerCurrentData.playerLevel = int.Parse(reader[1].ToString());
            PlayerCurrentData.playerRuby = int.Parse(reader[2].ToString());
            PlayerCurrentData.playerMoney = int.Parse(reader[3].ToString());
            Debug.Log("�x�s...���a���� : " + PlayerCurrentData.playerLevel);
            Debug.Log("�x�s...���a�_�� : " + PlayerCurrentData.playerRuby);
            Debug.Log("�x�s...���a���� : " + PlayerCurrentData.playerMoney);
            sqlConnection.Close();
            sqlConnection.Dispose();

        }
    }
  
    void Register()
    {
        Debug.Log("Register");
        //���p��ثe�Ҧ��w���U�� PID�ƶq �æb�̫�@��s�W�s���a�A�è��o �s�إߪ�PID
        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "SELECT * FROM PlayerTable ORDER BY PID ";

        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);
        SqlDataReader reader = sqlCommand.ExecuteReader();
        while (reader.Read())//�̤j���
        {
            totalCount++;//�̤j���
        }
        Debug.Log(totalCount); //�̤j���


        SqlConnection sqlConnection1 = new SqlConnection(connectionString);
        sqlConnection1.Open();
        //�إߪ��a��� ����1 ����0 �_��0
        string insert = "INSERT INTO dbo.PlayerTable([PlayerLevel],[PlayerRuby],[PlayerMoney],[PlayerName])VALUES(1,0,0,'HelloWorld');";
        SqlCommand sqlCommand1 = new SqlCommand(insert, sqlConnection1);
        sqlCommand1.ExecuteNonQuery();

        SqlConnection sqlConnection2 = new SqlConnection(connectionString);
        sqlConnection2.Open();
        string selectPID = "SELECT * FROM PlayerTable ORDER BY PID";

        SqlCommand sqlCommand2 = new SqlCommand(selectPID, sqlConnection2);
        SqlDataReader reader2 = sqlCommand2.ExecuteReader();
        int readerCount = 0;
        while (reader2.Read())
        {
            if (readerCount == totalCount)
            {
                //�ᤩPlayerCurrentData ���a�򥻸��
               

                PlayerCurrentData.playerPID = reader2[0].ToString();
                PlayerCurrentData.playerLevel = int.Parse(reader2[1].ToString());
                PlayerCurrentData.playerRuby = int.Parse(reader2[2].ToString());
                PlayerCurrentData.playerMoney = int.Parse(reader2[3].ToString());
                PlayerCurrentData.playerName = reader2[4].ToString();
                SaveSystem.SaveByJson(SaveSystem.CharacterSave, SavingData());

            }
            readerCount++;
        }
        sqlConnection.Close();
        sqlConnection1.Close();
        sqlConnection2.Close();

        sqlConnection.Dispose();
        sqlConnection1.Dispose();
        sqlConnection2.Dispose();


    }
    SaveData SavingData()
    {
        var saveData = new SaveData();
        saveData.PlayerIDFormSQL = PlayerCurrentData.playerPID;
        saveData.PlayerNameFormSQL = PlayerCurrentData.playerName;
        return saveData;
    }
}
