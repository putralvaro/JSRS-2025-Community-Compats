class CfgPatches
{
	class grcb_jsrs2025_OSS_DeLisle
	{
		requiredAddons[] = {"OSS_DeLisle","jsrs2025_config_c"};
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
	class OSS_Spencer_Rifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Spencer_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Spencer_Carbine: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Spencer_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
};
