class CfgPatches
{
	class grcb_jsrs2025_AHA_ModernPistols
	{
		requiredAddons[] = {"ModernPistols","jsrs2025_config_c"};
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
	class Pistol_Base_F;
	class AHA_Beretta_M9: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class AHA_Beretta_M9A1: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class AHA_Beretta_M92FS: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class AHA_Beretta_M9A3: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_p07_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class AHA_Beretta_M93R: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class Raffica: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class AHA_Beretta_M93R_Stocked: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class Raffica: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
};
