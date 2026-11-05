class CfgPatches
{
	class grcb_jsrs2025_OSS_RollingBlock
	{
		requiredAddons[] = {"OSS_RollingBlock","jsrs2025_config_c"};
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
	class OSS_Rem_Rolling_Block: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_5070_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_Rem_Rolling_Block_Creedmoor: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_4570_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_Rem_Rolling_Block_Creedmoor_Scoped: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_4570_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_SharpsRIfle: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Sharps_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_SharpsCarbine: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Sharps_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_Burnside: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_burnside_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_SpringfieldModel1873: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_4570_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_SpringfieldModel1873_Carbine: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_4570_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_JOS: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SpencerJ_SoundSet","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
	};
	class OSS_M1867Wern: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Wern_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OSS_MartiniHenry: srifle_LRR_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_MartiniHenry_SoundSet","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
};
