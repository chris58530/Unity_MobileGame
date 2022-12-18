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
                Vector3 posOffset = new Vector3(Random.Range(-1, 1), 0.2f, Random.Range(-1, 1));
                Vector3 creaturePos = new Vector3(creatuerTrans.position.x, 0, creatuerTrans.position.z);
                Instantiate(creature.items[i], creaturePos + posOffset, creatuerTrans.rotation);

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
