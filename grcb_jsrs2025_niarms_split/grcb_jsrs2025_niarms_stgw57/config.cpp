class CfgPatches
{
	class grcb_jsrs2025_niarms_stgw57
	{
		name = "JSRS Soundmod 2025 Beta - NIArms SG510s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms SG510s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_stgw57"};
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
	class hlc_stgw_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class DMR_06_base_f;
	class srifle_DMR_06_F: DMR_06_base_f
	{
		class Single;
		class single_close_optics1;
		class single_far_optics1;
		class single_medium_optics1;
		class fullauto_medium;
		class FullAuto;
	};
	class sp_fwa_sig510_base: srifle_DMR_06_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
		};
	};
};
