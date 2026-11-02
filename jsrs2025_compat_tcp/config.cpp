////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.21
//https://mikero.bytex.digital/Downloads
//'now' is Tue Nov 03 02:02:19 2026 : 'file' last modified on Sun Jun 21 15:47:26 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class jsrs2025_compat_tcp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredaddons[] = {"jsrs2025_config_c","TCP_Weapons"};
		version = "1";
		skipWhenMissingDependencies = 1;
		author = "Goosey";
		ammo[] = {"TCP_M_102mm_HEAP","TCP_M_102mm_HEAT"};
	};
};
class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class basesoundmodetype;
class CfgWeapons
{
	class Rifle_Base_F;
	class TCP_arifle_MA5B: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_arifle_MA5K: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_arifle_MA37: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_arifle_MA40: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_arifle_M6J: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_Underbarrel_Base;
	class TCP_sgun_CQS38: TCP_Underbarrel_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class TCP_sgun_M45: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class Pistol_Base_F;
	class TCP_hgun_Pistol_M6G: Pistol_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class TCP_hgun_Pistol_M6G2: Pistol_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class TCP_hgun_Pistol_M6C2: TCP_hgun_Pistol_M6G2
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class TCP_SMG_M7: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
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
	class Rifle_Long_Base_F;
	class TCP_LMG_M731: Rifle_Long_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_soundset","jsrs_2025_tailsystem_65mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_lmg_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_soundset","jsrs_2025_tailsystem_65mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_lmg_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_M392: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_SRS99: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_VK78: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_arifle_HMG38: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
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
		class FullAuto: Mode_FullAuto
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
	class TCP_arifle_BR55: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
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
		class Burst: Mode_Burst
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
	class TCP_srifle_XBR55: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
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
		class Burst: Mode_Burst
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
	class TCP_srifle_BR55HB: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
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
		class Burst: Mode_Burst
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
	class TCP_srifle_M295: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_M392SPR: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_SA392: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_SAPSR: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_soundset","jsrs_2025_tailsystem_762mm_DMR_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m14_shot_silenced_soundset","jsrs_2025_tailsystem_762mm_DMR_silenced_soundset"};
			};
		};
	};
	class TCP_srifle_SRS99D_F: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class Launcher_Base_F;
	class TCP_launch_M41: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class TCP_launch_M319: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
			};
		};
	};
	class TCP_GrenadeLauncher_Base;
	class TCP_launch_M301: TCP_GrenadeLauncher_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ugl_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
			};
		};
	};
	class MGun;
	class TCP_LAAG_M41: MGun
	{
		class BaseSoundModeType;
		class manual: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m134_shot_soundset"};
			};
		};
	};
};
class CfgAmmo
{
	class MissileBase;
	class TCP_M_102mm_HEAP: MissileBase
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_20mm_soundset"};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		soundengine[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_engine.wss",1,1,750};
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_Rocket_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_MEDIUM_ROCKET_soundset","jsrs_2025_EXP_RAW_DEBRIS_MEDIUM_soundset"};
	};
	class TCP_M_102mm_HEAT: MissileBase
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_20mm_soundset"};
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		soundengine[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_engine.wss",1,1,750};
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_Rocket_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_MEDIUM_ROCKET_soundset","jsrs_2025_EXP_RAW_DEBRIS_MEDIUM_soundset"};
	};
};
class cfgMods
{
	author = "GreenGoose";
	timepacked = "1782056846";
};
