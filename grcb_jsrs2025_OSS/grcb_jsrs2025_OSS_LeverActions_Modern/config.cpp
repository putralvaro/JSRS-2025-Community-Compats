class CfgPatches
{
	class grcb_jsrs2025_OSS_LeverActions_Modern
	{
		requiredAddons[] = {"OSS_LeverActions_Modern","jsrs2025_config_c"};
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
	class OSS_Marlin_336_Darktracker_Black: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_Sup_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class OSS_Marlin_336_Darktracker_woodland: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_Sup_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class OSS_Marlin_336_Darktracker_Tan: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MarlinDark_Sup_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
};
