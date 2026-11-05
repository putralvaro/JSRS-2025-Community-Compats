class CfgPatches
{
	class grcb_jsrs2025_fwa
	{
		requiredaddons[] = {"sp_fwa_aa52","sp_fwa_ar10","sp_fwa_ar15","sp_fwa_ar18","sp_fwa_bm59","sp_fwa_enfield","sp_fwa_fal","sp_fwa_hipower","sp_fwa_law","sp_fwa_m14","sp_fwa_m60","sp_fwa_mag58","sp_fwa_mas","sp_fwa_mat","sp_fwa_mg4259","sp_fwa_sig510","sp_fwa_sterling","sp_fwa_bar","sp_fwa_bren","sp_fwa_carcano","sp_fwa_cgm45","sp_fwa_sten","sp_fwa_fm2429","sp_fwa_k98","sp_fwa_garand","sp_fwa_mp40","sp_fwa_stg44","sp_fwa_thompson","sp_fwa_weapon_base","sp_fwa_boltaction_base","sp_fwa_machinegun_core","jsrs2025_config_c"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"sp_fwa_ar10","sp_fwa_enfield_no4","sp_fwa_mag58","sp_fwa_smg_mat49","sp_fwa_smg_sterling"};
		magazines[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class CfgWeapons
{
	class Pistol_Base_F;
	class sp_fwa_pistol_base: Pistol_Base_F
	{
		class manual;
		class WeaponSlotsInfo;
	};
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		class Single;
	};
	class sp_fwa_rifle_base;
	class sp_fwa_smg_9mm_base: sp_fwa_rifle_base
	{
		class SemiAuto;
		class FullAuto;
		class Burst;
		class BurstMid;
		class WeaponSlotsInfo;
	};
	class sp_fwa_rifle_556_base: sp_fwa_rifle_base
	{
		class Single;
		class single_medium_optics1;
		class single_medium_optics2;
		class FullAuto;
		class fullauto_medium;
		class WeaponSlotsInfo;
	};
	class sp_fwa_rifle_762_base: sp_fwa_rifle_base
	{
		class Single;
		class FullAuto;
		class fullauto_medium;
		class single_close_optics1;
		class single_far_optics1;
		class single_medium_optics1;
	};
	class sp_fwa_rifle_boltaction_762_base: sp_fwa_rifle_762_base
	{
		class Single;
		class single_close_optics1;
		class single_far_optics1;
		class single_medium_optics1;
	};
	class sp_fwa_machinegun_base: sp_fwa_rifle_762_base
	{
		class StandardSound;
		class FullAuto;
		class close;
		class short;
		class medium;
		class ai_FullAuto_close;
		class ai_FullAuto_medium;
		class ai_FullAuto_far;
		class ai_FullAuto_short;
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_RPG32_f: Launcher_Base_F
	{
		class Eventhandlers;
		class Single;
	};
	class sp_fwa_aa52: sp_fwa_machinegun_base
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_762mm_tails_soundset"};
			};
		};
		class ai_FullAuto_close: ai_FullAuto_close
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_762mm_tails_soundset"};
			};
		};
		class ai_FullAuto_medium: ai_FullAuto_medium
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_762mm_tails_soundset"};
			};
		};
		class ai_FullAuto_far: ai_FullAuto_far
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_762mm_tails_soundset"};
			};
		};
		class ai_FullAuto_short: ai_FullAuto_short
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_762mm_tails_soundset"};
			};
		};
	};
	class sp_fwa_ar10: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_93mm_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_ar15_base: sp_fwa_rifle_556_base
	{
		discreteDistance[] = {250,400};
		discreteDistanceInitIndex = 0;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.794328,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.794328,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.794328,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.794328,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.794328,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.794328,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.794328,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.794328,1,15};
		class Single: Single
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m203: UGL_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_65mm_tails_soundset"};
			};
		};
	};
	class sp_fwa_ar15_646_a3;
	class sp_fwa_7a5_c7: sp_fwa_ar15_646_a3
	{
		discreteDistance[] = {250,400};
		discreteDistanceInitIndex = 0;
	};
	class sp_fwa_car15_base: sp_fwa_ar15_base
	{
		class Single: Single
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_M4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			reloadTime = 0.075;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_651_CAR15: sp_fwa_car15_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_653_CAR15: sp_fwa_car15_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_723_CAR15: sp_fwa_car15_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_ar18_base: sp_fwa_rifle_556_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m63a\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			reloadTime = 0.08;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_hk53_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			reloadTime = 0.08;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_hk53_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			reloadTime = 0.08;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_hk53_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.08;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_hk53_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			reloadTime = 0.08;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_hk53_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_bm59_base: sp_fwa_rifle_762_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_enfield_no4: sp_fwa_rifle_boltaction_762_base
	{
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_enfield_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
	};
	class sp_fwa_fal_base: sp_fwa_rifle_762_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_fn49_base: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_l9a1_hipower: sp_fwa_pistol_base
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_soundset","jsrs_2025_9mm_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"jsrs_2025_p07_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m1911: sp_fwa_pistol_base
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_acpc_shot_soundset","jsrs_2025_cal45_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"jsrs_2025_acpc_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m72a1_law: launch_RPG32_f
	{
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_weapon_scape_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_law_shot_soundset","jsrs_2025_launcher_tails_soundset"};
			};
		};
	};
	class sp_fwa_m1carbine_base: sp_fwa_rifle_556_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_556mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_smg_m3a1: sp_fwa_smg_9mm_base
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m3a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m3a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_m3a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m1919a4_browning: sp_fwa_machinegun_base
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_close: ai_FullAuto_close
		{
			reloadTime = 0.1;
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_medium: ai_FullAuto_medium
		{
			reloadTime = 0.1;
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_far: ai_FullAuto_far
		{
			reloadTime = 0.1;
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_short: ai_FullAuto_short
		{
			reloadTime = 0.1;
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_browning_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_m14_base: sp_fwa_rifle_762_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m60: sp_fwa_machinegun_base
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_m60_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_m60_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_m60_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_m60_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_mag58: sp_fwa_machinegun_base
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class ai_FullAuto_close: ai_FullAuto_close
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class ai_FullAuto_medium: ai_FullAuto_medium
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class ai_FullAuto_far: ai_FullAuto_far
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class ai_FullAuto_short: ai_FullAuto_short
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_mas_base: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_smg_mat49: sp_fwa_smg_9mm_base
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_mg4259: sp_fwa_machinegun_base
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_close: ai_FullAuto_close
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_medium: ai_FullAuto_medium
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_far: ai_FullAuto_far
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class ai_FullAuto_short: ai_FullAuto_short
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_mg3_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_ruger_mini14_base: sp_fwa_rifle_556_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"sp_fwa_ruger_mini14_Shot_SoundSet","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"sp_fwa_ruger_mini14_Shot_SoundSet","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics2: single_medium_optics2
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"sp_fwa_ruger_mini14_Shot_SoundSet","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"sp_fwa_ruger_mini14_Shot_SoundSet","vn_556x45mm_rifle_fullauto_tails_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"sp_fwa_ruger_mini14_Shot_SoundSet","vn_556x45mm_rifle_fullauto_tails_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_sig510_base: sp_fwa_rifle_762_base
	{
		changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"vn_m14_shot_silenced_soundset","vn_762x39mm_rifle_fullauto_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_galil_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"vn_m14_shot_silenced_soundset","vn_762x39mm_rifle_fullauto_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_smg_sterling: sp_fwa_smg_9mm_base
	{
		class SemiAuto: SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m38_carcano: sp_fwa_rifle_boltaction_762_base
	{
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class StandardSound
			{
				soundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
	};
	class sp_fwa_smg_carlg_m45: sp_fwa_smg_9mm_base
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m45_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_m1918a2_bar: sp_fwa_rifle_762_base
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class FullAutoSlow: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_762mm_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_bren_base: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_smg_sten_mk2: sp_fwa_smg_9mm_base
	{
		class SemiAuto: SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_fm2429_base: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_kar_98k: sp_fwa_rifle_boltaction_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_kar98k_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
	};
	class sp_fwa_garand_base: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_762mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_m1903: sp_fwa_rifle_boltaction_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_boltaction_tails_soundset","jsrs_2025_338_echo_soundset"};
			};
		};
	};
	class sp_fwa_smg_mp40: sp_fwa_smg_9mm_base
	{
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_mp40_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_mp40_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_mp40_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_9mm_echo_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sting9_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class sp_fwa_stg44: sp_fwa_rifle_762_base
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_stg44_shot_soundset","jsrs_2025_65mm_tails_soundset","jsrs_2025_65mm_echo_soundset"};
			};
		};
	};
	class sp_fwa_smg_thompson_m1a1: sp_fwa_smg_9mm_base
	{
		class SemiAuto: SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
		};
		class BurstMid: BurstMid
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_cal45_smg_tails_soundset","jsrs_2025_cal45_echo_soundset"};
			};
		};
	};
};
