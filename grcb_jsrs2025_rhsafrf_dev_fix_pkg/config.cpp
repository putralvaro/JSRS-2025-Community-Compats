class cfgpatches
{
	class grcb_jsrs2025_rhsafrf_dev_fix_pkg
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","jsrs2025_compat_rhs_afrf","rhs_c_weapons","rhs_c_heavyweapons","rhs_c_airweapons","rhs_sounds","rhs_c_weaponsounds","rhs_weapon_burst_rifles_SoundFix"};
		version = "1";
		author = "lordjarhead/Apricot_ale/georgravioli";
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
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
};
