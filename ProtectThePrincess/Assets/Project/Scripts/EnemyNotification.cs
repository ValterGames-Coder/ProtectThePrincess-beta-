using UnityEngine;
public class EnemyNotification : MonoBehaviour
{
    [SerializeField] private GameObject leftNotification, rightNotification; 
    public void SetActive(bool active, string name)
    {
        if (name == "leftNotification")
        {
            leftNotification.SetActive(active);
        }
        if (name == "rightNotification")
        {
            rightNotification.SetActive(active);
        }
    }
}
