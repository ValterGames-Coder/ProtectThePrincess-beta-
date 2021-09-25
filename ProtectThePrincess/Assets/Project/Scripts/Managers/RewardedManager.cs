using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Random = UnityEngine.Random;

public class RewardedManager : MonoBehaviour
{
    [SerializeField] private float msToWait = 5000f;
    private TMP_Text _timerText;
    private Button _rewardButton;
    public ulong lastOpen;
    private LocalizationText _rewardedText;
    private enum ControlType { Money, Chests }

    void Start()
    {
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

        int money = PlayerPrefs.GetInt("Money");
        int randomMoney = Random.Range(50, 150);
        FindObjectOfType<ShopManager>().money += randomMoney;
        PlayerPrefs.SetInt("Money", money + randomMoney);
    }

    private bool IsReady()
    {
        ulong diff = ((ulong)DateTime.Now.Ticks - lastOpen);
        ulong m = diff / TimeSpan.TicksPerMillisecond;
        float seconleft = (float)(msToWait - m) / 1000f;

        if(seconleft <= 0)
        {
            _rewardedText.Localize("RewardedButton");
            //_timerText.text = "Ready";
            return true;
        }
        return false;
    }
}
