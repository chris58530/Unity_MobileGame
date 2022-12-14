using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public static class GameActions
{

    public static Action<Transform> OnShootEnemy;

    public static Action<Creature, Transform> OnDropItem;

    public static Action<int> OnDamageEnemy;
    public static Action<int> OnDamagePlayer;
}
