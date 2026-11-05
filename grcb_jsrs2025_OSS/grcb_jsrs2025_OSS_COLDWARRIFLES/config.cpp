class CfgPatches
{
	class grcb_jsrs2025_OSS_COLDWARRIFLES
	{
		requiredAddons[] = {"OSS_COLDWARRIFLES","jsrs2025_config_c"};
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
	class OSS_RH4: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_TKB059: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_type115arx_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_type115arx_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_EM2_Rifle: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_type115arx_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_type115arx_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_G11K2_Rifle: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class HyperBurst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_FN_FAL_280_proto: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_FN_FAL_5063_Kinda: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class AHA_Bushmaster_M17S: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_FN_FNC_Carbine: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_FNC_Carbine_Adverse: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_FN_FNC: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_FNC_Adverse: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_Armalite_AR18: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class AHA_TKB0146: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class HyperBurst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
};
