////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.21
//https://mikero.bytex.digital/Downloads
//'now' is Tue Nov 03 02:02:27 2026 : 'file' last modified on Tue Jul 21 00:45:00 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgpatches
{
	class jsrs2025_compat_tke
	{
		units[] = {};
		weapons[] = {};
		addonRootClass = "a3_sounds_f";
		requiredVersion = 1.94;
		requiredaddons[] = {"TKE_Weapons","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
		version = "1";
		author = "Goosey";
	};
};
class cfgsoundsets
{
	class jsrs_2025_heavy_weapon_shot_soundset;
	class jsrs_2025_xr50_shot_soundset: jsrs_2025_heavy_weapon_shot_soundset
	{
		soundshaders[] = {"jsrs_2025_weapon_shot_interior_shotgun_soundshader","jsrs_2025_weapon_punch_extra_soundshader","jsrs_2025_gm6_closure_soundshader","jsrs_2025_gm6_bolt_soundshader","jsrs_2025_m320r_close_shot_soundshader","jsrs_2025_m320r_closedistance_shot_soundshader","jsrs_2025_m320r_mediumdistance_shot_soundshader","jsrs_2025_m320r_fardistance_shot_soundshader","jsrs_2025_m320r_interior_shot_soundshader","jsrs_2025_m320r_interiordistance_shot_soundshader","jsrs_2025_weapon_reverb_sniper_urban_distant_soundshader","jsrs_2025_weapon_reverb_sniper_forest_distant_soundshader"};
		volumefactor = 1.5;
		frequencyrandomizer = 0.5;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol{};
	class TKE_MDPistol: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
	};
	class TKE_UCNPistol: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
	};
	class Rifle;
	class Rifle_Base_F: Rifle{};
	class TKE_MDLMG: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_KMCSMG: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\smg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\smg_firemode.wss",1,1,10};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class TKE_UCNMMG: Rifle_Long_Base_F
	{
		JSRS_adsSound = "lmg";
		JSRS_magazineEmptySound = "lmg";
		JSRS_openBoltSound = "lmg";
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_ARX12: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_ARX12GL: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNRifle4: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class GM6_base_F;
	class TKE_MDSniper: GM6_base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
		};
	};
	class TKE_UCNBPRifle_Base: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNBPRifle: TKE_UCNBPRifle_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNRifle3: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNRifle: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_emr_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class TKE_UCNLMG: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNDMR: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_UCNRifle2: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_bren_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_type115arx_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_MDStdRifle: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\smg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\smg_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_soundset","jsrs_2025_tailsystem_acp_SMG_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_sdar_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class TKE_BPRA5: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_BPRA5GL: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_MDRifle: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_MDRifleV2: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class TKE_MDDMR: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class TKE_UCNSniper: GM6_base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_xr50_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
		};
	};
	class autocannon_35mm;
	class CannonCore;
	class TKE_TwinAutocannon_30mm_AA: autocannon_35mm
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_zsu_shot_soundset"};
			};
		};
	};
};
class cfgMods
{
	author = "GreenGoose";
	timepacked = "1784594700";
};
