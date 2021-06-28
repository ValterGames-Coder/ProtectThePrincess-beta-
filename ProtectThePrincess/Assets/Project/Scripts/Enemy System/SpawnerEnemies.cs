using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class SpawnerEnemies : MonoBehaviour
{
    [SerializeField] private GameObject[] _prefabEnemies;
    [SerializeField] private Transform[] _spawnPositions;
    public int _wave, _howManyEnemies, _endWave;
    [SerializeField] private float _timeToSpawn, _startTimeToSpawn;
    [SerializeField] private Text _waveText, _howManyEnemiesText;
    private ScoreManager _scoreManager;
    [SerializeField] private bool _isWave, _firstWave, _win;
    [SerializeField] private GameObject _panelWin;

    private void Start()
    {
        _endWave = Random.Range(5, 15);
        _timeToSpawn = _startTimeToSpawn;
        _scoreManager = FindObjectOfType<ScoreManager>();
    }

    private void Update()
    {
        if(_wave == 0) _waveText.text = $"Волна: 1 / {_endWave}";
        else _waveText.text = $"Волна: {_wave + 1} / {_endWave}";
        if (!_win)
        {
            if (!_isWave)
            {
                _timeToSpawn -= Time.deltaTime;
                if (_wave == 0) _howManyEnemiesText.text = $"До волны осталось: {_timeToSpawn.ToString("F1")} секунд";
                else _howManyEnemiesText.text = $"До новой волны осталось: {_timeToSpawn.ToString("F1")} секунд";
            }
            else
            {
                _howManyEnemiesText.text = $"Осталось врагов: {_howManyEnemies - _scoreManager.killedEnemies}";
            }

            if (_scoreManager.killedEnemies == _howManyEnemies)
            {
                if (_wave + 1 == _endWave)
                {
                    _win = true;
                }
                _isWave = false;
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10);
                _howManyEnemies = Random.Range(_howManyEnemies + 1, Random.Range(_howManyEnemies, _howManyEnemies + 5));
                _scoreManager.killedEnemies = 0;
            }

            if (_timeToSpawn <= 0 && !_isWave && !_firstWave)
            {
                _wave++;
                _isWave = true;
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10);
                StartCoroutine(Spawn(_howManyEnemies));
            }
            else if (_timeToSpawn <= 0 && !_isWave && _firstWave)
            {
                _firstWave = false;
                _isWave = true;
                _timeToSpawn = Random.Range(_startTimeToSpawn, 10);
                _scoreManager.killedEnemies = 0;
                StartCoroutine(Spawn(_howManyEnemies));
            }
        }
        else if (_win)
        {
            _panelWin.SetActive(true);
            Time.timeScale = 0f;
        }
    }

    IEnumerator Spawn(int enemyCount)
    {
        for (int i = 0; i < enemyCount; i++)
        {
            int randomEnemy = Random.Range(0, _prefabEnemies.Length);
            int radnomPosition = Random.Range(0, _spawnPositions.Length);
            Instantiate(_prefabEnemies[randomEnemy], _spawnPositions[radnomPosition].position,
                        Quaternion.identity);
            yield return new WaitForSeconds(Random.Range(1f, 3f));
        }
    }
}
