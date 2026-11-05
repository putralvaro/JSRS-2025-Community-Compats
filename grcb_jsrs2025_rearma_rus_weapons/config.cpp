class cfgpatches
{
	class grcb_jsrs2025_rearma_rus_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"rus_wepaon_launchers","rus_weapon_machineguns","rus_weapon_rifles","jsrs2025_config_c"};
		version = "1";
		author = "lordjarhead/georgravioli";
		skipWhenMissingDependencies = 1;
		ammo[] = {"R_PG26_AT","R_RSHG2_HE"};
	};
};
class CfgAmmo
{
	class RocketBase;
	class R_PG26_AT: RocketBase
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_Rocket_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_MEDIUM_ROCKET_soundset","jsrs_2025_EXP_RAW_DEBRIS_MEDIUM_soundset"};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1.5,1,2000};
		soundengine[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_engine.wss",1,1,750};
	};
	class R_RSHG2_HE: RocketBase
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_Rocket_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_MEDIUM_ROCKET_soundset","jsrs_2025_EXP_RAW_DEBRIS_MEDIUM_soundset"};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1.5,1,2000};
		soundengine[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_engine.wss",1,1,750};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_RPG26_Loaded: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_rpg32_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class launch_RShG2_Loaded: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_rpg32_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class Rifle_Long_Base_F;
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class manual;
	};
	class PKP_F: MMG_01_base_F
	{
		class manual: manual
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pkm_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_navid_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class Rifle_Base_F;
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class AK35_base_F: arifle_AK12_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AK35_DMR_base_F: arifle_AK12_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class UGL_F;
	class AK35_GL_base_F: arifle_AK12_base_F
	{
		class EGLM: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"jsrs_2025_gp25_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
				};
			};
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AK35S_base_F: arifle_AK12_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class RPK35_base_F: arifle_AK12_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
	class RPL35_F: arifle_AK12_base_F
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
};
