class CfgPatches
{
	class grcb_jsrs2025_OSS_ColtLightning
	{
		requiredAddons[] = {"OSS_ColtLightning","jsrs2025_config_c"};
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
	class srifle_LRR_F;
	class OSS_Lightning_Rifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_h6_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
};
