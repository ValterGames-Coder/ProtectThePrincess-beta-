using UnityEngine;
using UnityEngine.UI;

public class SpeedUpTime : MonoBehaviour
{
    [SerializeField] private Text _speedUpTimeText;
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
            _speedUpTimeText.text = "Ускорение: 2.0 сек";
        }
        else if (!speedUpTime && !FindObjectOfType<TransitionsManager>().pause)
        {
            Time.timeScale = 1f;
            _speedUpTimeText.text = "";
        }
    }
}
