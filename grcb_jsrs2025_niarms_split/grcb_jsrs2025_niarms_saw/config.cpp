class CfgPatches
{
	class grcb_jsrs2025_niarms_saw
	{
		name = "JSRS Soundmod 2025 Beta - NIArms Minimi Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms Minimi Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_saw"};
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
	class hlc_saw_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_soundset","jsrs_2025_556mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_lmg_mk48: hlc_saw_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
};
