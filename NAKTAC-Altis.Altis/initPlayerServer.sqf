if (!isnil("gm1")) then {
	if (isnull(getassignedcuratorlogic gm1)) then {
		unassignCurator Zeus1;
		sleep 2;
		gm1 assignCurator Zeus1;
	};
};
if (!isnil("gm2")) then {
	if (isnull(getassignedcuratorlogic gm2)) then {
		unassignCurator Zeus2;
		sleep 2;
		gm2 assignCurator Zeus2;
	};
};