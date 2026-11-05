class CfgPatches
{
	class grcb_jsrs2025_tb3_sip
	{
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","WW2_SPE_Assets_c_Weapons_Sounds_c","WW2_SPEX_Assets_c_Weapons_InfantryWeapons_c","WW2_SPEX_Assets_c_Weapons_Sounds_c","simc_lcd_waffens_cfg","jsrs2025_config_c","SiP_Patch_UN_Weapons_M20_Bazooka","SiP_Patch_UN_Weapons_Carbine","SiP_Patch_UN_Weapons_FM24_29","SiP_Patch_UN_Weapons_fn49","SiP_Patch_UN_Weapons_Grenades","SiP_Patch_UN_Weapons_l2a1_sterling","SiP_Patch_UN_Weapons_M1_Garand","SiP_Patch_UN_Weapons_M3a1_greasegun","SiP_Patch_UN_Weapons_M1903A4_Springfield","SiP_Patch_UN_Weapons_M1918_BAR","SiP_Patch_UN_Weapons_mas49","SiP_Patch_UN_Weapons_mat49","SiP_Patch_UN_Weapons_UN_Weapons_sten","SiP_Patch_UN_Weapons_Thompson"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
		ammo[] = {"SiP_Chinese_Frag_ammo"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class vn_Launcher_Base_F;
	class vn_m20a1b1_01: vn_Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SPE_bazooka_Shot_SoundSet","vn_launcher_rocket_tails_soundset"};
			};
		};
	};
	class vn_rifle;
	class vn_rifle762: vn_rifle
	{
		class Single;
	};
	class vn_m1carbine: vn_rifle762
	{
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class aicqb: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class aiclose: aicqb
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class aimedium: aicqb
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class aifar: aicqb
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class vn_m2carbine: vn_m1carbine
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1carbine_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
		};
	};
	class vn_lmg: vn_rifle
	{
		class FullAuto;
	};
	class vnx_fm2429: vn_lmg
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_brenmk2_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class sp_fwa_fn49_base;
	class sp_fwa_fn49: sp_fwa_fn49_base
	{
		class Single;
	};
	class SiP_fn49: sp_fwa_fn49
	{
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_G41_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class vn_smg: vn_rifle
	{
		class FullAuto;
	};
	class vn_l2a3: vn_smg
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class vn_m1_garand: vn_rifle762
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class aicqb: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class aiclose: aicqb
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class aimedium: aicqb
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
		class aifar: aicqb
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m1garand_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
		};
	};
	class vn_m3a1: vn_smg
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m3a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class vn_m1903: vn_rifle762
	{
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aicqb: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aiclose: aicqb
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aimedium: aicqb
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aifar: aicqb
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aiopticmode1: aicqb
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
		class aiopticmode2: aicqb
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_boltaction_small_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
		};
	};
	class vn_m1918: vn_lmg
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bar_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class sp_fwa_mas_base;
	class sp_fwa_mas_49: sp_fwa_mas_base
	{
		class Single;
	};
	class SiP_mas49: sp_fwa_mas_49
	{
		class Single: Single
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_G41_shot_soundset","jsrs_2025_tailsystem_762mm_dmr_soundset"};
			};
		};
	};
	class vn_mat49: vn_smg
	{
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class aicqb: FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class vn_sten: vn_smg
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_sten_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
		};
	};
	class vn_m1a1_tommy: vn_smg
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class vn_m1928a1_tommy: vn_m1a1_tommy
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
	class vn_m1928_tommy: vn_m1a1_tommy
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m1928a1_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
		};
	};
};
class cfgAmmo
{
	class EAW_Chinese_Grenade_Ammo;
	class SiP_Chinese_Frag_ammo: EAW_Chinese_Grenade_Ammo
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_GRENADE_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_MEDIUM_CONCUSSION_soundset","jsrs_2025_EXP_RAW_DEBRIS_MEDIUM_soundset"};
	};
};
