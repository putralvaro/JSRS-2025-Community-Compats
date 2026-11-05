class cfgpatches
{
	class grcb_jsrs2025_mmm_sov
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","MMM_SOV_RPG22","MMM_SOV_RPG18","MMM_SOV_RPD"};
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
	class InventoryOpticsItem_Base_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class MMM_weap_RPG18: Launcher_Base_F
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
	class MMM_weap_RPG22: Launcher_Base_F
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
	class rhs_weap_rpg7;
	class MMM_weap_RPG7V: rhs_weap_rpg7
	{
		class single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_rpg7_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		class Single;
		class FullAuto;
	};
	class rhs_weap_akm: rhs_weap_ak74m{};
	class MMM_weap_RPD_1: rhs_weap_akm
	{
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_rpd_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class MMM_weap_RPK_H1S1: rhs_weap_akm
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class MMM_weap_RPK74_H1S1: rhs_weap_ak74m
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg556_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
};
