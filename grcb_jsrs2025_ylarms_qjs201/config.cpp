class CfgPatches
{
	class grcb_jsrs2025_ylarms_qjs201
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"YL_QJS201","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class LMG_Mk200_F;
	class YL_QJS201: LMG_Mk200_F
	{
		class FullAuto: Mode_FullAuto
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
};
