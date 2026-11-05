class CfgPatches
{
	class grcb_jsrs2025_OSS_YaziKovKPPY
	{
		requiredAddons[] = {"OSS_YaziKovKPPY","jsrs2025_config_c"};
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
	class OSS_YazikovSMG: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_YaziSMG_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_PPD29SMG: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_PPD29_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_PPD29_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_AS44_Rifle: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_AS44_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_AS44_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
};
