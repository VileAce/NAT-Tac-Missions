//["Terminate"] call BIS_fnc_EGSpectator; 
// --- Loadout
player setUnitLoadout (player getVariable ["Saved_Loadout",[]]);   	// loads loadout on respawn
player setCustomAimCoef 0.10;										// Adjust sway to lower than standard
player setUnitRecoilCoefficient 0.30;								// Adjust recoil to lower than normal


