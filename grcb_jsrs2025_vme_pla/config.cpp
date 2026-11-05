class CfgPatches
{
	class grcb_jsrs2025_vme_pla
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"VME_PLA_Weapons_C","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Short_Base_F;
	class vme_pla_qcw05: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class Rifle_Base_F;
	class vme_pla_qcw85: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class vme_pla_qbz03: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class vme_pla_qbu88: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class vme_pla_qbz95_1_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class vme_pla_qjb95_1: vme_pla_qbz95_1_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class Rifle_Long_Base_F;
	class vme_pla_LR4: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class VME_PLA_QJY88: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
	class VME_M99_Base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_silenced_soundset","jsrs_2025_tailsystem_50BMG_rifle_silenced_soundset"};
			};
		};
	};
	class VME_QBS06_base;
	class VME_QBS06: VME_QBS06_base
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class VME_QLU11_base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gmg_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
			};
		};
	};
	class Pistol_Base_F;
	class vme_pla_qsz92_base: Pistol_Base_F
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
	class vme_pla_qsw06: vme_pla_qsz92_base{};
	class vme_pla_qsw06_sub: vme_pla_qsw06
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class Launcher_Base_F;
	class vme_pla_PF98: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class vme_pla_PF89A;
	class vme_pla_PF97: vme_pla_PF89A
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_law_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class vme_pla_FN6: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_strela_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class vme_pla_HJ12: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
};
