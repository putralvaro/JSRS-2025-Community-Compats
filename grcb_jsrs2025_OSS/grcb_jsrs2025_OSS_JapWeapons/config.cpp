class CfgPatches
{
	class grcb_jsrs2025_OSS_JapWeapons
	{
		requiredAddons[] = {"OSS_JapWeapons","jsrs2025_config_c"};
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
	class OSS_Nambu_Type1: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Type2A_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Nambu_Type2_Earlymodel: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Type2A_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_Nambu_Type2_Latemodel: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Type2_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class OSS_TypeHei: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_TypeHei_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_TypeOtsu: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_TypeOtsu_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_Type4: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Type4_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_TypeKo: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_TypeHo_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_Tokyo1927: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_1927_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_1927_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
};
