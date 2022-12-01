using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class Tile //Tile類別建構子
{
    public GameObject theTile;
    public float creationTime;
    public Tile(GameObject t, float ct)
    {
        theTile = t;
        creationTime = ct;
    }

    //多個建構函式，沒有意義，只是做個筆記
    //public Tile(GameObject t)
    //{
    //    theTile = t;
    //}
}

public class InfinitePlane : MonoBehaviour
{
    public GameObject[] plane;
     GameObject player;

    int planeSize = 10;
    int halfTilesX = 10;
    int halfTilesZ = 10;

    Vector3 startPos;

    Hashtable tiles =  new Hashtable();

 
    private void Start()
    {
        gameObject.transform.position = Vector3.zero;
        startPos = Vector3.zero;

        float updateTime = Time.realtimeSinceStartup;

        for (int x = -halfTilesX; x < halfTilesX; x++)
        {
            for (int z = -halfTilesZ; z < halfTilesZ; z++)
            {
                Vector3 pos =new Vector3((x*planeSize+startPos.x) ,0 , (z*planeSize+startPos.z));
                GameObject t = Instantiate(plane[Random.Range(0,plane.Length)], pos, Quaternion.identity);

                //紀錄新的 tile 位置
                string tileName = "Tile_" + ((int)(pos.x)).ToString() + "_"+((int)(pos.z)).ToString();
                t.name = tileName;
                //實例化一個新 tile 並放進 hash 表中
                Tile tile = new Tile(t, updateTime);
                tiles.Add(tileName,tile);
            }
        }
    }
    private void Update()
    {
        if (player != null)
        {
            int xMove = (int)(player.transform.position.x - startPos.x);
            int zMove = (int)(player.transform.position.z - startPos.z);

            if (Mathf.Abs(xMove) >= planeSize || Mathf.Abs(zMove) >= planeSize)
            {
                float updateTime = Time.realtimeSinceStartup;


                //判斷玩家是否靠近下個網格 Mathf.Floor(向下取整數)
                int playerX = (int)(Mathf.Floor(player.transform.position.x / planeSize) * planeSize);
                int playerZ = (int)(Mathf.Floor(player.transform.position.z / planeSize) * planeSize);

                for (int x = -halfTilesX; x < halfTilesX; x++)
                {
                    for (int z = -halfTilesZ; z < halfTilesZ; z++)
                    {
                        Vector3 pos = new Vector3(x * planeSize + playerX, 0, z * planeSize + playerZ);

                        string tileName = "Tile_" + ((int)(pos.x)).ToString() + "_" + ((int)(pos.z)).ToString();
                        if (!tiles.ContainsKey(tileName))
                        {
                            GameObject t = Instantiate(plane[Random.Range(0, plane.Length)], pos, Quaternion.identity);
                            t.name = tileName;
                            Tile tile = new Tile(t, updateTime);
                            tiles.Add(tileName, tile);
                        }
                        else
                        {
                            (tiles[tileName] as Tile).creationTime = updateTime;
                        }

                    }
                }
                Hashtable newTerrian = new Hashtable();
                foreach (Tile tls in tiles.Values)
                {
                    if (tls.creationTime != updateTime)
                    {
                        Destroy(tls.theTile);

                    }
                    else
                    {
                        newTerrian.Add(tls.theTile.name, tls);
                    }
                }
                tiles = newTerrian;
                startPos = player.transform.position;

            }
        }else
            player = GameObject.FindGameObjectWithTag("Player");

    }
}
