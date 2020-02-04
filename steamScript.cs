using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEngine;
using Steamworks;
using UnityEngine.SceneManagement;

public class steamScript : MonoBehaviour {
	private static SteamManager s_instance;

	private enum Achievement : int
	{
		SUPER_ONE_GAME,
		MIDDLE_ONE_GAME,
		FAIL_ONE_GAME,
		PLAY_ALL_GAMES,
		PLAY_ONE_GAME,
		PLAY_EPI_ONE,
		PLAY_EPI_TWO,
		PLAY_EPI_THREE,
		PLAY_EPI_FOUR,
		PLAY_EPI_FIVE,
		SUPER_THREE,
		MIDDLE_THREE,
		FAIL_THREE
	};

	private Achievement_t[] m_Achievements = new Achievement_t[] {
		new Achievement_t(Achievement.SUPER_ONE_GAME, "NEW_ACHIEVEMENT_1_0_NAME", "NEW_ACHIEVEMENT_1_0_DESC"),
		new Achievement_t(Achievement.MIDDLE_ONE_GAME, "NEW_ACHIEVEMENT_1_1_NAME", "NEW_ACHIEVEMENT_1_1_DESC"),
		new Achievement_t(Achievement.FAIL_ONE_GAME, "NEW_ACHIEVEMENT_1_2_NAME", "NEW_ACHIEVEMENT_1_2_DESC"),
		new Achievement_t(Achievement.PLAY_ALL_GAMES, "NEW_ACHIEVEMENT_1_3_NAME", "NEW_ACHIEVEMENT_1_3_DESC"),
		new Achievement_t(Achievement.PLAY_ONE_GAME, "NEW_ACHIEVEMENT_1_4_NAME", "NEW_ACHIEVEMENT_1_4_DESC"),
		new Achievement_t(Achievement.SUPER_THREE, "NEW_ACHIEVEMENT_1_5_NAME", "NEW_ACHIEVEMENT_1_5_DESC"),
		new Achievement_t(Achievement.MIDDLE_THREE, "NEW_ACHIEVEMENT_1_6_NAME", "NEW_ACHIEVEMENT_1_6_DESC"),
		new Achievement_t(Achievement.FAIL_THREE, "NEW_ACHIEVEMENT_1_7_NAME", "NEW_ACHIEVEMENT_1_7_DESC"),
		new Achievement_t(Achievement.PLAY_EPI_ONE, "NEW_ACHIEVEMENT_1_8_NAME", "NEW_ACHIEVEMENT_1_8_DESC"),
		new Achievement_t(Achievement.PLAY_EPI_TWO, "NEW_ACHIEVEMENT_1_9_NAME", "NEW_ACHIEVEMENT_1_9_DESC"),
		new Achievement_t(Achievement.PLAY_EPI_THREE, "NEW_ACHIEVEMENT_1_10_NAME", "NEW_ACHIEVEMENT_1_10_DESC"),
		new Achievement_t(Achievement.PLAY_EPI_FOUR, "NEW_ACHIEVEMENT_1_11_NAME", "NEW_ACHIEVEMENT_1_11_DESC"),
		new Achievement_t(Achievement.PLAY_EPI_FIVE, "NEW_ACHIEVEMENT_1_12_NAME", "NEW_ACHIEVEMENT_1_12_DESC")
	};

	// Our GameID
	private CGameID m_GameID;

	// Did we get the stats from Steam?
	private bool m_bRequestedStats;
	private bool m_bStatsValid;

	// Should we store stats this frame?
	private bool m_bStoreStats;

	// Persisted Stat details
	private int NumberOfGames = 5;
	private int m_nTotalGamesPlayed;
	private int m_nTotalNumSupers;
	private int m_nTotalNumMiddles;
	private int m_nTotalNumFails;
	private string SceneName;

	protected Callback<UserStatsReceived_t> m_UserStatsReceived;
	protected Callback<UserStatsStored_t> m_UserStatsStored;
	protected Callback<UserAchievementStored_t> m_UserAchievementStored;

	public void addTotalGamesPlayed()
    {
		int num = PlayerPrefs.GetInt("m_nTotalGamesPlayed") + 1;
		PlayerPrefs.SetInt("m_nTotalGamesPlayed",num);
		m_nTotalGamesPlayed += 1;
	}

	public void addTotalNumSupers()
	{
		int num = PlayerPrefs.GetInt("m_nTotalNumSupers") + 1;
		PlayerPrefs.SetInt("m_nTotalNumSupers", num);
		m_nTotalNumSupers += 1;
	}

	public void addTotalNumMiddles()
	{
		int num = PlayerPrefs.GetInt("m_nTotalNumMiddles") + 1;
		PlayerPrefs.SetInt("m_nTotalNumMiddles", num);
		m_nTotalNumMiddles += 1;

	}

	public void addTotalNumFails()
	{
		int num = PlayerPrefs.GetInt("m_nTotalNumFails") + 1;
		PlayerPrefs.SetInt("m_nTotalNumFails", num);
		m_nTotalNumFails += 1;
	}

	public void setSceneName(string name)
    {
		SceneName = name;
		Debug.LogWarning(SceneName);
	}

	void OnEnable()
	{
		if (!SteamManager.Initialized)
			return;

		// Cache the GameID for use in the Callbacks
		m_GameID = new CGameID(SteamUtils.GetAppID());
		Debug.Log(m_GameID);

		m_UserStatsReceived = Callback<UserStatsReceived_t>.Create(OnUserStatsReceived);
		m_UserStatsStored = Callback<UserStatsStored_t>.Create(OnUserStatsStored);
		m_UserAchievementStored = Callback<UserAchievementStored_t>.Create(OnAchievementStored);

		// These need to be reset to get the stats upon an Assembly reload in the Editor.
		m_bRequestedStats = false;
		m_bStatsValid = false;
	}

	private void Start()
	{
		m_nTotalGamesPlayed = PlayerPrefs.GetInt("m_nTotalGamesPlayed", 0);
		m_nTotalNumSupers = PlayerPrefs.GetInt("m_nTotalNumSupers", 0);
		m_nTotalNumMiddles = PlayerPrefs.GetInt(" m_nTotalNumMiddles", 0);
		m_nTotalNumFails = PlayerPrefs.GetInt("m_nTotalNumFails", 0);
	}

	private void Update()
	{
		if (!SteamManager.Initialized)
			return;

		if (!m_bRequestedStats)
		{
			// Is Steam Loaded? if no, can't get stats, done
			if (!SteamManager.Initialized)
			{
				m_bRequestedStats = true;
				return;
			}

			// If yes, request our stats
			bool bSuccess = SteamUserStats.RequestCurrentStats();

			// This function should only return false if we weren't logged in, and we already checked that.
			// But handle it being false again anyway, just ask again later.
			m_bRequestedStats = bSuccess;
		}

		if (!m_bStatsValid)
			return;

		// Get info from sources

		// Evaluate achievements
		foreach (Achievement_t achievement in m_Achievements)
		{
			if (achievement.m_bAchieved)
				continue;

			switch (achievement.m_eAchievementID)
			{
				case Achievement.PLAY_ALL_GAMES:
					if (m_nTotalGamesPlayed >= NumberOfGames)
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.PLAY_ONE_GAME:
					if (m_nTotalGamesPlayed >= 1)
					{
						UnlockAchievement(achievement);
					}
					break;
			}

			switch (achievement.m_eAchievementID)
			{
				case Achievement.PLAY_EPI_ONE:
					if (SceneName == "level1")
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.PLAY_EPI_TWO:
					if (SceneName == "level2")
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.PLAY_EPI_THREE:
					if (SceneName == "level3")
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.PLAY_EPI_FOUR:
					if (SceneName == "level4")
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.PLAY_EPI_FIVE:
					if (SceneName == "level5")
					{
						UnlockAchievement(achievement);
					}
					break;
			}

			switch (achievement.m_eAchievementID)
			{
				case Achievement.SUPER_ONE_GAME:
					if (m_nTotalNumSupers >= 1)
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.MIDDLE_ONE_GAME:
					if (m_nTotalNumMiddles >= 1)
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.FAIL_ONE_GAME:
					if (m_nTotalNumFails >= 1)
					{
						UnlockAchievement(achievement);
					}
					break;

				case Achievement.SUPER_THREE:
					if (m_nTotalNumSupers >= 3)
					{
						UnlockAchievement(achievement);
					}
					break;
				case Achievement.MIDDLE_THREE:
					if (m_nTotalNumMiddles >= 3)
					{
						UnlockAchievement(achievement);
					}
					break;

				case Achievement.FAIL_THREE:
					if (m_nTotalNumFails >= 3)
					{
						UnlockAchievement(achievement);
					}
					break;
			}
		}
		

		//Store stats in the Steam database if necessary
		if (m_bStoreStats)
		{
			// already set any achievements in UnlockAchievement

			// set stats
			SteamUserStats.SetStat("NumGames", m_nTotalGamesPlayed);
			SteamUserStats.SetStat("NumSupers", m_nTotalNumSupers);
			SteamUserStats.SetStat("NumMiddles", m_nTotalNumMiddles);
			SteamUserStats.SetStat("NumFails", m_nTotalNumFails);
			bool bSuccess = SteamUserStats.StoreStats();
			// If this failed, we never sent anything to the server, try
			// again later.
			m_bStoreStats = !bSuccess;
		}
	}

	//-----------------------------------------------------------------------------
	// Purpose: Unlock this achievement
	//-----------------------------------------------------------------------------
	private void UnlockAchievement(Achievement_t achievement)
	{
		achievement.m_bAchieved = true;

		// the icon may change once it's unlocked
		//achievement.m_iIconImage = 0;

		// mark it down
		SteamUserStats.SetAchievement(achievement.m_eAchievementID.ToString());

		// Store stats end of frame
		m_bStoreStats = true;
	}

	//-----------------------------------------------------------------------------
	// Purpose: We have stats data from Steam. It is authoritative, so update
	//			our data with those results now.
	//-----------------------------------------------------------------------------
	private void OnUserStatsReceived(UserStatsReceived_t pCallback)
	{
		if (!SteamManager.Initialized)
			return;

		// we may get callbacks for other games' stats arriving, ignore them
		if ((ulong)m_GameID == pCallback.m_nGameID)
		{
			if (EResult.k_EResultOK == pCallback.m_eResult)
			{
				Debug.Log("Received stats and achievements from Steam\n");

				m_bStatsValid = true;

				// load achievements
				foreach (Achievement_t ach in m_Achievements)
				{
					bool ret = SteamUserStats.GetAchievement(ach.m_eAchievementID.ToString(), out ach.m_bAchieved);
					if (ret)
					{
						ach.m_strName = SteamUserStats.GetAchievementDisplayAttribute(ach.m_eAchievementID.ToString(), "name");
						ach.m_strDescription = SteamUserStats.GetAchievementDisplayAttribute(ach.m_eAchievementID.ToString(), "desc");
					}
					else
					{
						Debug.LogWarning("SteamUserStats.GetAchievement failed for Achievement " + ach.m_eAchievementID + "\nIs it registered in the Steam Partner site?");
					}
				}

				// load stats
				SteamUserStats.GetStat("NumGames", out m_nTotalGamesPlayed);
				SteamUserStats.GetStat("NumSupers", out m_nTotalNumSupers);
			}
			else
			{
				Debug.Log("RequestStats - failed, " + pCallback.m_eResult);
			}
		}
	}

	//-----------------------------------------------------------------------------
	// Purpose: Our stats data was stored!
	//-----------------------------------------------------------------------------
	private void OnUserStatsStored(UserStatsStored_t pCallback)
	{
		// we may get callbacks for other games' stats arriving, ignore them
		if ((ulong)m_GameID == pCallback.m_nGameID)
		{
			if (EResult.k_EResultOK == pCallback.m_eResult)
			{
				Debug.Log("StoreStats - success");
			}
			else if (EResult.k_EResultInvalidParam == pCallback.m_eResult)
			{
				// One or more stats we set broke a constraint. They've been reverted,
				// and we should re-iterate the values now to keep in sync.
				Debug.Log("StoreStats - some failed to validate");
				// Fake up a callback here so that we re-load the values.
				UserStatsReceived_t callback = new UserStatsReceived_t();
				callback.m_eResult = EResult.k_EResultOK;
				callback.m_nGameID = (ulong)m_GameID;
				OnUserStatsReceived(callback);
			}
			else
			{
				Debug.Log("StoreStats - failed, " + pCallback.m_eResult);
			}
		}
	}

	//-----------------------------------------------------------------------------
	// Purpose: An achievement was stored
	//-----------------------------------------------------------------------------
	private void OnAchievementStored(UserAchievementStored_t pCallback)
	{
		// We may get callbacks for other games' stats arriving, ignore them
		if ((ulong)m_GameID == pCallback.m_nGameID)
		{
			if (0 == pCallback.m_nMaxProgress)
			{
				Debug.Log("Achievement '" + pCallback.m_rgchAchievementName + "' unlocked!");
			}
			else
			{
				Debug.Log("Achievement '" + pCallback.m_rgchAchievementName + "' progress callback, (" + pCallback.m_nCurProgress + "," + pCallback.m_nMaxProgress + ")");
			}
		}
	}

	private class Achievement_t
	{
		public Achievement m_eAchievementID;
		public string m_strName;
		public string m_strDescription;
		public bool m_bAchieved;

		/// <summary>
		/// Creates an Achievement. You must also mirror the data provided here in https://partner.steamgames.com/apps/achievements/yourappid
		/// </summary>
		/// <param name="achievement">The "API Name Progress Stat" used to uniquely identify the achievement.</param>
		/// <param name="name">The "Display Name" that will be shown to players in game and on the Steam Community.</param>
		/// <param name="desc">The "Description" that will be shown to players in game and on the Steam Community.</param>
		public Achievement_t(Achievement achievementID, string name, string desc)
		{
			m_eAchievementID = achievementID;
			m_strName = name;
			m_strDescription = desc;
			m_bAchieved = false;
		}
	}
}
