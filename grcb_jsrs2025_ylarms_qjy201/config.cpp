class CfgPatches
{
	class grcb_jsrs2025_ylarms_qjy201
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"YL_QJY201","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class YL_QJY201: Rifle_Long_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zafir_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_lmg_silenced_soundset"};
			};
		};
	};
};
