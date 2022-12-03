using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Pool;

public class PlayerAutoShoot : MonoBehaviour
{
    [SerializeField]
    private Bullet bullet;

    [SerializeField]
    private Transform bulletSpawnPoint;

    [SerializeField]
    private GameObject bulletPool;

    public UnityEvent r;

    private ObjectPool<Bullet> bulletObjectPool;
    // Start is called before the first frame update
    void Start()
    {
        bulletObjectPool = new ObjectPool<Bullet>(
            OnCreatBullet,OnGetBullet,OnReleaseBullet,OnDestroyBullet);
    }

    #region bulletPoolSet
    private Bullet OnCreatBullet()
    {
        var newBullet = Instantiate(bullet);
        return newBullet;
    }
    private void OnGetBullet(Bullet bullet)
    {
        bullet.gameObject.SetActive(true);
        bullet.transform.position = bulletSpawnPoint.position;
    }
    private void OnReleaseBullet(Bullet bullet)
    {
        bullet.transform.SetParent(bulletPool.transform);
        bullet.gameObject.SetActive(false);

    }
    private void OnDestroyBullet(Bullet bullet)
    {
        Destroy(bullet.gameObject);
    }
    #endregion
}
