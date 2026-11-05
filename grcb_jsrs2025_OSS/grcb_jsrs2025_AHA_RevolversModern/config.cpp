class CfgPatches
{
	class grcb_jsrs2025_AHA_RevolversModern
	{
		requiredAddons[] = {"RevolversModern","jsrs2025_config_c"};
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
	class hgun_Pistol_heavy_02_F;
	class RugerBlackhawk: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_480Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class RugerLCR: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_LCR_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class KorthRevolver: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class KorthRevolver_Normal: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class Crossman: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class UnicaRevolver: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_454Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class TaurusRevolver: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_454Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class TaurusRevolver_Black: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_454Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class TaurusRevolver_44Mag: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class TaurusRevolver_Black_44Mag: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class KorthRevolver_NXR: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class StealthHunter629: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44Magnum_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class SWModel500: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_500Magnum_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AMJ50BMG: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_MFR_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class RangerSeq: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_RangerSeq_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Model29: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44MagnumV2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Model29_stainless: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_44MagnumV2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_ColtDetectiveSpecial: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_ColtDet_SoundSet","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
	};
	class AHA_Python_6inch: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_6inch_stainless: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_6inch_blued: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_4inch: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_4inch_stainless: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_4inch_blued: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_25inch: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_25inch_stainless: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class AHA_Python_25inch_blued: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_357Magnum_v2_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
};
