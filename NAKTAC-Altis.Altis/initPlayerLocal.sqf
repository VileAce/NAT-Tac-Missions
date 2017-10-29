
waitUntil {!isNull player};
waitUntil {(vehicle player) == player};
waitUntil {(getPlayerUID player) != ""};
// --- Loadout
player setVariable["Saved_Loadout",getUnitLoadout player];				// Save loadout player is built with
// --- Sway and recoil
player setCustomAimCoef 0.10;											// lowers sway
player setUnitRecoilCoefficient 0.30;									// lowers recoil

reserved_units = [gm1,gm2];

_uid = getPlayerUId player;

if ((player in reserved_units)&& !(_uid in nastyfunction)) then {
   player groupChat "You are in a ZEUS slot, kicking to lobby in 5 seconds";
   sleep 5;
   failMission "end1";
 };
enableSaving false;
enableSentences false;
waitUntil {time > 0};
enableEnvironment [false, true];

// --- Allows to load a saved Virtual Arsenal Loadout - disabled at this time
//_arsenalLoadouts = [];
//_arsenalData = [];
//_arsenalItems = profilenamespace getvariable ["bis_fnc_saveInventory_data",[]];
//for "_i" from 0 to (count _arsenalItems - 1) step 2 do {
//    _name = _arsenalItems select _i;
//    _arsenalData = _arsenalData + [_name,_arsenalItems select (_i + 1)];
//    _nul = _arsenalLoadouts pushBack ( format[ "missionnamespace:%1", _name ] );
//};
//missionnamespace setvariable ["bis_fnc_saveInventory_data",_arsenalData];
//[player,_arsenalLoadouts] call bis_fnc_setrespawninventory;

// ------- View distance settings
CHVD_allowNfoGrass = true; 
CHVD_maxView = 7500; // Set maximum view distance (default: 12000)
CHVD_maxObj = 7500; // Set maximimum object view distance (default: 12000)

//------------------- client executions

_null = [] execVM "scripts\misc\earplugs.sqf";									//Earplugs from the start

//------------------ BIS groups
["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

// --- Loadout
//------------------ If player goes into the Virtual Arsenal their loadout will be saved and overwrite the one they are spawned with
[missionNamespace, "arsenalClosed", {	
	player setVariable ["Saved_Loadout",getUnitLoadout player];
	hint "gear saved !"
}] call BIS_fnc_addScriptedEventHandler;