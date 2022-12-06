using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Pool;

public class PlayerAutoShoot : MonoBehaviour
{
    [SerializeField]
    private GameObject bulletPrefab;

    [SerializeField]
    private Transform bulletSpawnPoint;

    [SerializeField]
    private GameObject bulletPool; //子彈物件池

   
   

    private ObjectPool<Bullet> bulletObjectPool;

    //private List<Transform> detect = new List<Transform> ();
    // Start is called before the first frame update
    void Start()
    {
        //初始化增測範圍為0


        //物件池
        bulletObjectPool = new ObjectPool<Bullet>(
            OnCreatBullet,OnGetBullet,OnReleaseBullet,OnDestroyBullet,true,100,1000);

        for (int i = 0; i < 10; i++)
        {
            bulletObjectPool.Get();
        }
    }

    #region bulletPoolSet
    private Bullet OnCreatBullet()
    {
        Bullet newBullet = Instantiate(bulletPrefab, bulletSpawnPoint.position,Quaternion.identity).GetComponent<Bullet>();
        newBullet.recycle = (bullet) => { bulletObjectPool.Release(bullet); };
        return newBullet;
    }
    private void OnGetBullet(Bullet bullet)
    {
        bullet.gameObject.SetActive(true);
        bullet.transform.SetParent(null);

    }
    private void OnReleaseBullet(Bullet bullet)
    {
        bullet.gameObject.SetActive(false);

        bullet.transform.SetParent(bulletPool.transform);
        bullet.transform.position = bulletPool.transform.position;


    }
    private void OnDestroyBullet(Bullet bullet)
    {
        Destroy(bullet.gameObject);
    }
    #endregion
    private void OnEnable()
    {
        Actions.OnShootEnemy += AttackTarget;
    }
    private void OnDisable()
    {
        Actions.OnShootEnemy -= AttackTarget;

    }
   
    public void AttackTarget(Transform target)
    {
        Bullet b =bulletObjectPool.Get();
        b.target = target;
        transform.LookAt(target);
    }
}
