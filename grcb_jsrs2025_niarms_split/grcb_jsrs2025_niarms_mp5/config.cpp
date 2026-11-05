class CfgPatches
{
	class grcb_jsrs2025_niarms_mp5
	{
		name = "JSRS Soundmod 2025 Beta - NIArms MP5s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms MP5s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_mp5"};
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
	class hlc_mp5_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_smg_mp5k_pdw: hlc_mp5_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_smg_mp5n: hlc_mp5_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_smg_9mmar: hlc_smg_mp5n
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_smg_mp510: hlc_smg_mp5n
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_9mm_smg_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_9mm_soundset",""};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_smg_mp5sd5: hlc_mp5_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
};
