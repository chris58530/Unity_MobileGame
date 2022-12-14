using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data.SqlClient;
using System.Data;
using System.IO;

public class SQLConnection : MonoBehaviour
{
    const string connectionString = "Data Source= aws-database.cuar87we7atl.ap-northeast-1.rds.amazonaws.com,1433;" +
               "User ID = chris58530; Password = 12345678;" +
               "Initial Catalog=Resteraunt PlayerData;" +
               "Integrated Security = false; ";

    int totalCount = 0;

    void Start()
    {

        //先從本地Json找有無 PID 如果有就用Json裡的PID 去 SQL下載資料
        //沒有的話就會自動註冊 Register()
        string path = Path.Combine(Application.persistentDataPath, SaveSystem.SQLSave);

        if (!System.IO.File.Exists(path))
        {
            Debug.Log(System.IO.File.Exists(path));
            Register();
        }
        else
        {
            var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.SQLSave);
            PlayerCurrentData.playerPID = saveData.PlayerIDFormSQL;

            GetDataFromSQL(); //Register()寫在裡面
        }

        GetShopItemFromSQL();

    }
    public void GetDataFromSQL()//沒有的話就會自動註冊 Register()
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
            PlayerCurrentData.AbilityCount = int.Parse(reader[5].ToString());
            Debug.Log("玩家PID : " + PlayerCurrentData.playerPID);
            Debug.Log("玩家等級 : " + PlayerCurrentData.playerLevel);
            Debug.Log("玩家寶石 : " + PlayerCurrentData.playerRuby);
            Debug.Log("玩家金錢 : " + PlayerCurrentData.playerMoney);
            Debug.Log("玩家料理解鎖 : " + PlayerCurrentData.AbilityCount);
            sqlConnection.Close();
            sqlConnection.Dispose();
        }
        else
        {
            Debug.Log("SQL讀取不到");
            Register();
        }


    }
    void Register()
    {
        Debug.Log("Register");
        //先計算目前所有已註冊的 PID數量 並在最後一行新增新玩家，並取得 新建立的PID
        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "SELECT * FROM PlayerTable ORDER BY PID ";

        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);
        SqlDataReader reader = sqlCommand.ExecuteReader();
        while (reader.Read())//最大行數
        {
            totalCount++;//最大行數
        }



        SqlConnection sqlConnection1 = new SqlConnection(connectionString);
        sqlConnection1.Open();
        //建立玩家資料 等級1 金錢0 寶石0
        string insert = "INSERT INTO dbo.PlayerTable([PlayerLevel],[PlayerRuby],[PlayerMoney],[PlayerName],[AbilityCount])VALUES(1,0,0,'HelloWorld',3);";
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
                //賦予PlayerCurrentData 玩家基本資料


                PlayerCurrentData.playerPID = reader2[0].ToString();
                PlayerCurrentData.playerLevel = int.Parse(reader2[1].ToString());
                PlayerCurrentData.playerRuby = int.Parse(reader2[2].ToString());
                PlayerCurrentData.playerMoney = int.Parse(reader2[3].ToString());
                PlayerCurrentData.AbilityCount = int.Parse(reader2[5].ToString());
                SaveSystem.SaveByJson(SaveSystem.SQLSave, SavingData());

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
    public static void UpdatelDataFromSQL()
    {
        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "UPDATE PlayerTable SET PlayerMoney = @Money,PlayerLevel = @Level,PlayerRuby = @Ruby ,AbilityCount = @Ability WHERE PID = @1 ";
        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);

        string PID = PlayerCurrentData.playerPID;
        int Level = PlayerCurrentData.playerLevel;
        int Ruby = PlayerCurrentData.playerRuby;
        int Money = PlayerCurrentData.playerMoney;
        int Ability = PlayerCurrentData.AbilityCount;
        sqlCommand.Parameters.Add(new SqlParameter("@1", PID));
        sqlCommand.Parameters.Add(new SqlParameter("@Level", Level));
        sqlCommand.Parameters.Add(new SqlParameter("@Ruby", Ruby));
        sqlCommand.Parameters.Add(new SqlParameter("@Money", Money));
        sqlCommand.Parameters.Add(new SqlParameter("@Ability", Ability));

        sqlCommand.ExecuteNonQuery();
        Debug.Log("儲存...玩家等級 : " + PlayerCurrentData.playerLevel);
        Debug.Log("儲存...玩家寶石 : " + PlayerCurrentData.playerRuby);
        Debug.Log("儲存...玩家金錢 : " + PlayerCurrentData.playerMoney);
        Debug.Log("儲存...玩家解鎖料理 : " + PlayerCurrentData.AbilityCount);

    }

    public void GetShopItemFromSQL()
    {
        Debug.Log(" GetShop");
        SqlConnection sqlConnection = new SqlConnection(connectionString);
        sqlConnection.Open();
        string isChecked = "SELECT * FROM Shop";

        SqlCommand sqlCommand = new SqlCommand(isChecked, sqlConnection);
        SqlDataReader reader = sqlCommand.ExecuteReader();
        while (reader.Read())
        {
            Shop.item1 = int.Parse(reader[0].ToString());
            Shop.item2 = int.Parse(reader[1].ToString());
            Shop.item3 = int.Parse(reader[2].ToString());
        }
    }
    SaveData SavingData()
    {
        var saveData = new SaveData();
        saveData.PlayerIDFormSQL = PlayerCurrentData.playerPID;
        return saveData;
    }
}
