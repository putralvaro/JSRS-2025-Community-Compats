class CfgPatches
{
	class grcb_jsrs2025_OSS_LeeHarvey
	{
		requiredAddons[] = {"OSS_LeeHarvey","jsrs2025_config_c"};
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
	class srifle_LRR_F;
	class AHA_SteyrCL2: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_CL2_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class AHA_SteyrM95: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_35M: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_35m_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_35M_NoSling: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_35m_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM91: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM91_W330: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM38_75: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM38_75_Optic: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM38: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM38_Volksturm: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_CarcanoM9138: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_M18708715: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_M91_Carcano_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class OSS_BerthierRifle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Berthier_SoundSet","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
};
