class CfgPatches
{
	class grcb_jsrs2025_tb3
	{
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","WW2_SPE_Assets_c_Weapons_Sounds_c","WW2_SPEX_Assets_c_Weapons_InfantryWeapons_c","WW2_SPEX_Assets_c_Weapons_Sounds_c","simc_lcd_waffens_cfg","jsrs2025_config_c","WW2_Fixes_SPE_Patch_Weapons","WW2_Fixes_SPE_Patch_Weapons_German"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class SPE_SMG;
	class SPE_RIFLE;
	class SPE_LMG;
	class SPE_PISTOL;
	class SPE_M1A1_Thompson: SPE_SMG
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class SPEX_M1928_Thompson: SPE_SMG
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class SPE_M3_GreaseGun: SPE_SMG
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m3a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class SPE_Sten_Mk2: SPE_SMG
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class SPEX_Sten_Mk5: SPE_SMG
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class SPE_M1_Carbine: SPE_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class SPE_M1_Garand: SPE_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class SPE_M1918A2_BAR: SPE_LMG
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class SPE_M1919A4: SPE_LMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class SPE_LMG_303_Mk2: SPE_LMG
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class SPEX_LMG_303_Mk1: SPE_LMG
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class WW2_Fixes_SPE_M1917_Revolver: SPE_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class SPE_MP40: SPE_SMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mp40_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
};
