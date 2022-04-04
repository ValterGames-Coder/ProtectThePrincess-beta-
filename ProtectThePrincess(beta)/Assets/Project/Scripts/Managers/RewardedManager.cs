using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Random = UnityEngine.Random;
//using Unity.Notifications.Android;

public class RewardedManager : MonoBehaviour
{
    [SerializeField] private float msToWait = 5000f;
    public TMP_Text _timerText;
    public Button _rewardButton;
    public ulong lastOpen;
    private LocalizationText _rewardedText;
    private enum ControlType { Money, Chests }
    private bool _isPush;

    void Start()
    {
    	//CreateNotificationChannel();
    	if (PlayerPrefs.GetInt("Send") == 1 && IsReady() == true) PlayerPrefs.SetInt("Send", 0);
        if (!PlayerPrefs.HasKey("LastOpen")) PlayerPrefs.SetString("LastOpen", lastOpen.ToString());
        _rewardButton = GetComponent<Button>();
        lastOpen = ulong.Parse(PlayerPrefs.GetString("LastOpen"));
        _timerText = GetComponentInChildren<TMP_Text>();
        _rewardedText = GetComponentInChildren<LocalizationText>();

        if (!IsReady())
        {
            _rewardButton.interactable = false;
        }
    }

    private void Update()
    {
        if (!_rewardButton.IsInteractable())
        {
            if (IsReady())
            {
                _rewardedText.Localize("RewardedButton");
                _rewardButton.interactable = true;
                return;
            }
            ulong diff = ((ulong)DateTime.Now.Ticks - lastOpen);
            ulong m = diff / TimeSpan.TicksPerMillisecond;
            float seconleft = (float)(msToWait - m) / 1000f;

            string t = "";

            t += ((int)seconleft / 3600).ToString("00") + ":";
            seconleft -= ((int)seconleft / 3600) * 3600;
            t += ((int)seconleft / 60).ToString("00") + ":";
            t += ((int)seconleft % 60).ToString("00");

            _timerText.text = t;
        }
    }

    public void Click()
    {
        lastOpen = (ulong)DateTime.Now.Ticks;
        PlayerPrefs.SetString("LastOpen", lastOpen.ToString());
        _rewardButton.interactable = false;
        
        int randomMoney = Random.Range(25, 50);
        PlayerPrefs.SetInt("Money", FindObjectOfType<ShopManager>().money += randomMoney);
    }

    private bool IsReady()
    {
        ulong diff = ((ulong)DateTime.Now.Ticks - lastOpen);
        ulong m = diff / TimeSpan.TicksPerMillisecond;
        float seconleft = (float)(msToWait - m) / 1000f;

        if(seconleft <= 0)
        {
            //_rewardedText.Localize("RewardedButton");
            if(PlayerPrefs.GetInt("Send") == 0) {
                //SendNotification(seconleft);
            	PlayerPrefs.SetInt("Send", 1);
            }
            //_timerText.text = "Ready";
            return true;
        }
        return false;
    }
    

    /*public void CreateNotificationChannel()
    {
        var channel = new AndroidNotificationChannel()
        {
            Id = "channel_id",
            Name = "Default Channel",
            Importance = Importance.High,
            Description = "Generic notifications",
        };

        AndroidNotificationCenter.RegisterNotificationChannel(channel);
    }

    public void SendNotification(float time)
    {
        var notification = new AndroidNotification();
        notification.Title = "A gift is waiting for you!";
        notification.Text = "Enter the game and pick it up";
        notification.LargeIcon = "icon_0";
        notification.FireTime = System.DateTime.Now.AddSeconds(time);

        AndroidNotificationCenter.SendNotification(notification, "channel_id");
    }*/
}
