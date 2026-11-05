class CfgPatches
{
	class grcb_jsrs2025_niarms_AUGs
	{
		name = "JSRS Soundmod 2025 Beta - NIArms AUGs Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - NIArms AUGs Compat";
		author = "LordJarhead/GeorgRavioli";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs2025_config_c","hlcweapons_core","hlcweapons_aug"};
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
	class hlc_aug_base: rifle_base_f
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_aug: hlc_aug_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_auga1carb: hlc_rifle_aug
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
	};
	class hlc_rifle_aughbar: hlc_rifle_aug
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
	};
	class hlc_rifle_augpara: hlc_aug_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_57mm_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_57mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_57mm_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_57mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_rifle_auga2para: hlc_aug_base
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_57mm_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_57mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_soundset","jsrs_2025_57mm_tails_soundset","jsrs_2025_weapon_whizz_smg_soundset","jsrs_2025_weapon_stereo_c45_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_57mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_9mm_soundset","jsrs_2025_weapon_whizz_smg_soundset"};
			};
		};
	};
	class hlc_rifle_auga2: hlc_rifle_aug
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset","jsrs_2025_weapon_stereo_sd_r556_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset"};
			};
		};
	};
	class hlc_rifle_auga2carb: hlc_rifle_auga2
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_556mm_tails_soundset","jsrs_2025_weapon_whizz_rifle_a_soundset","jsrs_2025_weapon_stereo_r556_soundset"};
			};
		};
	};
};
