class CfgPatches
{
	class grcb_jsrs2025_OSS_MP18
	{
		requiredAddons[] = {"OSS_KalashnikovSMG","jsrs2025_config_c"};
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
	class OSS_MP18: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_MP18_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_MP18_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
};
