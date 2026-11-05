class CfgPatches
{
	class grcb_jsrs2025_OSS_RemingtonKeene
	{
		requiredAddons[] = {"OSS_RemingtonKeene","jsrs2025_config_c"};
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
	class AHA_RemingtonKeeneRifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Keene_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
};
