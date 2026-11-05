class CfgPatches
{
	class grcb_jsrs2025_OSS_ModelA5
	{
		requiredAddons[] = {"OSS_ModelA5","jsrs2025_config_c"};
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
	class OSS_Mossberg_590: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Spas12_Semiauto: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS12_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Spas12_Pump: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS12_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_USAS12: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_ModelA5: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ModeA5_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_ModelA5_rib: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ModeA5_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_ModelA5_Short: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ModeA5_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_ModelA5_Short_Rib: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ModeA5_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_ModelA5_Rhodie_rib: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ModeA5_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Sjogren: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Sjogren_Short: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class srifle_LRR_F;
	class OSS_W1887: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Winnie_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_W1887_10: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Winnie_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12_tan: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12_camo: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12_Shorty: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12_Shorty_tan: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_AA12_Shorty_camo: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_BeckerRevolvingShotgun: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Becker_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_HK_CAWS: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Becker_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Becker_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Remington_870_Wingmaster_Fallout_Hunting_Shotgun: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Remington_870_Wingmaster_cutdown: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_IthacaModel39_RiotShotgun_Long: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_IthacaModel39_RiotShotgun_short: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_FalloutCombatShotgun: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_CaravanShotgun: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Becker_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_Remington_7600: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_7600_270_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_Remington_7600_35Whelen: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_7600_35w_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_KS23_Long: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_KS23_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OSS_KS23M: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_KS23_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class AHA_SPAS15_Semi: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_S_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_silenced_soundset"};
			};
		};
	};
	class AHA_SPAS16: arifle_AKS_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_S_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_silenced_soundset"};
			};
		};
	};
	class AHA_SPAS15_Pump: arifle_AKS_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SPAS15_S_SoundSet","jsrs_2025_tailsystem_12gauge_Shotgun_silenced_soundset"};
			};
		};
	};
};
