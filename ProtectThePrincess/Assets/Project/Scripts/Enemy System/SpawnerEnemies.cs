using System.Collections;
using UnityEngine;
using TMPro;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class SpawnerEnemies : MonoBehaviour
{
    [Header("Enemies prefab")]
    [SerializeField] private GameObject[] _prefabEnemies; // Список врагов
    [SerializeField] private float[] _probabilities; // Список вероятностей спавна
    [Header("Spawn positions")]
    [SerializeField] private Transform[] _spawnPositions; // Список позиций для спавна
    public int wave, _howManyEnemies = 2, endWave, leftEnemy; // Номер волны, сколько всего врагов, Последняя волна 
    [Header("Time")]
    [SerializeField] private float _timeToSpawn, _startTimeToSpawn; // Время спавна, старт время спавна
    [Header("Text")]
    [SerializeField] private TMP_Text _waveText, _howManyEnemiesText; // Текст для волн, Текст для показа сколько осталось врагов
    [SerializeField] private LocalizationText _waveLocalization, _howManyEnemiesLocalization;
    private ScoreManager _scoreManager; // Счётчик очков
    public bool win, lose, timeIsOver, isWave, _firstWave = true; // Победа , проигрышь, волны ли, первая волна ли 
    [Header("Panels")]
    [SerializeField] private GameObject _panelWin, _panelLose; // Панель победы, паенль проигрыша 

    private float[] _firstProbabitilies = {95, 40, 5, 0};
    
    private const string _leaderBoard = "CgkIm8OJz4YMEAIQAQ";
    private int _wins;

    private void Start()
    {
        if (PlayerPrefs.GetString("FirstEntered") != "true")
        {
            endWave = 3;
            _probabilities = _firstProbabitilies;
        }
        else endWave = Random.Range(5, 8); // Выбираем сколько будет всего волн
        _timeToSpawn = _startTimeToSpawn; // Настраиваем время 
        _scoreManager = FindObjectOfType<ScoreManager>(); // Подключание очков 
        
        _wins = PlayerPrefs.GetInt("Wins");

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

    private void Update()
    {
        leftEnemy = GameObject.FindGameObjectsWithTag("Enemy").Length;
        _waveLocalization.Localize("WaveLocalization");
        _waveText.text += $" {wave + 1} / {endWave}"; // Текст с волноми
        if (!win && !lose) // Если не выиграли и не проигрыли 
        {
            if (!isWave) // Если нет волны
            {
                _timeToSpawn -= Time.deltaTime; // Запускается таймер
                if (wave == 0) _howManyEnemiesLocalization.Localize("HowManyEnemiesLocalization1");
                else _howManyEnemiesLocalization.Localize("HowManyEnemiesLocalization2");
                _howManyEnemiesText.text += $" {_timeToSpawn.ToString("F1")}";  // Иначе другой текст
            }
            else
            {
                _howManyEnemiesLocalization.Localize("HowManyEnemiesLocalization3");
                _howManyEnemiesText.text += $" {_scoreManager.killedEnemies} / {_howManyEnemies}";
            }
            if (_howManyEnemies - leftEnemy == _howManyEnemies && isWave) // Если убито столько же сколько и нужно
            {
                if (wave + 1 == endWave) // Если это была последняя волна
                {
                    win = true; // Победа!
                }
                isWave = false; // Волны нет
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                _howManyEnemies = Random.Range(_howManyEnemies + 1, Random.Range(_howManyEnemies, _howManyEnemies + 5)); // Рандомное количество врагов
                _scoreManager.killedEnemies = 0; // Убираем убитых
            }

            if (_timeToSpawn <= 0 && !isWave && !_firstWave) // Если таймер равен или меньше 0 и при этом нет волны и это не первая волна
            {
                wave++; // Прибавляем новую волну
                isWave = true; // Начинается волна
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                StartCoroutine(Spawn(_howManyEnemies)); // Начинается спавн врагов
            }
            else if (_timeToSpawn <= 0 && !isWave && _firstWave) // Если таймер равен или меньше 0 и при этом нет волны и это первая волна
            {
                _firstWave = false; // Теперь это не первая волна
                isWave = true;  // Начинается волна
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                StartCoroutine(Spawn(_howManyEnemies));// Начинается спавн врагов
            }
        }
        else if (win && !FindObjectOfType<TransitionsManager>().pause) // Если выиграли 
        {
            FindObjectOfType<SpeedUpTime>().speedUpTime = false;
            _panelWin.SetActive(true); // Включаем панель выиграша 
            PlayerPrefs.SetInt("Wins", PlayerPrefs.GetInt("Wins") + 1);
            Social.ReportScore(_wins, _leaderBoard, (bool succes) => { });
            //TimeScale();
        }
        else if (lose && !FindObjectOfType<TransitionsManager>().pause) // Если проиграли 
        {
            FindObjectOfType<SpeedUpTime>().speedUpTime = false;
            _panelLose.SetActive(true); // Включаем панель проигрыша
            //TimeScale();
        }
    }

    void TimeScale()
    {
        if (!timeIsOver)
        {
            Time.timeScale = 0;
            timeIsOver = !timeIsOver;
        }
    }

    IEnumerator Spawn(int enemyCount) // Спавн врагов (количество врагов) 
    {
        for (int i = 0; i < enemyCount; i++) //Цикл пока не всех заспавнили
        {
            int randomEnemy = Random.Range(0, _prefabEnemies.Length); // Выбираем рандомного врага
            float probability = Random.Range(0, 100); // Рандомная вероятность
            if (probability <= _probabilities[randomEnemy] && _prefabEnemies[randomEnemy].GetComponent<Enemy>().startWave <= wave) // Если она меньше или равна вероятности выпадения
            {
                int radnomPosition = Random.Range(0, _spawnPositions.Length); // Выбираем рандомную позицию
                Instantiate(_prefabEnemies[randomEnemy], _spawnPositions[radnomPosition].position,
                            Quaternion.identity); // Создаём врага
                yield return new WaitForSeconds(Random.Range(1f, 3f)); // Ждём
            }
            else // Иначе не засчитываем и делаем ещё раз 
            {
                i--;
            }
        }
    }
}
