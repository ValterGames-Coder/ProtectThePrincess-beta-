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
    public int wave;
    public int enemyCount;
    private float _timeToSpawn;
    private ScoreManager _scoreManager;
    public bool isWave;

    private void Start()
    {
        _timeToSpawn = _startTimeToSpawn;
        _scoreManager = FindObjectOfType<ScoreManager>();
    }
    private void Update()
    {
        _waveText.text = "Волна: " + (wave + 1);
        howMuchEnemiesText.text = "Осталось врагов: " + (fromEnemies - _scoreManager.killedEnemies);
        if (_scoreManager.killedEnemies == fromEnemies)
        {
            isWave = false;
            _scoreManager.killedEnemies = 0;
            wave++;
            var newItem = fromEnemies + Random.Range(1, 10);
            fromEnemies = Random.Range(fromEnemies + 1, newItem);
        }
        if (_timeToSpawn <= 0 && !isWave)
        {
            isWave = true;
            enemyCount = fromEnemies;
            StartCoroutine(Spawn());
            _timeToSpawn = _startTimeToSpawn;
        }
        
        if(isWave == false) _timeToSpawn -= Time.deltaTime;
    }

    private IEnumerator Spawn()
    {
        for (; enemyCount > 0; enemyCount--)
        {
            if (enemyCount > 0)
            {
                var randomEnemy = Random.Range(0, _enemies.Length);
                var randomSpawn = Random.Range(0, _spawns.Length);
                Instantiate(_enemies[randomEnemy], _spawns[randomSpawn].position, Quaternion.identity);
                yield return new WaitForSeconds(Random.Range(0.2f, 5f));
            }
        }
    }
}
