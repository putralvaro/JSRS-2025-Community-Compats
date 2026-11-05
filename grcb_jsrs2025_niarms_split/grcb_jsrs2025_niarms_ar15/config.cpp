class CfgPatches
{
	class grcb_jsrs2025_niarms_ar15
	{
		name = "JSRS Soundmod 2025 Beta - NIArms AR15s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms AR15s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_M16A2","hlcweapons_ar15"};
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
	class hlc_ar15_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_ru556: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_m4: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_colt727: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_M16Base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_m16a2;
	class hlc_wp_M16A1: hlc_M16Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Burst: mode_fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_XM177E2: hlc_M16Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_XM177E1: hlc_wp_XM177E2
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_mod653: hlc_wp_XM177E2
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_mod723: hlc_wp_mod653
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_mod723_delta: hlc_wp_mod723
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_mod727: hlc_M16Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_mod733: hlc_wp_mod653
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_M4: hlc_M16Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_C8: hlc_wp_mod723
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_C7: hlc_wp_m16a2
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_bushmaster300: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_vendimus: hlc_rifle_bushmaster300
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_honeybase: hlc_rifle_bushmaster300
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_bcmjack: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_samr: hlc_ar15_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
};
