using UnityEngine;

public class SocialNetworksManager : MonoBehaviour
{
    public void OpenURL(string url)
    {
        Application.OpenURL(url);
    }
}
