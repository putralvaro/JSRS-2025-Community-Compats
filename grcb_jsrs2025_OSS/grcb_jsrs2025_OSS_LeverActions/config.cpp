class CfgPatches
{
	class grcb_jsrs2025_OSS_LeverActions
	{
		requiredAddons[] = {"OSS_LeverActions","jsrs2025_config_c"};
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
	class OSS_Henry_Rifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Henry_SoundSet","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class OSS_Winchester1873_Rifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Winnie73_SoundSet","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class OSS_Winchester1873_Carbine: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Winnie73_SoundSet","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class OSS_Winchester1873_Shorty: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Winnie73_SoundSet","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class OSS_Winchester1894_Rifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Winnie94_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_Winchester1894_Rifle_altsights: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Winnie94_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
};
