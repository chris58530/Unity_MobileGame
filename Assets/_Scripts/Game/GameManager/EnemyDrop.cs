using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyDrop : MonoBehaviour
{
    public void DropItem(Creature creature, Transform creatuerTrans)
    {
        int randomCount = Random.Range(1, 101);
        for (int i = 0; i < creature.items.Length; i++)
        {
            if (creature.probability[i] >= randomCount)
            {
                Vector3 posOffset = new Vector3(Random.Range(-1, 1), 0, Random.Range(-1, 1));
                Instantiate(creature.items[i],creatuerTrans.position+ posOffset, creatuerTrans.rotation);

            }
        }
    }
    private void OnEnable()
    {
        GameActions.OnDropItem += DropItem;
    }
    private void OnDisable()
    {
        GameActions.OnDropItem -= DropItem;

    }
}
