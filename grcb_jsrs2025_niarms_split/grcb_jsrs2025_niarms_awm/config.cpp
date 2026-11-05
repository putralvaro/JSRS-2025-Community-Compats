class CfgPatches
{
	class grcb_jsrs2025_niarms_awm
	{
		name = "JSRS Soundmod 2025 Beta - NIArms AWM Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms AWM Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_fhawcovert"};
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
	class hlc_awc_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_soundset","jsrs_2025_boltaction_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_boltaction_big_shot_silenced_soundset","jsrs_2025_boltaction_silenced_tails_soundset"};
			};
		};
	};
	class hlc_rifle_awcovert: hlc_awc_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_93mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_bar_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_93mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_bar_soundset"};
			};
		};
	};
};
