class CfgPatches
{
	class grcb_jsrs2025_kt_plaqlu1
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"kt_plaqlu1","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
		ammo[] = {"KT_G_35mm_HE"};
	};
};
class CfgAmmo
{
	class ktqlu11_20mm_AMAX2;
	class KT_G_35mm_HE: ktqlu11_20mm_AMAX2
	{
		soundhit1[] = {"z\jsrs2025\addons\sounds_explosions\sounds\small\explosion_close_distance_1.wss",1.77828,1,1600};
		soundhit2[] = {"z\jsrs2025\addons\sounds_explosions\sounds\small\explosion_close_distance_2.wss",1.77828,1,1600};
		soundhit3[] = {"z\jsrs2025\addons\sounds_explosions\sounds\small\explosion_close_distance_3.wss",1.77828,1,1600};
		soundhit4[] = {"z\jsrs2025\addons\sounds_explosions\sounds\small\explosion_close_distance_4.wss",1.77828,1,1600};
		multisoundhit[] = {"soundhit1",0.25,"soundhit2",0.25,"soundhit3",0.25,"soundhit4",0.25};
		soundsetexplosion[] = {"jsrs_2025_EXP_RAW_20MM_EXPLOSION_soundset","jsrs_2025_EXP_RAW_TAIL_20mm_soundset","jsrs_2025_EXP_RAW_DEBRIS_SMALL_soundset"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class GM6_base_F;
	class kt_QLU11: GM6_base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_gmg_shot_soundset","jsrs_2025_tailsystem_40mmgl_soundset"};
			};
		};
	};
};
