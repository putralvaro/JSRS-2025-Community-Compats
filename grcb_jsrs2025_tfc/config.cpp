class CfgPatches
{
	class grcb_jsrs2025_tfc_core
	{
		requiredAddons[] = {"TFC_Core_Weapons","TFC_CORE_WEAPONS_ARMY_MACHINEGUNS_C6","TFC_CORE_WEAPONS_ARMY_RIFLES_C7","TFC_CORE_WEAPONS_ARMY_RIFLES_C8","TFC_SF_weapons_special_operations_rifles_mrr","TFC_CORE_WEAPONS_ARMY_SNIPERRIFLES_C14","TFC_CORE_WEAPONS_ARMY_SNIPERRIFLES_C15","TFC_CORE_WEAPONS_ARMY_SNIPERRIFLES_C21","TFC_CORE_Weapons_Other_CarlG","TFC_CORE_WEAPONS_OTHER_M72","TFC_CORE_Weapons_Other_Leopard_Cannon","jsrs2025_config_c"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class weapon_BIM9xLauncher;
	class weapon_AMRAAMLauncher;
	class weapon_AGM_65Launcher;
	class MissileLauncher;
	class autocannon_Base_F;
	class TFC_25mm_Bushmaster: CannonCore
	{
		class Primary: autocannon_Base_F
		{
			class LowROF: Mode_FullAuto
			{
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
				};
			};
		};
		class Secondary: autocannon_Base_F
		{
			class LowROF: Mode_FullAuto
			{
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
				};
			};
		};
	};
	class TFC_Weapon_AIM7_Launcher: weapon_BIM9xLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
		};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
	};
	class TFC_weapon_AIM9_Launcher: weapon_BIM9xLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
		};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
	};
	class TFC_weapon_AIM120_Launcher: weapon_AMRAAMLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
		};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		class LoalDistance: MissileLauncher
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
			};
			soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		};
	};
	class TFC_Weapon_AIM92_Launcher: weapon_BIM9xLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
		};
	};
	class TFC_Weapon_AGM65_Launcher: weapon_AGM_65Launcher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_missile_shot_soundset"};
		};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
	};
	class LMG_Zafir_F;
	class TFC_W_C6_Base: LMG_Zafir_F
	{
		class FullAutoSlow: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m240_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_lmg_silenced_soundset"};
			};
		};
	};
	class Rifle_Long_Base_F;
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		class FullAutoSlow;
	};
	class TFC_W_c9a2: LMG_03_base_F
	{
		class FullAutoSlow: FullAutoSlow
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_soundset","jsrs_2025_tailsystem_556mm_lmg_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_lmg_silenced_soundset"};
			};
		};
	};
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		class Single;
		class FullAuto;
	};
	class UGL_F;
	class tfc_w_c7_base: arifle_SPAR_01_blk_F
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class tfc_w_C7_M203: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
	};
	class TFC_W_c8_base: arifle_SPAR_01_blk_F
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class tfc_w_c8_M203: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
				};
			};
		};
	};
	class TFC_W_mrr_base: arifle_SPAR_01_blk_F
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TFC_W_mrr_carbine: TFC_W_mrr_base
	{
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TFC_W_C14_base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class tfc_sniper_base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_silenced_soundset","jsrs_2025_tailsystem_50BMG_rifle_silenced_soundset"};
			};
		};
	};
	class TFC_W_C21_base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class TFC_launch_CarlG_M3: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class TFC_launch_M72A6_Loaded: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class TFC_L55: cannon_120mm
	{
		class player: player
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
	};
};
