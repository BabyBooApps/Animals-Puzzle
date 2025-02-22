using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ads_Manager_Static : MonoBehaviour
{

    public static Ads_Manager_Static Instance;

    public string Ads_App_ID_Adaptive_Banner = "ca-app-pub-6727597482466175/3592930538";
    public string Ads_App_ID_Fixed_Banner = "ca-app-pub-6727597482466175/7456912094";
    public string Ads_App_ID_Intertitial = "ca-app-pub-6727597482466175/6143830422";
    public string Ads_App_ID_RewardVideo = "ca-app-pub-6727597482466175/4830748753";




    void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            Instance = this;
        }
    }
    void Start()
    {
        // Create a new GameObject to hold the banner ad
        GameObject myGameObject = new GameObject("myBannerAdObject");

        // Add the BannerWrapper script to this GameObject
        myGameObject.AddComponent<BannerWrapper>();

        // Mark the GameObject to not be destroyed across scenes
        DontDestroyOnLoad(myGameObject);
    }
}
