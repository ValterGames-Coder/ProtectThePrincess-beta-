using UnityEngine;
public class ScoreManager : MonoBehaviour
{
    public int killedEnemies;

    public void Kill()
    {
        killedEnemies++;
    }
}
