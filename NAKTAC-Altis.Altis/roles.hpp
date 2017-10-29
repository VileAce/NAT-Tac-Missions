Description,ext
class CfgRespawnInventory
{
 #include "roles.hpp"
};


init.sqf
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






//Sergeant Major of the Army
class Sergeant_Major_of_the_Army
{
   displayName = "Sergeant Major of the Army"; 

uniform = "VSM_Multicam_BDU_Camo";
backpack = "tf_rt1523g";
weapons[] = {"CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"","VSM_Multicam_Cap","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//First Sergeant
class First_Sergeant
{
   displayName = "First Sergeant"; 

uniform = "VSM_Multicam_BDU_Camo";
backpack = "tf_rt1523g";
weapons[] = {"CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"","VSM_Multicam_Cap","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//Executive Officer
class Executive_Officer
{
   displayName = "Executive Officer"; 

uniform = "VSM_Multicam_BDU_Camo";
backpack = "tf_rt1523g";
weapons[] = {"CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"","VSM_Multicam_Cap","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//Platoon RTO
class Platoon_RTO
{
   displayName = "Platoon RTO"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "tf_rt1523g_big";
weapons[] = {"SMA_MK18MOEBLK_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
items[] = {"ACE_epinephrine","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Platoon Sergeant
class Platoon_Sergeant
{
   displayName = "Platoon Sergeant"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_MK18BLK_GL_SM","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_EarPlugs","ACE_MapTools","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//Platoon Leader
class Platoon_Leader
{
   displayName = "Platoon Leader"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "tf_rt1523g";
weapons[] = {"SMA_MK18afgBLK_SM","CUP_hgun_Colt1911","ACE_VectorDay","Throw","Put"};
magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","HandGrenade","HandGrenade","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellPurple","SmokeShellPurple","SmokeShellOrange","SmokeShellOrange","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_MapTools","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

//Squad Combat Life Saver
class Squad_Combat_Life_Saver
{
   displayName = "Squad Combat Life Saver"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "VSM_Multicam_Backpack_Kitbag";
weapons[] = {"SMA_MK18afgBLK","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Combat Life Saver Section Command
class Combat_Life_Saver_Section_Command
{
   displayName = "Combat Life Saver Section Command"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "tf_rt1523g_big";
weapons[] = {"SMA_MK18afgBLK","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//Landing Signal Officer
class Landing_Signal_Officer
{
   displayName = "Landing Signal Officer"; 

uniform = "VSM_OGA_Crye_od_Camo";
backpack = "";
weapons[] = {"Binocular","Throw","Put"};
magazines[] = {"ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Yellow"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_EarPlugs","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_MapTools"};
linkedItems[] = {"CUP_V_B_LHDVest_White","CUP_H_Navy_CrewHelmet_White","VSM_Balaclava2_black_Goggles","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Ground Support
class Ground_Support
{
   displayName = "Ground Support"; 

uniform = "VSM_OGA_Crye_od_Camo";
backpack = "";
weapons[] = {"Binocular","Throw","Put"};
magazines[] = {};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools"};
linkedItems[] = {"V_DeckCrew_yellow_F","CUP_H_Navy_CrewHelmet_Yellow","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Wolfpack Pilot
class Wolfpack_Pilot
{
   displayName = "Wolfpack Pilot"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_M4CQBRMOE","CUP_hgun_Glock17_blk","ACE_Vector","Throw","Put"};
magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellYellow","SmokeShellRed"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"V_PlateCarrier1_blk","H_PilotHelmetHeli_B","VSM_balaclava2_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Aviation Section Commander
class Aviation_Section_Commander
{
   displayName = "Aviation Section Commander"; 

uniform = "VSM_Multicam_Crye_grey_shirt_Camo";
backpack = "tf_rt1523g";
weapons[] = {"CUP_hgun_Colt1911","CUP_Vector21Nite","Throw","Put"};
magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_microDAGR","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};


//Spec Ops Marksman
class Spec_Ops_Marksman
{
   displayName = "Spec Ops Marksman"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "";
weapons[] = {"srifle_EBR_F","CUP_hgun_Glock17","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Spec Ops JTAC
class Spec_Ops_JTAC
{
   displayName = "Spec Ops JTAC"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "tf_rt1523g";
weapons[] = {"SMA_HK416GLCQB_B","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"B_IR_Grenade","B_IR_Grenade","SmokeShellPurple","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellBlue","SmokeShellBlue","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","B_IR_Grenade"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_EarPlugs","ACE_epinephrine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Spec Ops Weapons Specialist
class Spec_Ops_Weapons_Specialist
{
   displayName = "Spec Ops Weapons Specialist"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "";
weapons[] = {"SMA_HK416GLCQB_B","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"B_IR_Grenade","B_IR_Grenade","SmokeShellPurple","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellBlue","SmokeShellBlue","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_EarPlugs","ACE_epinephrine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_wirecutter"};
linkedItems[] = {"VSM_LBT6094_operator_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Spec Ops Slackman
class Spec_Ops_Slackman
{
   displayName = "Spec Ops Slackman"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "VSM_AOR1_Backpack_Kitbag";
weapons[] = {"sma_minimi_mk3_762tsb","CUP_hgun_Glock17","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1","SmokeShellPurple","SmokeShellPurple","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Spec Ops Pointman
class Spec_Ops_Pointman
{
   displayName = "Spec Ops Pointman"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "";
weapons[] = {"SMA_HK416afgQCB","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_MapTools","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_EntrenchingTool"};
linkedItems[] = {"VSM_RAV_operator_AOR1","VSM_OPS_aor1","VSM_Shemagh_Facemask_tan","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};


//Spec Ops Asst Team Leader/Medic
class Spec_Ops_Asst_Team_Leader
{
   displayName = "Spec Ops Asst Team Leader/Medic"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "";
weapons[] = {"SMA_HK416GLCQB_B","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShellPurple","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellBlue","SmokeShellBlue","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500"};
linkedItems[] = {"VSM_RAV_MG_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};


//Spec Ops Team Leader
class Spec_Ops_Team_Leader
{
   displayName = "Spec Ops Team Leader"; 

uniform = "VSM_AOR1_Crye_Camo";
backpack = "tf_rt1523g";
weapons[] = {"SMA_HK416GLCQB_B","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShellPurple","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellBlue","SmokeShellBlue","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_EarPlugs","ACE_epinephrine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_AOR1","VSM_OPS_aor1","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};


//Spec Ops Commander
class Spec_Ops_Commander
{
   displayName = "Spec Ops Commander"; 

uniform = "VSM_AOR1_Crye_tan_shirt_Camo";
backpack = "tf_rt1523g";
weapons[] = {"SMA_MK18afgBLK","CUP_hgun_Colt1911","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShellPurple","SmokeShellPurple","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_AOR1","VSM_AOR1_Boonie","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};

//Rifleman
class Rifleman
{
   displayName = "Rifleman"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_MK18MOEBLK_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Asst. Machinegunner
class Asst_Machinegunner
{
   displayName = "Asst. Machinegunner"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "VSM_Multicam_Backpack_Kitbag";
weapons[] = {"SMA_MK18afgBLK_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};


//Machinegunner
class Machinegunner
{
   displayName = "Machinegunner"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "VSM_Multicam_Backpack_Kitbag";
weapons[] = {"CUP_lmg_M240","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};


//Radio Operator
class Radio_Operator
{
   displayName = "Radio Operator"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "tf_rt1523g_big";
weapons[] = {"SMA_MK18MOEBLK_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
items[] = {"ACE_epinephrine","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};


//Designated Marksman
class Designated_Marksman
{
   displayName = "Designated Marksman"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"CUP_srifle_M110","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};

//Grenadier
class Grenadier
{
   displayName = "Grenadier"; 

uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_MK18BLK_GL_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"UGL_FlareCIR_F","UGL_FlareCIR_F","UGL_FlareCIR_F","UGL_FlareCIR_F","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_microDAGR","ACE_MapTools","ACE_epinephrine","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};



//Automatic Rifleman
class Automatic_Rifleman
{
   displayName = "Automatic Rifleman"; 

        uniform = "VSM_Multicam_Crye_Camo";
backpack = "VSM_Multicam_Backpack_Kitbag";
weapons[] = {"CUP_lmg_m249_pip2","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_epinephrine","ACE_MapTools","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_RAV_MG_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc154","ItemGPS"};
};





//Fire Team Leader
class Fire_Team_Leader
{
   displayName = "Fire Team Leader"; 

       uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_MK18BLK_GL_SM","CUP_hgun_Glock17_blk","Throw","Put"};
magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellBlue","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_EarPlugs","ACE_MapTools","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};





//Squad Leader
class Squad_Leader
{
   displayName = "Squad Leader"; 

       uniform = "VSM_Multicam_Crye_Camo";
backpack = "";
weapons[] = {"SMA_MK18BLK_GL_SM","CUP_hgun_Glock17_blk","ACE_VectorDay","Throw","Put"};
magazines[] = {"SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_Tracer"};
items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_EarPlugs","ACE_MapTools","ACE_microDAGR","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item"};
linkedItems[] = {"VSM_LBT6094_operator_Multicam","VSM_Mich2000_2_Multicam","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
};