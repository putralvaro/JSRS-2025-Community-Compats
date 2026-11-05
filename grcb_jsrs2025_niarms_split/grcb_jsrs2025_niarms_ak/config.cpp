class CfgPatches
{
	class grcb_jsrs2025_niarms_ak
	{
		name = "JSRS Soundmod 2025 Beta - NIArms AKs Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms AKs Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_aks"};
		version = "1";
		skipWhenMissingDependencies = 1;
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class basesoundmodetype;
class cfgweapons
{
	class rifle_base_f;
	class hlc_ak_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_ak12: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_rpk12: hlc_rifle_ak12
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class single: single
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_ak47: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_lmg_tails_soundset","jsrs_2025_weapon_whizz_lmg_soundset","jsrs_2025_weapon_stereo_lmg556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_ak74u_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_saiga12k: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_auto_shotgun_shot_soundset","jsrs_2025_762mm_dmr_tails_soundset","jsrs_2025_weapon_whizz_rifle_d_soundset","jsrs_2025_weapon_stereo_bar_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak12_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ak74_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_rk62: hlc_ak_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_akm_shot_soundset","jsrs_2025_762mm_tails_soundset","","jsrs_2025_weapon_whizz_rifle_b_soundset","jsrs_2025_weapon_stereo_r762_soundset"};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r762_soundset","jsrs_2025_weapon_whizz_rifle_b_soundset"};
			};
		};
	};
};
