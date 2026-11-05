class CfgPatches
{
	class grcb_jsrs2025_OSS_SmithCarbine
	{
		requiredAddons[] = {"OSS_SmithCarbine","jsrs2025_config_c"};
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
	class OSS_SmithCarbine: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Smith_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
};
