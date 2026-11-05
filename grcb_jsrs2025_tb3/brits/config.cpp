class CfgPatches
{
	class grcb_jsrs2025_tb3_brits
	{
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","WW2_SPE_Assets_c_Weapons_Sounds_c","WW2_SPEX_Assets_c_Weapons_InfantryWeapons_c","WW2_SPEX_Assets_c_Weapons_Sounds_c","simc_lcd_waffens_cfg","jsrs2025_config_c","WW2_Fixes_SPE_Weapons_UK_Patch"};
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
	class SPE_SRIFLE;
	class SPE_LMG;
	class SPE_PISTOL;
	class SPEX_No4_Mk1_Enfield: SPE_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class SPEX_No4_Mk1_Enfield_Scoped: SPE_SRIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class SPEX_No1_Mk3_Enfield: SPE_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class SPEX_Owen_Gun: SPE_SMG
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
	class WW2_Fixes_SPE_Webley_mk6: SPE_PISTOL
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
	class SPE_M1911;
	class WW2_Fixes_SPE_Browning_Hipower: SPE_M1911
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
};
