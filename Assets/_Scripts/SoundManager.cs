using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;
    AudioSource UIAudioSource;
    AudioSource RiderAudioSource;
    AudioSource CatAudioSource;
    AudioSource ActionAudioSource;

    [SerializeField]
    AudioClip _Bottun, _BuyGem, _Coin, _CowAttack, _GetHurt, _Lazer, _OctopusATK, _PickUp, _UnlcokItem;

    void Awake()
    {
        instance = this;
        RiderAudioSource = gameObject.AddComponent<AudioSource>();
        UIAudioSource = gameObject.AddComponent<AudioSource>();
        ActionAudioSource = gameObject.AddComponent<AudioSource>();

    }
    public void Bottun()
    {
        UIAudioSource.clip = _Bottun;
        UIAudioSource.Play();
    }
    public void BuyGem()
    {
        UIAudioSource.clip = _BuyGem;
        UIAudioSource.Play();

    }
    public void Coin()
    {
        UIAudioSource.clip = _Coin;
        UIAudioSource.Play();

    }
    public void CowAttack()
    {
        RiderAudioSource.clip = _CowAttack;
        RiderAudioSource.Play();
    }
    public void GetHurt()
    {
        RiderAudioSource.clip = _GetHurt;
        RiderAudioSource.Play();


    }
    public void Lazer()
    {
        CatAudioSource.clip = _Lazer;
        CatAudioSource.Play();


    }
    public void OctopusATK()
    {
        RiderAudioSource.clip = _OctopusATK;
        RiderAudioSource.Play();

    }
    public void PickUp()
    {
        ActionAudioSource.clip = _PickUp;
        ActionAudioSource.Play();
    }
    public void UnlcokItem()
    {

        UIAudioSource.clip = _UnlcokItem;
        UIAudioSource.Play();
    }



}
