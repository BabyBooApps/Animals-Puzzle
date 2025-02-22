using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScreen : MonoBehaviour
{

    private void Awake()
    {
        Invoke("loadAds", 1.0f);
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void loadAds()
    {
        AdsManager.Instance.banner.ShowAd();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
