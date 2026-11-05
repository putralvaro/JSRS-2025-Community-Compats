class CfgPatches
{
	class grcb_jsrs2025_niarms_scar
	{
		name = "JSRS Soundmod 2025 Beta - NIArms SCARs Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms SCARs Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_SCAR"};
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
	class hlc_SCARH_Base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_SCARL_Base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_SCARH_STD: hlc_SCARH_Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_WP_SCARH_CQC: hlc_wp_SCARH_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_WP_SCARH_DMR: hlc_wp_SCARH_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_wp_MK17IUR_556: hlc_SCARL_Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_wp_MK17IUR_300: hlc_wp_MK17IUR_556
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_wp_MK17IUR_762R: hlc_wp_MK17IUR_300
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_WP_SSR: hlc_wp_SCARH_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_weapon_whizz_rifle_d_soundset","jsrs_2025_weapon_stereo_bar_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_weapon_whizz_rifle_d_soundset","jsrs_2025_weapon_stereo_bar_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_weapon_whizz_rifle_d_soundset","jsrs_2025_weapon_stereo_bar_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_wp_SCARL_STD: hlc_SCARL_Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
	};
	class hlc_WP_SCARL_CQC: hlc_wp_SCARL_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
	};
	class hlc_WP_SCARL_DMR: hlc_wp_SCARL_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
	};
	class hlc_wp_SCAR_PDW: hlc_SCARL_Base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_56mm_silenced_tails_soundset"};
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC: hlc_wp_SCARL_STD
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC: hlc_wp_SCARL_STD_300AAC
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
};
