class cfgpatches
{
	class grcb_jsrs2025_ufp
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"afou_weapons","jsrs2025_config_c"};
		version = "1";
		author = "lordjarhead/georgravioli";
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class afou_weapon_base_long_F;
	class afou_weapons_km_762_F: afou_weapon_base_long_F
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pkm_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_navid_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class MGun;
	class afou_vehicle_mgun_762x54;
	class afou_vehicle_km_762_wood_F: afou_vehicle_mgun_762x54
	{
		class manual: MGun
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_coax_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_navid_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class afou_weapon_base_F;
	class afou_weapons_malyuk_base_F: afou_weapon_base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class afou_weapons_malyuk_762_base_F: afou_weapons_malyuk_base_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
	};
	class afou_weapons_vulkan_m_F: afou_weapons_malyuk_762_base_F
	{
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.092;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
	};
	class afou_weapons_vulkan_545_base_F: afou_weapons_vulkan_m_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class afou_pistol_base_F;
	class afou_weapons_fort_14_F: afou_pistol_base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pm9_shot_soundset","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
};
