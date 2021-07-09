using UnityEngine;
using TMPro;

public class SpeedUpTime : MonoBehaviour
{
    [SerializeField] private TMP_Text _speedUpTimeText;
    private LocalizationText _lt;
    public bool speedUpTime;

    public void Click()
    {
        speedUpTime = !speedUpTime;
        _lt = _speedUpTimeText.GetComponent<LocalizationText>();
    }

    private void Update()
    {
        if (speedUpTime)
        {
            Time.timeScale = 2f;
            _speedUpTimeText.text = _lt.texts[_lt.index];
        }
        else if (!speedUpTime && !FindObjectOfType<TransitionsManager>().pause)
        {
            Time.timeScale = 1f;
            _speedUpTimeText.text = "";
        }
    }
}
