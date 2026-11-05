class CfgPatches
{
	class grcb_jsrs2025_OSS_AmericanCarbinesnSMGs
	{
		requiredAddons[] = {"OSS_AmericanCarbinesnSMGs","jsrs2025_config_c","WW2_Fixes_SPE_Patch_Weapons"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class arifle_AKS_F;
	class OSS_M55_Reising: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class OSS_M50_Reising: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class OSS_Hyde_LightRifle: arifle_AKS_F
	{
		recoil = "recoil_ktbc";
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
};
