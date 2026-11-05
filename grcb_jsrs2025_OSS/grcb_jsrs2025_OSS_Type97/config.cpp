class CfgPatches
{
	class grcb_jsrs2025_OSS_Type97
	{
		requiredAddons[] = {"OSS_Type97","jsrs2025_config_c"};
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
	class OSS_Type97_AT: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Type97_SoundSet","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
		};
	};
	class Launcher_Base_F;
	class launch_Type4AT: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
};
