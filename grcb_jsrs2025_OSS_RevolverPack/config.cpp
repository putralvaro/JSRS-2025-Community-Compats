class CfgPatches
{
	class grcb_jsrs2025_OSS_RevolverPack
	{
		requiredAddons[] = {"RevolverPack","jsrs2025_config_c"};
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
	class ColtM1917R: hgun_Pistol_heavy_02_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_M1917_SoundSet","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
	};
};
