class CfgPatches
{
	class grcb_jsrs2025_OSS_ErmaEMP
	{
		requiredAddons[] = {"OSS_ErmaEMP","jsrs2025_config_c"};
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
	class OSS_ERMAEMP: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class OSS_ERMAEMP_S: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class OSS_MP34: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class OSS_AUSSTEN: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class OSS_Lanchester_Mk1Star: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
};
