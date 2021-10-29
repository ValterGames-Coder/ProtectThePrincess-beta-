using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class LeaderBoard : MonoBehaviour
{
    void Start()
    {
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
        Social.localUser.Authenticate(succes =>
        {
            if (succes)
            {

            }
            else
            {

            }
        });
    }

    public void ShowLeaderBoard()
    {
        Social.ShowLeaderboardUI();
    }
}
