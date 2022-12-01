using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawn : MonoBehaviour
{
    [SerializeField]
    private GameObject[] _enemy;

    [SerializeField]
    private float _spawnRate;

    [SerializeField]
    private float _minSpawnPos;

    [SerializeField]
    private float _maxSpawnPos;

    private bool canSpawn = true;

    Transform playerTrans;

    void Start()
    {
        playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        SpawnWithDistance();
    }
  
    void SpawnWithDistance()
    {
        //Vector3 min = new Vector3(playerTrans.position.x - _minSpawnPos, 0, playerTrans.position.z - _minSpawnPos);
        //Vector3 max = new Vector3(playerTrans.position.x + _maxSpawnPos, 0, playerTrans.position.z + _maxSpawnPos);
        if (canSpawn)
        {
            StartCoroutine(Spawn());
        }

    }  
    IEnumerator Spawn()
    {
        canSpawn = false;
        Vector3 enemyPos = new Vector3(Random.Range(_minSpawnPos, _maxSpawnPos), 0, Random.Range(_minSpawnPos, _maxSpawnPos));

        Instantiate(GetEnemy(), enemyPos + playerTrans.transform.position, Quaternion.identity);
        yield return new WaitForSeconds(_spawnRate);
        canSpawn = true;
    }
    GameObject GetEnemy()
    {
        GameObject enemy =  _enemy[Random.Range(0, _enemy.Length)];
        return enemy;
    }
}
