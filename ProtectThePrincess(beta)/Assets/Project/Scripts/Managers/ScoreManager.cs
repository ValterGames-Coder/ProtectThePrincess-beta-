using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    public int killedEnemies; // Количество убитых

    private void Update()
    {
        if (killedEnemies < 0) 
        {
            killedEnemies = 0;
        }
    }
}
