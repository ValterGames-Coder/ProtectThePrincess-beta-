using UnityEngine;

public class SpeedUpTime : MonoBehaviour
{
    private LocalizationText _lt;
    public bool speedUpTime;

    public void Click()
    {
        speedUpTime = !speedUpTime;
    }

    private void Update()
    {
        if (speedUpTime)
        {
            Time.timeScale = 2f;
        }
        else if (!speedUpTime && !FindObjectOfType<TransitionsManager>().pause && PlayerPrefs.GetString("FirstEntered") == "true")
        {
            Time.timeScale = 1f;
        }
    }
}
