using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds;
using GoogleMobileAds.Api;
using System;

public class AdsManager : MonoBehaviour
{
    public static AdsManager Instance;

    public  BannerViewController banner;
    public InterstitialAdController interstitial;
    public RewardedAdController RewardAd;

    public int IntertitialAds_Countdown = 2;
    // Start is called before the first frame update
    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            Instance = this;
        }

        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        interstitial.LoadAd();
        banner.LoadAd();
        RewardAd.LoadAd();

       /* MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            if (initStatus.ToString() == "Initialized")
            {
                Debug.Log("Ads Initialized Successfully!!!");
                // Initialization was successful, you can proceed with loading ads.
                interstitial.LoadAd();
                banner.LoadAd();
                RewardAd.LoadAd();
            }
            else
            {
                // Initialization failed, handle the error or inform the user.
                Debug.LogError("Initialization failed: " + initStatus.ToString());
            }
        });*/



        // banner.ShowAd();
    }

    public void ReduceInterstitial_Ads_Countdown()
    {
        IntertitialAds_Countdown--;
        if(IntertitialAds_Countdown <= 0)
        {
            IntertitialAds_Countdown = 2;
            interstitial.ShowAd();
        }
    }
}
