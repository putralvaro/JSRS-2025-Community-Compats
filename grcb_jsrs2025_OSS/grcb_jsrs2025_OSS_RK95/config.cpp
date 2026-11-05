class CfgPatches
{
	class grcb_jsrs2025_OSS_RK95
	{
		requiredAddons[] = {"OSS_RK95","jsrs2025_config_c"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class arifle_AKS_F;
	class OSS_RK95: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
};
