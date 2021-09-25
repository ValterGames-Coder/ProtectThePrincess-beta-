using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour
{
    [SerializeField] private List<AudioClip> _clips;
    private AudioSource _audio;
    void Start()
    {
        _audio = GetComponent<AudioSource>();
        StartCoroutine(PlayingSong());
    }

    IEnumerator PlayingSong()
    {
        int index = Random.Range(0, _clips.Count);
        _audio.clip = _clips[index];
        _audio.Play();
        yield return new WaitForSeconds(_clips[index].length);
        StartCoroutine(PlayingSong());
    }
}
