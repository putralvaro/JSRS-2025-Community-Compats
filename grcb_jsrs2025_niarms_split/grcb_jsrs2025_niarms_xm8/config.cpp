class CfgPatches
{
	class grcb_jsrs2025_niarms_xm8
	{
		name = "JSRS Soundmod 2025 Beta - NIArms XM8s Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms XM8s Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_XM8"};
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
	class hlc_g36_base;
	class hlc_XM8_base: hlc_g36_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class HLC_rifle_XM8_Carbine: hlc_XM8_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_XM8_Compact: hlc_XM8_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
	};
	class hlc_rifle_XM8_DMAR: hlc_XM8_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_g36_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
};
