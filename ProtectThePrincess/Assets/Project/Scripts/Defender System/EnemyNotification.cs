using UnityEngine;
public class EnemyNotification : MonoBehaviour
{
    [SerializeField] private GameObject leftNotification, rightNotification; // Правый и левый указатель 

    public void SetActive(bool active, string name)
    {
        if (name == "leftNotification") // Если левый указатель 
        {
            leftNotification.SetActive(active); // Активируем
        }
        if (name == "rightNotification") // Если правый указатель
        {
            rightNotification.SetActive(active); // Активируем
        }
    }
}
