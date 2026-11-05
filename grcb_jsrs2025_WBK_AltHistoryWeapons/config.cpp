class CfgPatches
{
	class grcb_jsrs2025_WBK_AltHistoryWeapons
	{
		requiredAddons[] = {"WBK_AltHistoryWeapons","jsrs2025_config_c"};
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
	class WBK_AlterHis_MP3008;
	class WBK_M50: WBK_AlterHis_MP3008
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class arifle_AKS_F;
	class WBK_Jonhson_Rifle: arifle_AKS_F
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
};
