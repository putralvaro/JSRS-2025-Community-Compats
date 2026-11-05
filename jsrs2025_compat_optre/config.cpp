class CfgPatches
{
	class jsrs2025_compat_optre
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredaddons[] = {"jsrs2025_config_c","OPTRE_Weapons"};
		version = "1";
		skipWhenMissingDependencies = 1;
		author = "Goosey";
		ammo[] = {"C12_Remote_Ammo","C7_Remote_Ammo","M168_Remote_Ammo","UNSC_Mine_Ammo"};
	};
};
class StandardSound;
class SilencedSound;
class close;
class short;
class medium;
class far;
class manual;
class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class LowROF;
class player;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class basesoundmodetype;
class Launcher;
class CfgWeapons
{
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class arifle_Mk20_F;
	class muzzle_snds_H;
	class OPTRE_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class OPTRE_MA5B: OPTRE_Rifle_Base
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
	class OPTRE_MA5C: OPTRE_MA5B
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OPTRE_MA5BGL: OPTRE_MA5B{};
	class OPTRE_MA5CGL: OPTRE_MA5BGL
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_scar17_shot_soundset","jsrs_2025_tailsystem_762mm_rifle_soundset"};
			};
		};
	};
	class OPTRE_MA37: OPTRE_MA5C
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
	class OPTRE_MA37GL: OPTRE_MA5CGL
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
	class OPTRE_MA5K: OPTRE_MA5C
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Single
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
		class FullAuto: FullAuto
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
	class OPTRE_MA37K: arifle_Mk20_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Single
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
		class FullAuto: FullAuto
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
	class DMR_03_base_F;
	class OPTRE_Commando: DMR_03_base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_promet_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_promet_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
				
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_promet_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_promet_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class Single;
	};
	class OPTRE_M6B: hgun_Pistol_heavy_01_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_firemode.wss",1,1,10};
		class Single: Single
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
	class OPTRE_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M6G: OPTRE_Handgun_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_firemode.wss",1,1,10};
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
	class OPTRE_M6C: OPTRE_M6G
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound","CompSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
			class CompSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_4five_shot_silenced_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class optre_hgun_sas10_F: Pistol_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class optre_hgun_comet_F: Pistol_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\pistol_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zubr_shot_soundset","jsrs_2025_tailsystem_acp_pistol_soundset"};
			};
		};
	};
	class OPTRE_HMG38: OPTRE_Rifle_Base
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
	class srifle_EBR_F;
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
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
	};
	class OPTRE_M393_DMR;
	class OPTRE_M295_BMR: OPTRE_M393_DMR
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
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
	class SMG_01_F;
	class OPTRE_SubMachineGun_Base: SMG_01_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M7: OPTRE_SubMachineGun_Base
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
	class OPTRE_BR55HB: OPTRE_Rifle_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
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
	class OPTRE_BR55: OPTRE_BR55HB{};
	class OPTRE_BR45: OPTRE_BR55
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
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
	class OPTRE_BR37: OPTRE_BR55HB
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\dmr_firemode.wss",1,1,10};
		class single: Mode_SemiAuto
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
	class LMG_Mk200_F;
	class OPTRE_MachineGun_Base: LMG_Mk200_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M26_base_F: OPTRE_MachineGun_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\ar_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class OPTRE_M739_SAW_F: LMG_Mk200_F
	{
		JSRS_adsSound = "lmg";
		JSRS_magazineEmptySound = "lmg";
		JSRS_openBoltSound = "lmg";
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
		class manual: manual
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zafir_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_lmg_silenced_soundset"};
			};
		};
		class single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_zafir_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk200_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_lmg_silenced_soundset"};
			};
		};
	};
   class OPTRE_M73: OPTRE_MachineGun_Base
	{
		JSRS_adsSound = "lmg";
		JSRS_magazineEmptySound = "lmg";
		JSRS_openBoltSound = "lmg";
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

	
	// class OPTRE_M247: OPTRE_M73
	// {
	// 	nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
	// 	soundbullet[] = {"nullbullet",1};
	// 	drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
	// 	changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
	// 	class Single: Mode_SemiAuto
	// 	{
	// 		sounds[] = {"StandardSound"};
	// 		class StandardSound: StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_navid_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
	// 		};
	// 	};
	// 	class FullAuto: Mode_FullAuto
	// 	{
	// 		sounds[] = {"StandardSound"};
	// 		class StandardSound: StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_navid_shot_soundset","jsrs_2025_tailsystem_Magnum_rifle_soundset"};
	// 		};
	// 	};
	// };
	// class OPTRE_M247A1: OPTRE_M247
	// {};
	// class OPTRE_M250: OPTRE_M247A1
	// {
	// 	nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
	// 	soundbullet[] = {"nullbullet",1};
	// 	drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_dry.wss",1,1,10};
	// 	changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\lmg_firemode.wss",1,1,10};
	// 	modes[] = {"FullAuto","Single","close","short","medium","far"};
	// 	class Single: Single
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// 	class FullAuto: FullAuto
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// 	class close: close
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// 	class short: short
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// 	class medium: medium
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// 	class far: far
	// 	{
	// 		class StandardSound
	// 		{
	// 			soundsetshot[] = {"jsrs_2025_m2_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
	// 		};
	// 	};
	// };


	class OPTRE_Shotgun_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M45: OPTRE_Shotgun_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_tailsystem_12gauge_Shotgun_soundset"};
			};
		};
	};
	class OPTRE_M45E: OPTRE_M45{};
	class OPTRE_M45TAC: OPTRE_M45{};
	class OPTRE_M45A: OPTRE_M45E
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_firemode.wss",1,1,10};
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
	class OPTRE_M45ATAC: OPTRE_M45A{};
	class OPTRE_M90A: OPTRE_M45
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\shotgun_firemode.wss",1,1,10};
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
	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_M41_SSR: OPTRE_UnguidedLauncher_Base
	{
		soundfly[] = {"z\jsrs2025\addons\sounds_weapons\sounds\launchers\rocket_fly.wss",1,1,2500};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\launcher_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\launcher_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
			};
		};
	};
	class OPTRE_M319: OPTRE_Rifle_Base
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
	class OPTRE_M319n: OPTRE_M319{
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
	class OPTRE_M319m: OPTRE_Handgun_Base
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
	class OPTRE_M319s: OPTRE_M319m{};
	class OPTRE_M99A2S3: OPTRE_LongRifle_Base
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
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class OPTRE_SRS99D: OPTRE_LongRifle_Base
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
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_Magnum_rifle_silenced_soundset"};
			};
		};
	};
	class OPTRE_SRM77_S1: OPTRE_LongRifle_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_gm6_shot_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
		};
	};
	class OPTRE_SRM77_S2: OPTRE_SRM77_S1
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_tailsystem_50BMG_rifle_soundset"};
			};
		};
	};
	class OPTRE_M58S: OPTRE_Rifle_Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		drysound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_dry.wss",1,1,10};
		changefiremodesound[] = {"z\jsrs2025\addons\sounds_weapons\sounds\mechanics\sniper_firemode.wss",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"SilencedSound"};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_asp_kir_shot_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"SilencedSound"};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_asp_kir_shot_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"SilencedSound"};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_asp_kir_shot_soundset","jsrs_2025_tailsystem_acp_pistol_silenced_soundset"};
			};
		};
	};
	class MGun;
	class HMG_127;
	class OPTRE_M41_LAAG: HMG_127
	{
		class FullAuto: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m134_shot_soundset"};
			};
		};
	};
	class missiles_titan;
	class OPTRE_102R_Turret: missiles_titan
	{
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
		};
	};
	class gatling_20mm;
	class OPTRE_M230: gatling_20mm
	{
		class FullAuto: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
			};
		};
	};
	class OPTRE_M638: OPTRE_M230
	{
		class FullAuto: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_air_shot_soundset"};
			};
		};
	};
	class OPTRE_M370: OPTRE_M638
	{
		class FullAuto: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_air_shot_soundset"};
			};
		};
	};
	class OPTRE_CHAINGUN40: OPTRE_M638
	{
		class FullAuto: MGun
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_air_shot_soundset"};
			};
		};
	};
	class M134_minigun;
	class OPTRE_M9109: M134_minigun
	{
		class manual: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_zsu_shot_soundset"};
			};
		};
	};
	class OPTRE_GUA23A: M134_minigun
	{
		class LowROF: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_zsu_shot_soundset"};
			};
		};
	};
	class CannonCore;
	class autocannon_35mm;
	class M288_autocannon: autocannon_35mm
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
	class OPTRE_M71: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_30mm_shot_soundset"};
			};
		};
	};
	class OPTRE_GUA23B;
	class OPTRE_GUA23AW: OPTRE_GUA23B
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_30mm_shot_soundset"};
			};
		};
	};
	class OPTRE_MISRIAH_Cannon: OPTRE_GUA23A
	{
		class LowROF: LowROF
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
			};
		};
	};
	class cannon_120mm;
	class OPTRE_90mm_M512: cannon_120mm
	{
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
	};
	class OPTRE_105mm_M556: OPTRE_90mm_M512
	{
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
	};
	class OPTRE_75mm_M75: OPTRE_90mm_M512
	{
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
	};
	class LMG_coax;
	class OPTRE_M247T_Coax: LMG_coax
	{
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_coax_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OPTRE_M247H: OPTRE_M247T_Coax
	{
		class FullAuto: Mode_FullAuto
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_hmg_vehicle_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class OPTRE_M247T_Coax_dual: OPTRE_M247T_Coax
	{
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_coax_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
	class OPTRE_M247H_RCWS: OPTRE_M247T_Coax
	{
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_hmg_vehicle_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class LMG_RCWS;
	class LMG_M200: LMG_RCWS
	{
		class manual;
	};
	class OPTRE_M247H_Static: LMG_M200
	{
		class manual: manual
		{
			sounds[] = {"standardsound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_hmg_vehicle_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class OPTRE_M247H_SideGun: OPTRE_M247T_Coax
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_hmg_vehicle_shot_soundset","jsrs_2025_tailsystem_127mm_HMG_soundset"};
			};
		};
	};
	class OPTRE_M670_ATGM_Launcher: missiles_titan
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_tailsystem_Launcher_soundset"};
		};
	};
	class autocannon_Base_F;
	class OPTRE_M503_30mm_Autocannon: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player: player
			{
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
				};
			};
		};
		class AP: autocannon_Base_F
		{
			class player: player
			{
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_tailsystem_Autocannon_soundset"};
				};
			};
		};
	};
};
class CfgAmmo
{
	class SatchelCharge_Remote_Ammo;
	class ATMine_Range_Ammo;
	class C12_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_AT_MINE_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_LARGE_CONCUSSION_soundset","jsrs_2025_EXP_RAW_DEBRIS_LARGE_soundset"};
	};
	class C7_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_AT_MINE_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_LARGE_CONCUSSION_soundset","jsrs_2025_EXP_RAW_DEBRIS_LARGE_soundset"};
	};
	class M168_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_AT_MINE_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_LARGE_CONCUSSION_soundset","jsrs_2025_EXP_RAW_DEBRIS_LARGE_soundset"};
	};
	class UNSC_Mine_Ammo: ATMine_Range_Ammo
	{
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_AT_MINE_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_LARGE_NORMAL_soundset","jsrs_2025_EXP_RAW_DEBRIS_LARGE_soundset"};
	};
};
class CfgVehicles
{
	class Car_F;
	class OPTRE_M12_Base: Car_F
	{
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_lsv_01_engine_int_idle_soundset","jsrs_2025_lsv_01_engine_int_drive_soundset","jsrs_2025_base_cars_engine_int_rev_lsv_soundset","jsrs_2025_lsv_01_engine_int_release_soundset","jsrs_2025_tires_asphalt_slow_int_soundset","jsrs_2025_tires_asphalt_fast_int_soundset","jsrs_2025_tires_offroad_slow_int_soundset","jsrs_2025_tires_offroad_fast_int_soundset","jsrs_2025_tires_grass_int_soundset","jsrs_2025_wheeled_driving_noises_int_mrap_1_soundset","jsrs_2025_wheeled_offroad_driving_noises_int_mrap_1_soundset","jsrs_2025_base_cars_engine_int_turbo_soundset","jsrs_2025_base_cars_rattle_int_soundset","jsrs_2025_base_cars_stress_int_soundset","jsrs_2025_base_mraps_rain_int_soundset","truck_01_tires_water_fast_int_soundset","truck_01_tires_water_slow_int_soundset","truck_01_tires_turn_hard_int_soundset","truck_01_tires_turn_soft_int_soundset","truck_01_tires_brake_hard_int_soundset","truck_01_tires_brake_soft_int_soundset"};
			soundsetsext[] = {"jsrs_2025_lsv_01_engine_ext_idle_soundset","jsrs_2025_lsv_01_engine_ext_drive_soundset","jsrs_2025_base_cars_engine_rev_lsv_soundset","jsrs_2025_lsv_01_engine_evr_soundset","jsrs_2025_lsv_01_engine_ext_release_soundset","jsrs_2025_lsv_01_engine_ext_distance_soundset","jsrs_2025_tires_asphalt_slow_ext_soundset","jsrs_2025_tires_asphalt_fast_ext_soundset","jsrs_2025_tires_asphalt_fast_far_soundset","jsrs_2025_tires_offroad_slow_ext_soundset","jsrs_2025_tires_offroad_fast_ext_soundset","jsrs_2025_tires_grass_ext_soundset","jsrs_2025_base_cars_engine_ext_turbo_soundset","jsrs_2025_base_cars_rattle_ext_soundset","jsrs_2025_base_cars_stress_ext_soundset","truck_01_rain_ext_soundset","truck_01_tires_water_fast_ext_soundset","truck_01_tires_water_slow_ext_soundset","truck_01_tires_turn_hard_ext_soundset","truck_01_tires_turn_soft_ext_soundset","truck_01_tires_brake_hard_ext_soundset","truck_01_tires_brake_soft_ext_soundset"};
		};
	};
	class B_MBT_01_cannon_F;
	class OPTRE_M808B_base: B_MBT_01_cannon_F
	{
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_mbt_01_engine_int_idle_soundset","jsrs_2025_mbt_01_engine_int_drive_soundset","jsrs_2025_mbt_01_engine_int_release_soundset","jsrs_2025_tracks_interior_modern_heavy_soundset","jsrs_2025_base_tanks_rattle_int_soundset","jsrs_2025_base_tanks_stress_int_soundset","jsrs_2025_base_tanks_rain_int_soundset","mbt_01_tracks_brake_hard_int_soundset","mbt_01_tracks_brake_soft_int_soundset","mbt_01_tracks_turn_hard_int_soundset","mbt_01_tracks_turn_soft_int_soundset","mbt_01_drive_water_int_soundset","mbt_01_drive_dirt_int_soundset","tank_general_collision_int_soundset"};
			soundsetsext[] = {"jsrs_2025_mbt_01_engine_ext_idle_soundset","jsrs_2025_mbt_01_engine_ext_drive_soundset","jsrs_2025_mbt_01_engine_evr_soundset","jsrs_2025_mbt_01_engine_ext_release_soundset","jsrs_2025_mbt_01_engine_ext_distance_soundset","jsrs_2025_tracks_modern_heavy_soundset","jsrs_2025_tracks_modern_heavy_distance_soundset","jsrs_2025_base_tanks_rattle_ext_soundset","jsrs_2025_base_tanks_stress_ext_soundset","mbt_01_rain_ext_soundset","mbt_01_drive_water_ext_soundset","mbt_01_drive_dirt_ext_soundset","tracks_movement_dirt_ext_01_soundset","tracks_surface_soft_ext_soundset","tracks_surface_sand_ext_soundset","tank_general_collision_soundshader"};
		};
	};
	class OPTRE_M808S: B_MBT_01_cannon_F
	{
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_mbt_01_engine_int_idle_soundset","jsrs_2025_mbt_01_engine_int_drive_soundset","jsrs_2025_mbt_01_engine_int_release_soundset","jsrs_2025_tracks_interior_modern_heavy_soundset","jsrs_2025_base_tanks_rattle_int_soundset","jsrs_2025_base_tanks_stress_int_soundset","jsrs_2025_base_tanks_rain_int_soundset","mbt_01_tracks_brake_hard_int_soundset","mbt_01_tracks_brake_soft_int_soundset","mbt_01_tracks_turn_hard_int_soundset","mbt_01_tracks_turn_soft_int_soundset","mbt_01_drive_water_int_soundset","mbt_01_drive_dirt_int_soundset","tank_general_collision_int_soundset"};
			soundsetsext[] = {"jsrs_2025_mbt_01_engine_ext_idle_soundset","jsrs_2025_mbt_01_engine_ext_drive_soundset","jsrs_2025_mbt_01_engine_evr_soundset","jsrs_2025_mbt_01_engine_ext_release_soundset","jsrs_2025_mbt_01_engine_ext_distance_soundset","jsrs_2025_tracks_modern_heavy_soundset","jsrs_2025_tracks_modern_heavy_distance_soundset","jsrs_2025_base_tanks_rattle_ext_soundset","jsrs_2025_base_tanks_stress_ext_soundset","mbt_01_rain_ext_soundset","mbt_01_drive_water_ext_soundset","mbt_01_drive_dirt_ext_soundset","tracks_movement_dirt_ext_01_soundset","tracks_surface_soft_ext_soundset","tracks_surface_sand_ext_soundset","tank_general_collision_soundshader"};
		};
	};
	class OPTRE_M808B2: B_MBT_01_cannon_F
	{
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_mbt_01_engine_int_idle_soundset","jsrs_2025_mbt_01_engine_int_drive_soundset","jsrs_2025_mbt_01_engine_int_release_soundset","jsrs_2025_tracks_interior_modern_heavy_soundset","jsrs_2025_base_tanks_rattle_int_soundset","jsrs_2025_base_tanks_stress_int_soundset","jsrs_2025_base_tanks_rain_int_soundset","mbt_01_tracks_brake_hard_int_soundset","mbt_01_tracks_brake_soft_int_soundset","mbt_01_tracks_turn_hard_int_soundset","mbt_01_tracks_turn_soft_int_soundset","mbt_01_drive_water_int_soundset","mbt_01_drive_dirt_int_soundset","tank_general_collision_int_soundset"};
			soundsetsext[] = {"jsrs_2025_mbt_01_engine_ext_idle_soundset","jsrs_2025_mbt_01_engine_ext_drive_soundset","jsrs_2025_mbt_01_engine_evr_soundset","jsrs_2025_mbt_01_engine_ext_release_soundset","jsrs_2025_mbt_01_engine_ext_distance_soundset","jsrs_2025_tracks_modern_heavy_soundset","jsrs_2025_tracks_modern_heavy_distance_soundset","jsrs_2025_base_tanks_rattle_ext_soundset","jsrs_2025_base_tanks_stress_ext_soundset","mbt_01_rain_ext_soundset","mbt_01_drive_water_ext_soundset","mbt_01_drive_dirt_ext_soundset","tracks_movement_dirt_ext_01_soundset","tracks_surface_soft_ext_soundset","tracks_surface_sand_ext_soundset","tank_general_collision_soundshader"};
		};
	};
	class Tank_F;
	class OPTRE_M313_Base: Tank_F
	{
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_mbt_01_engine_int_idle_soundset","jsrs_2025_mbt_01_engine_int_drive_soundset","jsrs_2025_mbt_01_engine_int_release_soundset","jsrs_2025_tracks_interior_modern_heavy_soundset","jsrs_2025_base_tanks_rattle_int_soundset","jsrs_2025_base_tanks_stress_int_soundset","jsrs_2025_base_tanks_rain_int_soundset","mbt_01_tracks_brake_hard_int_soundset","mbt_01_tracks_brake_soft_int_soundset","mbt_01_tracks_turn_hard_int_soundset","mbt_01_tracks_turn_soft_int_soundset","mbt_01_drive_water_int_soundset","mbt_01_drive_dirt_int_soundset","tank_general_collision_int_soundset"};
			soundsetsext[] = {"jsrs_2025_mbt_01_engine_ext_idle_soundset","jsrs_2025_mbt_01_engine_ext_drive_soundset","jsrs_2025_mbt_01_engine_evr_soundset","jsrs_2025_mbt_01_engine_ext_release_soundset","jsrs_2025_mbt_01_engine_ext_distance_soundset","jsrs_2025_tracks_modern_heavy_soundset","jsrs_2025_tracks_modern_heavy_distance_soundset","jsrs_2025_base_tanks_rattle_ext_soundset","jsrs_2025_base_tanks_stress_ext_soundset","mbt_01_rain_ext_soundset","mbt_01_drive_water_ext_soundset","mbt_01_drive_dirt_ext_soundset","tracks_movement_dirt_ext_01_soundset","tracks_surface_soft_ext_soundset","tracks_surface_sand_ext_soundset","tank_general_collision_soundshader"};
		};
	};
	class Helicopter_Base_H;
	class Heli_Light_01_base_F;
	class OPTRE_falcon_base: Heli_Light_01_base_F
	{
		class Sounds
		{
			class engineext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_ext_close.ogg",1.4,1,400};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_close.ogg",1,1,700};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class engineextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_ext_distance.ogg",1,1,1000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_distance.ogg",1,1,3000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class rotornoiseext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_distance.ogg",0,1,0};
				frequency = "rotorspeed* 1";
				volume = "campos * (rotorthrust factor [0.7,0.9])";
				cone[] = {0.7,1.3,1,0};
			};
			class engineint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_int.ogg",1,1};
				frequency = "1";
				volume = "(1-campos)*((rotorspeed-0.75)*3)";
			};
			class rotorint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_int.ogg",0.5011872,1};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
			};
			soundsetsint[] = {"jsrs_2025_helicopter_wy55_hellcat_engineint_soundset","jsrs_2025_helicopter_wy55_hellcat_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_wy55_hellcat_gstress_soundset"};
			soundsetsext[] = {"jsrs_2025_helicopter_wy55_hellcat_engineext_soundset","jsrs_2025_helicopter_wy55_hellcat_rotorext_soundset","jsrs_2025_helicopter_wy55_hellcat_evr_soundset","jsrs_2025_helicopter_wy55_hellcat_rotordistance_soundset","jsrs_2025_helicopter_wy55_hellcat_enginedistance_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
		};
		class soundsext
		{
			class soundevents{};
			class Sounds
			{
				class engineext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_ext_close.ogg",1.4,1,400};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_close.ogg",1,1,700};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class engineextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_ext_distance.ogg",1,1,1000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_distance.ogg",1,1,3000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class rotornoiseext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_ext_distance.ogg",0,1,0};
					frequency = "rotorspeed* 1";
					volume = "campos * (rotorthrust factor [0.7,0.9])";
					cone[] = {0.7,1.3,1,0};
				};
				class engineint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\turbine_int.ogg",1,1};
					frequency = "1";
					volume = "(1-campos)*((rotorspeed-0.75)*3)";
				};
				class rotorint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\wy55_hellcat\rotor_int.ogg",0.5011872,1};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				};
				soundsetsint[] = {"jsrs_2025_helicopter_wy55_hellcat_engineint_soundset","jsrs_2025_helicopter_wy55_hellcat_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_wy55_hellcat_gstress_soundset"};
				soundsetsext[] = {"jsrs_2025_helicopter_wy55_hellcat_engineext_soundset","jsrs_2025_helicopter_wy55_hellcat_rotorext_soundset","jsrs_2025_helicopter_wy55_hellcat_evr_soundset","jsrs_2025_helicopter_wy55_hellcat_rotordistance_soundset","jsrs_2025_helicopter_wy55_hellcat_enginedistance_soundset","jsrs_2025_helicopter_wy55_hellcat_tailrotor_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
			};
		};
	};
	class OPTRE_Pelican_F: Helicopter_Base_H
	{
		class sounds
		{
			soundsets[] = {"plane_fighter_01_enginelowext_soundset","plane_fighter_01_enginehighext_soundset","plane_fighter_01_forsageext_soundset","plane_fighter_01_windnoiseext_soundset","plane_fighter_01_engineext_dist_front_soundset","plane_fighter_01_engineext_middle_soundset","plane_fighter_01_engineext_dist_rear_soundset","plane_fighter_01_enginelowint_soundset","plane_fighter_01_enginehighint_soundset","plane_fighter_01_forsageint_soundset","plane_fighter_01_windnoiseint_soundset","plane_fighter_01_velocityint_soundset"};
		};
	};
	class UAV_05_Base_F;
	class OPTRE_Wombat_Base: UAV_05_Base_F
	{
		soundengineonint[] = {"z\jsrs2025\addons\sounds_air\sounds\planes\basic_cas_01\startup_internal.ogg",1,1};
		soundengineonext[] = {"z\jsrs2025\addons\sounds_air\sounds\planes\basic_cas_01\startup_external.ogg",1,1,300};
		soundengineoffint[] = {"z\jsrs2025\addons\sounds_air\sounds\planes\basic_cas_01\shutdown_internal.ogg",1,1};
		soundengineoffext[] = {"z\jsrs2025\addons\sounds_air\sounds\planes\basic_cas_01\shutdown_external.ogg",1,1,300};
		soundsetsonicboom[] = {"jsrs_2025_basic_jets_sonicboom_soundset"};
		class sounds
		{
			soundsets[] = {"plane_fighter_01_enginelowext_soundset","plane_fighter_01_enginehighext_soundset","plane_fighter_01_forsageext_soundset","plane_fighter_01_windnoiseext_soundset","plane_fighter_01_engineext_dist_front_soundset","plane_fighter_01_engineext_middle_soundset","plane_fighter_01_engineext_dist_rear_soundset","plane_fighter_01_enginelowint_soundset","plane_fighter_01_enginehighint_soundset","plane_fighter_01_forsageint_soundset","plane_fighter_01_windnoiseint_soundset","plane_fighter_01_velocityint_soundset"};
		};
	};
};
class cfgMods
{
	author = "GreenGoose";
	timepacked = "1782055982";
};
