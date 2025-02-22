using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IAPController : MonoBehaviour
{


	public GameObject parentalControlDialog;

	public static int gamePlayIndex = 0;
	public static int interstitialDisplyIndex = 5;

    public static int interstitialDisplayTimeGap = 30;
    public static float lastInterstitialDisplayedTime = 0;

	public const string REMOVEADS_PRODUCT_ID = "removeads";

	public const string IAP_STATUS_KEY = "IAPTATUS";

	public enum IAPStatus
	{
		NOT_PURCHASED = -1,
		UNKNOWN = 0,
		PURCHASED = 1
	};

	public static IAPStatus removeAdsStatus = IAPStatus.UNKNOWN;

	private void Awake()
	{
		gameObject.GetComponent<Image>().enabled = false;
		//transform.GetChild(0).gameObject.SetActive(false);

	}
	private void Start()
	{
		StartCoroutine(CheckRemoveAdsStatus());
	}

	IEnumerator CheckRemoveAdsStatus()
	{
		while (removeAdsStatus == IAPStatus.UNKNOWN)
		{
			yield return new WaitForSeconds(1f);
		}

		if (removeAdsStatus == IAPStatus.PURCHASED)
		{
			//gameObject.SetActive(false);
			gameObject.GetComponent<Image>().enabled = false;
			//transform.GetChild(0).GetComponent<Text>().enabled = false;
			//transform.GetChild(0).gameObject.SetActive(false);
		}
		else if (removeAdsStatus == IAPStatus.NOT_PURCHASED)
		{
			//gameObject.SetActive(true);
			gameObject.GetComponent<Image>().enabled = true;
			//transform.GetChild(0).GetComponent<Text>().enabled = true;
			//transform.GetChild(0).gameObject.SetActive(true);
			iTween.ScaleFrom(gameObject, new Vector3(0.1f, 0.1f, 0.1f), 0.5f);
		}
	}

	public void Fulfill()
	{
		Debug.Log("You Purchased Remove Ads!");
		//gameObject.SetActive(false);
		//parentalControlDialog.SetActive(false);
		removeAdsStatus = IAPStatus.PURCHASED;

		PlayerPrefs.SetInt(IAP_STATUS_KEY, (int)IAPStatus.PURCHASED);

		/*try
		{
			GameObject adObject = GameObject.Find("AdObject");

			if (DisplayAds_IAP.bannerView != null)
				DisplayAds_IAP.bannerView.Destroy();

			if (DisplayAds_IAP.interstitial != null)
				DisplayAds_IAP.interstitial.Destroy();

			Destroy(adObject);
		}
		catch (System.Exception)
		{
			Debug.Log("AdObject not found!");
		}*/
       
        gameObject.GetComponent<Image>().enabled = false;
		//transform.GetChild(0).gameObject.SetActive(false);		

		GetComponent<ParentalControlScript>().SuccessMessage();

		gameObject.SetActive(false);
		//Destroy(gameObject);
	}

	public void NotFulfilled()
	{
		Debug.Log("Your Purchase Failed!");
		Invoke("ShowRemoveAdsBtn", 0.5f);
		//GetComponent<ParentalControlScript>().SuccessMessage();
	}

	void ShowRemoveAdsBtn()
	{
		gameObject.SetActive(true);
		//iTween.ScaleFrom(gameObject, new Vector3(0.1f, 0.1f, 0.1f), 0.5f);
	}
}
