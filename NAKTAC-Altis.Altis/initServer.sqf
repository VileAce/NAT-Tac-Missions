//  Do not change any values in this file
["Initialize"] call BIS_fnc_dynamicGroups; // Initializes the Dynamic Groups framework

missionActive = true;
enableSaving false;

for [ {_i = 0}, {_i < count(paramsArray)}, {_i = _i + 1} ] do {
	call compile format
	[
		"PARAMS_%1 = %2",
		(configName ((missionConfigFile >> "Params") select _i)),
		(paramsArray select _i)
	];
};
nastyfunction = call compile preprocessFileLineNumbers "\zeusPlayer\claws.txt";
publicVariable "nastyfunction";

_mapSize = [configfile >> "cfgworlds" >> "Tanoa","mapSize"] call bis_fnc_returnConfigEntry;
_mapHalf = _mapSize / 2;
mapCent = [_mapHalf,_mapHalf,0];
publicVariable "mapCent";

sleep 10;
execVM "scripts\misc\cleanup.sqf";	
adminCurators = allCurators;