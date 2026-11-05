class cfgpatches
{
	class grcb_jsrs2025_rhsafrf_dev
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","jsrs2025_compat_rhs_afrf","rhs_c_weapons","rhs_c_heavyweapons","rhs_c_airweapons","rhs_sounds","rhs_c_weaponsounds"};
		version = "1";
		author = "lordjarhead/georgravioli";
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		class Single;
		class FullAuto;
	};
	class rhs_weap_rifle_545_burst_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class rhs_weap_aek_base: rhs_weap_rifle_545_burst_base
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class Burst: Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class rhs_weap_aek_762_base: rhs_weap_aek_base
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Burst: Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class rhs_weap_rpk_base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class Manual: Mode_FullAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class rhs_weap_sr3m_base: rhs_weap_ak74m_Base_F
	{
		class Single: Single
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_as_val_shot_soundset","jsrs_2025_9x39mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_as_val_shot_soundset","jsrs_2025_9x39mm_silenced_tails_soundset"};
			};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class rhs_weap_rpg26: Launcher_Base_F
	{
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_launcher_tails_soundset"};
		};
		class single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
};
