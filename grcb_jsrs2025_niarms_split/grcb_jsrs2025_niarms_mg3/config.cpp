class CfgPatches
{
	class grcb_jsrs2025_niarms_mg3
	{
		name = "JSRS Soundmod 2025 Beta - NIArms MG3s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms MG3s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_MG3s"};
		version = "1";
		skipWhenMissingDependencies = 1;
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class basesoundmodetype;
class cfgweapons
{
	class rifle_base_f;
	class hlc_MG42_base: rifle_base_f
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
	};
	class hlc_lmg_MG3: hlc_MG42_base
	{
		class FullAuto: FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
	};
};
