using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

public class LeaderBoard : MonoBehaviour
{
    [SerializeField] private Button _leaderBoardButton;
    
    /*void Start()
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
                _leaderBoardButton.interactable = false; 
            }
        });
     
    }
    */

    public void ShowLeaderBoard()
    {
        Social.ShowLeaderboardUI();
    }
}
