using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class SpawnerEnemies : MonoBehaviour
{
    [Header("Enemies prefab")]
    [SerializeField] private GameObject[] _prefabEnemies; // Список врагов
    [SerializeField] private float[] _probabilities; // Список вероятностей спавна
    [Header("Spawn positions")]
    [SerializeField] private Transform[] _spawnPositions; // Список позиций для спавна
    [HideInInspector] public int _wave, _howManyEnemies, _endWave; // Номер волны, сколько всего врагов, Последняя волна 
    [Header("Time")]
    [SerializeField] private float _timeToSpawn, _startTimeToSpawn; // Время спавна, старт время спавна
    [Header("Text")]
    [SerializeField] private Text _waveText, _howManyEnemiesText; // Текст для волн, Текст для показа сколько осталось врагов
    private ScoreManager _scoreManager; // Счётчик очков
    [HideInInspector] public bool _win, _lose, _isWave, _firstWave; // Победа , проигрышь, волны ли, первая волна ли 
    [Header("Panels")]
    [SerializeField] private GameObject _panelWin, _panelLose; // Панель победы, паенль проигрыша 

    private void Start()
    {
        _endWave = Random.Range(5, 15); // Выбираем сколько будет всего волн
        _timeToSpawn = _startTimeToSpawn; // Настраиваем время 
        _scoreManager = FindObjectOfType<ScoreManager>(); // Подключание очков 
    }

    private void Update()
    {
        if(_wave == 0) _waveText.text = $"Волна: 1 / {_endWave}"; // Текст с волноми
        else _waveText.text = $"Волна: {_wave + 1} / {_endWave}"; 
        if (!_win && !_lose) // Если не выиграли и не проигрыли 
        {
            if (!_isWave) // Если нет волны
            {
                _timeToSpawn -= Time.deltaTime; // Запускается таймер
                if (_wave == 0) _howManyEnemiesText.text = $"До волны осталось: {_timeToSpawn.ToString("F1")} секунд"; // Если волна первая, то один текст
                else _howManyEnemiesText.text = $"До новой волны осталось: {_timeToSpawn.ToString("F1")} секунд";  // Иначе другой текст
            }
            else
            {
                _howManyEnemiesText.text = $"Осталось врагов: {_howManyEnemies - _scoreManager.killedEnemies}"; //Иначе пишем сколько осталось врагов
            }

            if (_scoreManager.killedEnemies == _howManyEnemies) // Если убито столько же сколько и нужно
            {
                if (_wave + 1 == _endWave) // Если это была последняя волна
                {
                    _win = true; // Победа!
                }
                _isWave = false; // Волны нет
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                _howManyEnemies = Random.Range(_howManyEnemies + 1, Random.Range(_howManyEnemies, _howManyEnemies + 5)); // Рандомное количество врагов
                _scoreManager.killedEnemies = 0; // Убираем убитых
            }

            if (_timeToSpawn <= 0 && !_isWave && !_firstWave) // Если таймер равен или меньше 0 и при этом нет волны и это не первая волна
            {
                _wave++; // Прибавляем новую волну
                _isWave = true; // Начинается волна
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                StartCoroutine(Spawn(_howManyEnemies)); // Начинается спавн врагов
            }
            else if (_timeToSpawn <= 0 && !_isWave && _firstWave) // Если таймер равен или меньше 0 и при этом нет волны и это первая волна
            {
                _firstWave = false; // Теперь это не первая волна
                _isWave = true;  // Начинается волна
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10); //Рандомное время таймера
                StartCoroutine(Spawn(_howManyEnemies));// Начинается спавн врагов
            }
        }
        else if (_win) // Если выиграли 
        {
            _panelWin.SetActive(true); // Включаем панель выиграша
            Time.timeScale = 0f; // Останавливаем время
        }
        else if (_lose) // Если проиграли 
        {
            _panelLose.SetActive(true); // Включаем панель проигрыша
            Time.timeScale = 0f; // Останавливаем время
        }
    }

    IEnumerator Spawn(int enemyCount) // Спавн врагов (количество врагов) 
    {
        for (int i = 0; i < enemyCount; i++) //Цикл пока не всех заспавнили
        {
            int randomEnemy = Random.Range(0, _prefabEnemies.Length); // Выбираем рандомного врага
            float probability = Random.Range(0, 100); // Рандомная вероятность
            if (probability <= _probabilities[randomEnemy]) // Если она меньше или равна вероятности выпадения
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
