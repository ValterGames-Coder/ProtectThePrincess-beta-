using UnityEngine;
using UnityEngine.UI;

public class BattleStatistics : MonoBehaviour
{
    public float timer; // Секундомер
    public int allKill, howMoney; // Все убитые, монеты
    [SerializeField] private Text _timeTextWin, _allKillTextWin, _howMoneyTextWin, _timeTextLose, _allKillTextLose, _howMoneyTextLose; // Текст для секундомера, для убитых, для монет

    void Update()
    {
        if (!FindObjectOfType<SpawnerEnemies>().win && !FindObjectOfType<SpawnerEnemies>().lose)
        {
            timer += Time.deltaTime;
        }
        
        if(FindObjectOfType<SpawnerEnemies>().win)
        {
            _timeTextWin.text = timer.ToString("F2");
            _allKillTextWin.text = allKill.ToString();
            _howMoneyTextWin.text = howMoney.ToString();
        }
        else if (FindObjectOfType<SpawnerEnemies>().lose)
        {
            _timeTextLose.text = timer.ToString("F2");
            _allKillTextLose.text = allKill.ToString();
            _howMoneyTextLose.text = howMoney.ToString();
        }
    }
}
