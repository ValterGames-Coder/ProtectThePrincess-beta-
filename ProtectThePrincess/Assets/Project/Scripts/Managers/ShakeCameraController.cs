using UnityEngine;
public class ShakeCameraController : MonoBehaviour
{
    public static ShakeCameraController instance;
    private float _shakeTimeRemaining, _shakePower, _shakeFadeTime;
    private SpawnerEnemies _spawner;

    private void Start()
    {
        instance = this;
        _spawner = FindObjectOfType<SpawnerEnemies>();
    }
    private void LateUpdate()
    {
        if (_shakeTimeRemaining > 0)
        {
            _shakeTimeRemaining -= Time.deltaTime;

            float xAmount = Random.Range(-1f, 1f) * _shakePower;
            float yAmount = Random.Range(-1f, 1f) * _shakePower;
            transform.position += new Vector3(xAmount, yAmount, 0f);

            if(!_spawner.win || !_spawner.lose) _shakePower = Mathf.MoveTowards(_shakePower, 0f, _shakeFadeTime * Time.deltaTime);
        }
         
    }
    public void StartShake(float lenght, float power)
    {
        _shakeTimeRemaining = lenght;
        _shakePower = power;

        _shakeFadeTime = power / lenght;
    }
}
