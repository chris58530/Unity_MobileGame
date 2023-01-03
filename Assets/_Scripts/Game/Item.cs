using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField]
    private IngredientsDataSO ingredientsData;

    [SerializeField]
    private int thisItemCount;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player")|| other.gameObject.CompareTag("PlayerAttack"))
        {
            SoundManager.instance.PickUp();
            PlayerCurrentData.itemCount[thisItemCount] += 1;
            Destroy(gameObject);
        }
    }
}
