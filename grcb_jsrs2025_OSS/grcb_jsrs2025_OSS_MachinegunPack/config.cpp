class CfgPatches
{
	class grcb_jsrs2025_OSS_MachinegunPack
	{
		requiredAddons[] = {"OSS_MachinegunPack","jsrs2025_config_c"};
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
	class OSS_WZ28: arifle_AKS_F
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
	class OSS_LewisGun: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_LewisGun_SoundSet","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OSS_MG08: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_MG08_SoundSet","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_ANM2: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_BrowningM2HB: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class AHA_BrowningM1917: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_GatlingGun: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_Gatling_SoundSet","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_Browning_M1919A4PA: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_Browning_M1919A4: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_Browning_M1919A6: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class AHA_6p62: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_6p62_SoundSet","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_6p62_SoundSet","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class AHA_6p62_NoBipod: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_6p62_SoundSet","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_6p62_SoundSet","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class AHA_ChauChat: arifle_AKS_F
	{
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OSS_ChauChat_SoundSet","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
};
