using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class Tile //Tile���O�غc�l
{
    public GameObject theTile;
    public float creationTime;
    public Tile(GameObject t, float ct)
    {
        theTile = t;
        creationTime = ct;
    }

    //�h�ӫغc�禡�A�S���N�q�A�u�O���ӵ��O
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

                //�����s�� tile ��m
                string tileName = "Tile_" + ((int)(pos.x)).ToString() + "_"+((int)(pos.z)).ToString();
                t.name = tileName;
                //��ҤƤ@�ӷs tile �é�i hash ��
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


                //�P�_���a�O�_�a��U�Ӻ��� Mathf.Floor(�V�U�����)
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
