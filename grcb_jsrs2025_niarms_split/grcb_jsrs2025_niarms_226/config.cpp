class CfgPatches
{
	class grcb_jsrs2025_niarms_P226
	{
		name = "JSRS Soundmod 2025 Beta - NIArms P226s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms P226s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","niaweapons_226"};
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
	class pistol_base_f;
	class hlc_p226_base: pistol_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_soundset","jsrs_2025_9mm_tails_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_pistol_p226r_combat: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_soundset","jsrs_2025_9mm_tails_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_pistol_mk25tr: hlc_pistol_p226r_combat
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_soundset","jsrs_2025_9mm_tails_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_pistol_mk25rx: hlc_pistol_mk25tr
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_soundset","jsrs_2025_9mm_tails_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_p22640_base: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_p226357_base: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_p228_base: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_p22840_base: hlc_p228_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_p228357_base: hlc_p228_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_pistol_p239: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_pistol_p239_40: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
	class hlc_pistol_p239_357: hlc_p226_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_weapon_stereo_c45_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_c45_soundset"};
			};
		};
	};
};
