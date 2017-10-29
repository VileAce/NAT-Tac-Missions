if (hasinterface) then {
	waitUntil {!isnull player};
	player setCustomAimCoef 0.10;						//lowers sway
	player setUnitRecoilCoefficient 0.30;				// lowers recoil
};

enableSaving [false, false];

// ------- View distance settings
CHVD_allowNoGrass = true;
CHVD_maxView = 7500;
CHVD_maxObj = 5000;

//_gear = [west, "Sergeant_Major_of_the_Army"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "First_Sergeant"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Executive_Officer"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Platoon_RTO"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Platoon_Sergeant"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Platoon_Leader"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Squad_Combat_Life_Saver"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Combat_Life_Saver_Section_Command"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Landing_Signal_Officer"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Ground_Support"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Wolfpack_Pilot"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Aviation_Section_Commander"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Marksman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_JTAC"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Weapons_Specialist"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Slackman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Pointman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Asst_Team_Leader"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Team_Leader"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Spec_Ops_Commander"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Rifleman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Asst_Machinegunner"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Machinegunner"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Radio_Operator"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Designated_Marksman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Grenadier"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Automatic_Rifleman"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Fire_Team_Leader"] call BIS_fnc_addRespawnInventory;
//_gear = [west, "Squad_Leader"] call BIS_fnc_addRespawnInventory;