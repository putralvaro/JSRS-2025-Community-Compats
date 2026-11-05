class CfgPatches
{
	class grcb_jsrs2025_OSS_OddRifles
	{
		requiredAddons[] = {"OSS_OddRifles","jsrs2025_config_c"};
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
	class OSS_BredaPGCarc: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_1907SL: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_1907_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_1907Sup_SoundSet","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class OSS_BredaPG: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Breda_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Breda_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_FarquharRifle: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_svd_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_Mondragon: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Mondragon_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_ScottiModelX: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Mod39: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_ScottiNaval: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_LewisAssaultPhase_mk2: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_LewisAssault_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_LewisAssault_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_LewisAssaultPhase_mk3: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_LewisAssault_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_LewisAssault_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_SolothurnMG30: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class srifle_LRR_F;
	class OSS_WeirdLeverRifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Scotti_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_WeirdAutoRifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Scotti_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_MuenierA6Carbine: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Meunier_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_WZ38M: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_svd_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class OSS_Brescia: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_VZ52: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_VZ52_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_VZ52_S_SoundSet","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class OSS_Type63: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_T63_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_T63_S_SoundSet","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_T63_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_T63_S_SoundSet","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class OSS_Ultimax100: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_U100_SoundSet","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_RugerMini14_S_SoundSet","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_U100_SoundSet","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_RugerMini14_S_SoundSet","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
	class AHA_RSC1917: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_RSC1917_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_RSCSMG: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_RSC1917_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_RSC1917_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_HornyRifle: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_HORN_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_HORN_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_MauserMKb39: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_HORN_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_HORN_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_MauserM1916Selbstlader: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Selb_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_TurnerSMLE: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_G30M: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_G30M_Magfed: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_LMR: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_LMR_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_LMR_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Winnie_G30R: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_wAR: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Breda30_LMG: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_breda30_SoundSet","jsrs_2025_tailsystem_65mm_lmg_soundset"};
			};
		};
	};
	class OSS_m1918a2_bar: arifle_AKS_F
	{
		class Fullauto_slow: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_m1918a2_nobipod_bar: arifle_AKS_F
	{
		class Fullauto_slow: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_M1918A1_BAR: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_M1918A1_nobipod_BAR: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_JungleBAR: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_JungleBAR_Luck: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_Colt_Monitor: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_M1E5Garand: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1Garand: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1DGarand: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1DGarand_2dScope: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class UGL_F;
	class AHA_M1Garand_GL: arifle_AKS_F
	{
		class AHA_M1_M7GL: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"jsrs_2025_gp25_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1Garand_GL_M15: arifle_AKS_F
	{
		class AHA_M1_M7GL_m15: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"jsrs_2025_gp25_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1Garand_458WinMag: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AHA_M1_458_SoundSet","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_T20: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_Winnie_T20E1: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class AHA_M1DGarand_65x55Swede: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
};
