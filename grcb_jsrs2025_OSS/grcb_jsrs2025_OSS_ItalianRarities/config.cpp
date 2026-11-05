class CfgPatches
{
	class grcb_jsrs2025_OSS_ItalianRarities
	{
		requiredAddons[] = {"OSS_ItalianRarities","jsrs2025_config_c"};
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
	class OSS_39MSMG: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_43MSMG: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_FNAB43: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Beretta38: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_WZ39: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_BlysSMG: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_TZ45SMG: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Hellriegel: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Hellriegel_Drum: OSS_Hellriegel
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class AHA_VZ25: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_CZ52_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_CZ52_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Ribbyrollypollywhatever: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_Ribby_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_Ribby_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Beretta193018: arifle_AKS_F
	{
		class Semiauto: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
};
