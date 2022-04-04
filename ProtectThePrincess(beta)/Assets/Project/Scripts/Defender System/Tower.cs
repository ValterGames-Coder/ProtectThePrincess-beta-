using UnityEngine;
public class Tower : MonoBehaviour
{
    void Start()
    {
        gameObject.GetComponent<SpriteRenderer>().sprite = FindObjectOfType<Defender>().item.towerSprite;
        if (FindObjectOfType<Defender>().item.isHaveDoor)
        {
            GameObject.Find("Tower door").SetActive(true);
            GameObject.Find("Tower door").GetComponent<SpriteRenderer>().sprite = FindObjectOfType<Defender>().item.doorSprite;
            GameObject.Find("Tower door").transform.localPosition = FindObjectOfType<Defender>().item.doorPosition;
        }
        else
        {
            GameObject.Find("Tower door").SetActive(false);
        }
    }
}
