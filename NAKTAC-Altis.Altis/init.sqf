if (hasinterface) then {
	waitUntil {!isnull player};
	player setCustomAimCoef 0.10;						//lowers sway
	player setUnitRecoilCoefficient 0.30;				// lowers recoil
};

enableSaving [false, false];

// ------- View distance settings
CHVD_allowNoGrass = true;
CHVD_maxView = 7500;
CHVD_maxObj = 7500;
