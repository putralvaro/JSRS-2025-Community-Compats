class CfgPatches
{
	class grcb_jsrs2025_niarms_bren
	{
		name = "JSRS Soundmod 2025 Beta - NIArms Bren Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms Bren Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_Bren"};
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
	class hlc_Bren_base: rifle_base_f
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
		class NI_Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_c_soundset","jsrs_2025_weapon_stereo_r65_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_c_soundset","jsrs_2025_weapon_stereo_r65_soundset"};
			};
		};
	};
};
