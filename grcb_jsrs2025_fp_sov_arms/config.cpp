class cfgpatches
{
	class grcb_jsrs2025_FP_sov_arms
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"cba_jr","A3_Data_F","A3_Data_F_Exp","A3_Weapons_F","A3_Weapons_F_Exp","rhs_c_weapons","rhsgref_c_weapons","rhsusf_main","FP_sov_arms","jsrs2025_config_c"};
		version = "1";
		author = "lordjarhead/georgravioli";
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class cfgweapons
{
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class Single;
	};
	class FP_SVT40: srifle_EBR_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_G41_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class hgun_ACPC2_F;
	class FP_Nagant_M1895: hgun_ACPC2_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_revolver_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
	};
	class DMR_02_base_F;
	class srifle_DMR_02_F: DMR_02_base_F
	{
		class Single;
	};
	class FP_Mosin_base: srifle_DMR_02_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m38_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class FullAuto;
	};
	class FP_weap_savz26: SMG_01_F
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
		};
	};
	class DMR_01_base_F;
	class srifle_DMR_01_F: DMR_01_base_F
	{
		class Single;
		class single_close_optics1;
		class single_medium_optics1;
		class single_far_optics1;
	};
	class FP_SKS: srifle_DMR_01_F
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class FP_vz52: srifle_DMR_01_F
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sks_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class Rifle_Long_Base_F;
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class FullAuto;
	};
	class FP_RPD: LMG_Zafir_F
	{
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_rpd_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class manual;
	};
	class FP_DP27: LMG_Mk200_F
	{
		class FullAuto: manual
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_dp27_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class hgun_PDW2000_F;
	class rhs_weap_pp2000: hgun_PDW2000_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class FP_PPS_43: rhs_weap_pp2000
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class SMG_02_base_F;
	class SMG_02_F: SMG_02_base_F
	{
		class Single;
		class FullAuto;
	};
	class FP_PPSh_41: SMG_02_F
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ppsh_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class rhs_weap_ak74m;
	class rhs_weap_akm: rhs_weap_ak74m
	{
		class FullAuto;
	};
	class FP_AK47: rhs_weap_akm
	{
		class FullAuto: FullAuto
		{
			reloadTime = 0.1;
		};
	};
	class FP_AK47_BUB: rhs_weap_akm
	{
		class FullAuto: FullAuto
		{
			reloadTime = 0.1;
		};
	};
	class rhs_weap_akms: rhs_weap_akm
	{
		class FullAuto: FullAuto{};
	};
	class FP_AKS47: rhs_weap_akms
	{
		class FullAuto: FullAuto
		{
			reloadTime = 0.1;
		};
	};
};
