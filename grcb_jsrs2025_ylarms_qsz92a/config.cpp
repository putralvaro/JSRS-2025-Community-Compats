class CfgPatches
{
	class grcb_jsrs2025_ylarms_qsz92a
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"YL_92pack_mod","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Pistol_Base_F;
	class yl_92a_issued_base: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class yl_92a_RW_PA_bctriwpn: yl_92a_issued_base
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class yl_92a_RW_PA: yl_92a_issued_base
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
};
