class CfgPatches
{
	class grcb_jsrs2025_tb3_pto
	{
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","WW2_SPE_Assets_c_Weapons_Sounds_c","WW2_SPEX_Assets_c_Weapons_InfantryWeapons_c","WW2_SPEX_Assets_c_Weapons_Sounds_c","simc_lcd_waffens_cfg","jsrs2025_config_c","WW2_Fixes_SPE_PTO_Patch_Weapons_Japan","WW2_Fixes_SPE_PTO_Patch_Weapons_China"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class EAW_Type11_Base: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class EAW_ZB26_Base: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class EAW_Type99: EAW_ZB26_Base
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_G41_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class EAW_Type96: EAW_Type99
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_G41_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class SPE_SMG;
	class WW2_Fixes_SPE_type100: SPE_SMG
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mp40_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class EAW_MP28: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class hgun_ACPC2_F;
	class EAW_Type14: hgun_ACPC2_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class SPE_PISTOL;
	class WW2_Fixes_SPE_Type26_Revolver: SPE_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class SPE_M1911;
	class WW2_Fixes_SPE_Hamada_Type1: SPE_M1911
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class EAW_Hanyang88_Base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class EAW_Type24_Rifle_Base: EAW_Hanyang88_Base
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class EAW_FN30_Base: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class EAW_C96_Auto_Carbine: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class EAW_C96_Carbine: EAW_C96_Auto_Carbine
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class EAW_C96: EAW_Type14
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class EAW_C96_Auto: EAW_C96
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
};
