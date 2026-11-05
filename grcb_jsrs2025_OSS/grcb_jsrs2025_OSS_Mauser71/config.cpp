class CfgPatches
{
	class grcb_jsrs2025_OSS_Mauser71
	{
		requiredAddons[] = {"OSS_Mauser71","jsrs2025_config_c"};
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
	class AHA_Chassepot: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Singleshot_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_FusilGras: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Singleshot_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_Berdan: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Singleshot_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_Dreyse: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Singleshot_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class Rifle_Base_F;
	class Mauser7184: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"OSS_4570_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
};
