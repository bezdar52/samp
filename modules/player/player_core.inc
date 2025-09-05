#define MAX_PASSWORD 31

enum e_pInfo {
	pID,
	pName[MAX_PLAYER_NAME],
	pPassword[MAX_PASSWORD],
	pMoney,
	bool:ingame
};
new pInfo[MAX_PLAYERS][e_pInfo];

enum P_DIALOG_IDs {
	D_REG,
	D_LOG
};

public OnPlayerRequestClass(playerid, classid)
{
	if(!pInfo[playerid][ingame])
	return 1;
}

public OnPlayerConnect(playerid)
{
	ClearVars(playerid);
	return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
	ClearVars(playerid);
	return 1;
}

public OnPlayerSpawn(playerid)
{
	return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
	return 1;
}

public OnPlayerRequestSpawn(playerid)
{
	return 1;
}

public OnPlayerObjectMoved(playerid, objectid)
{
	return 1;
}

public OnPlayerPickUpPickup(playerid, pickupid)
{
	return 1;
}

public OnPlayerSelectedMenuRow(playerid, row)
{
	return 1;
}

public OnPlayerExitedMenu(playerid)
{
	return 1;
}

public OnPlayerInteriorChange(playerid, newinteriorid, oldinteriorid)
{
	return 1;
}

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	return 1;
}

public OnPlayerUpdate(playerid)
{
	return 1;
}

public OnPlayerStreamIn(playerid, forplayerid)
{
	return 1;
}

public OnPlayerStreamOut(playerid, forplayerid)
{
	return 1;
}

public OnPlayerClickPlayer(playerid, clickedplayerid, source)
{
	return 1;
}

stock ClearVars(playerid)
{
	pInfo[playerid][pID] = 0;
	pInfo[playerid][pName][0] = EOS;
	pInfo[playerid][pPassword][0] = EOS;
	pInfo[playerid][pMoney] = 0;
	pInfo[playerid][ingame] = false;
}