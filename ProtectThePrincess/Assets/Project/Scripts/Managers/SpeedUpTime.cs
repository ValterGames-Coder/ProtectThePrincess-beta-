using UnityEngine;

public class SpeedUpTime : MonoBehaviour
{
    private LocalizationText _lt;
    private TransitionsManager _tm;
    public bool speedUpTime;

    void Start()
    {
        _tm = FindObjectOfType<TransitionsManager>();
    }

    public void Click()
    {
        speedUpTime = !speedUpTime;
        if (speedUpTime)
        {
            Time.timeScale = 2f;
        }
        if (!speedUpTime && !_tm.pause && PlayerPrefs.GetString("FirstEntered") == "true")
        {
            Time.timeScale = 1f;
        }
    }
}
