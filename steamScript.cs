using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Steamworks;

public class steamScript : MonoBehaviour {

    // Use this for initialization
    void Start()
    {
        if (SteamManager.Initialized)
        {
            string name = SteamFriends.GetPersonaName();
            Debug.Log(name);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
