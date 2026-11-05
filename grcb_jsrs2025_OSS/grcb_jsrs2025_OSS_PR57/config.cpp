class CfgPatches
{
	class grcb_jsrs2025_OSS_PR57
	{
		requiredAddons[] = {"PR57","jsrs2025_config_c"};
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
	class KeltecPR57: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_PR57_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_PR57S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
};
