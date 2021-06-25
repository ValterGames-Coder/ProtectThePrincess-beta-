using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class SpawnerEnemies : MonoBehaviour
{
    [SerializeField] private GameObject[] _enemies;
    [SerializeField] private Transform[] _spawns;
    [SerializeField] private int fromEnemies;
    [SerializeField] private float _startTimeToSpawn;
    [SerializeField] private Text _waveText, howMuchEnemiesText;
    private int wave;
    private int enemyCount;
    private float _timeToSpawn;
    private ScoreManager _scoreManager;
    private bool isWave;

    private void Start()
    {
        _timeToSpawn = _startTimeToSpawn;
        _scoreManager = FindObjectOfType<ScoreManager>();
    }
    private void Update()
    {
        _waveText.text = "Волна: " + (wave + 1);
        howMuchEnemiesText.text = "Осталось врагов: " + (fromEnemies - _scoreManager.killedEnemies);
        if (_timeToSpawn <= 0 && wave == 0)
        {
            enemyCount = fromEnemies;
            StartCoroutine(Spawn(enemyCount));
            isWave = true;
            _timeToSpawn = _startTimeToSpawn;
        }
        else if (_timeToSpawn <= 0 && wave != 0 && enemyCount == 0)
        {
            enemyCount = fromEnemies;
            StartCoroutine(Spawn(enemyCount));
            isWave = true;
            _timeToSpawn = _startTimeToSpawn;
        }
        if (_scoreManager.killedEnemies == fromEnemies)
        {
            isWave = false;
            _scoreManager.killedEnemies = 0;
            wave++;
            var newItem = fromEnemies + Random.Range(1, 10);
            fromEnemies = Random.Range(fromEnemies + 1, newItem);
        }
        if(isWave == false) _timeToSpawn -= Time.deltaTime;
    }

    private IEnumerator Spawn(int fromEnemy)
    {
        for (var i = 0; i < fromEnemy; i++)
        {
            var randomEnemy = Random.Range(0, _enemies.Length);
            var randomSpawn = Random.Range(0, _spawns.Length);
            if (enemyCount != 0)
            {
                Instantiate(_enemies[randomEnemy], _spawns[randomSpawn].position, Quaternion.identity);
                enemyCount--;
            }
            yield return new WaitForSeconds(Random.Range(0.2f, 5f));
        }
    }
}
