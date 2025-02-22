using GoogleMobileAds.Api;
using UnityEngine;

public class BannerWrapper : MonoBehaviour
{
    public BannerView bannerView;
    public string Ads_App_ID_Adaptive_Banner = "ca-app-pub-3940256099942544/9214589741";

    void Start()
    {
        // Initialize the BannerView with your Ad Unit ID, size, and position
        bannerView = new BannerView(Ads_App_ID_Adaptive_Banner, AdSize.SmartBanner, AdPosition.Top);

        // Create an ad request
        AdRequest request = new AdRequest.Builder().Build();

        // Load the ad
        bannerView.LoadAd(request);

        // Show the ad
        bannerView.Show();
    }

    // Optional: Add methods to control the banner ad visibility if needed
    public void HideBanner()
    {
        if (bannerView != null)
        {
            bannerView.Hide();
        }
    }

    public void ShowBanner()
    {
        // Initialize the BannerView with your Ad Unit ID, size, and position
        bannerView = new BannerView(Ads_App_ID_Adaptive_Banner, AdSize.SmartBanner, AdPosition.Top);

        // Create an ad request
        AdRequest request = new AdRequest.Builder().Build();

        // Load the ad
        bannerView.LoadAd(request);

        // Show the ad
        bannerView.Show();
    }
}
