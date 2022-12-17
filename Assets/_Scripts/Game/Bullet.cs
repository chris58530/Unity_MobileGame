using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    [SerializeField]
    private float speed;

    [HideInInspector]
    public Transform target;

    [SerializeField]
    private int damage;
    //objectPool
    public delegate void Recycle(Bullet bullet);
    public Recycle recycle;

    private void FixedUpdate()
    {
        if (target != null)
        {
            transform.position = Vector3.Lerp(transform.position, target.position, speed * Time.deltaTime);
            transform.LookAt(target);
        }
        else recycle(this);
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("EnemyAttack")) //子彈產生傷害在敵人BaseState
        {
            recycle(this);
        }
    }
    public int GetBulletDamage()
    {
        return damage;
    }
}
