class cfgpatches
{
	class grcb_jsrs2025_csla_launchers
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","CSLA","US85"};
		version = "1";
		author = "lordjarhead";
		skipWhenMissingDependencies = 1;
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class basesoundmodetype;
class cfgweapons
{
	class CSLA_LauncherBase;
	class CSLA_Launcher_AT: CSLA_LauncherBase
	{
		class Single;
	};
	class CSLA_RPG75: CSLA_Launcher_AT
	{
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class CSLA_RPG7: CSLA_Launcher_AT
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_rpg7_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class CSLA_Launcher_AA;
	class CSLA_9K32: CSLA_Launcher_AA
	{
		class standardsound
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_strela_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
		};
	};
	class US85_LauncherBase;
	class US85_Launcher_AT: US85_LauncherBase
	{
		class Single;
	};
	class US85_LAW72: US85_Launcher_AT
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class US85_M136: US85_Launcher_AT
	{
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class US85_SMAW: US85_Launcher_AT
	{
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class US85_MAAWS: US85_Launcher_AT
	{
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class US85_M47: US85_Launcher_AT
	{
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_strela_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class US85_Launcher_AA;
	class US85_FIM92: US85_Launcher_AA
	{
		class standardsound
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_strela_shot_soundset","jsrs_2025_weapon_snap_soundset","jsrs_2025_launcher_tails_soundset"};
		};
	};
};
