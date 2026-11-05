class CfgPatches
{
	class grcb_jsrs2025_AHA_FalloutWeapons
	{
		requiredAddons[] = {"AHA_FalloutWeapons","jsrs2025_config_c"};
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
	class UGL_F;
	class arifle_AKS_F;
	class AHA_ServiceRifle: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_ServiceCarbine: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_ServiceRifle_A2: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_MarksmanCarbine: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_MarksmanRifle: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_ServiceRifle_LSW: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_ServiceRifle_LSW_a3: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_AssaultCarbine: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_ServiceSnoipah_556: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_AssaultCarbine_M203: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class AHA_M203: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				class StandardSound
				{
					soundSetShot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
	};
	class AHA_R91_AssaultRifle: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullyAutomatic: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_R91_AssaultRifle_M203: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullyAutomatic: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class AHA_M203_R91: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				class StandardSound
				{
					soundSetShot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
	};
	class AHA_R91_AssaultRifle_SAW: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullyAutomatic: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_R91_AssaultRifle_Para: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullyAutomatic: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_R91_DMR: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class AHA_FNV_LMG: arifle_AKS_F
	{
		class FullyAutomatic: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_lim85_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
};
