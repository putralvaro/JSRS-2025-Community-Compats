class CfgPatches
{
	class grcb_jsrs2025_SPEX_Mortar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"jsrs2025_config_c","WW2_SPE_Assets_c_Weapons_Sounds_c","WW2_SPEX_Assets_c_Weapons_Sounds_c"};
		author = "LordJarhead/GeorgRavioli";
		skipWhenMissingDependencies = 1;
		ammo[] = {"SPEX_Sh_M49A2_60_HE","SPEX_Sh_M49A2_60_HE_Submunition","SPEX_Sh_M302_60_WP"};
	};
};
class CfgAmmo
{
	class ShellBase;
	class SubmunitionBase;
	class SPEX_Sh_M49A2_60_HE: SubmunitionBase
	{
		soundfly[] = {"z\jsrs2025\addons\sounds_sfx\sounds\artyflyby.wss",1,1,3000};
		soundsetexplosion[] = {"jsrs_2025_explosion_shock_medium_soundset","jsrs_2025_mortar_epl_soundset","jsrs_2025_explosion_stereo_generic_soundset","jsrs_2025_medium_explosion_tails_soundset","jsrs_2025_debris_big_soundset","jsrs_2025_explosion_shrapnel_soundset"};
	};
	class SPEX_Sh_M49A2_60_HE_Submunition: ShellBase
	{
		soundsetexplosion[] = {"jsrs_2025_explosion_shock_medium_soundset","jsrs_2025_mortar_epl_soundset","jsrs_2025_explosion_stereo_generic_soundset","jsrs_2025_medium_explosion_tails_soundset","jsrs_2025_debris_big_soundset","jsrs_2025_explosion_shrapnel_soundset"};
	};
	class SPEX_Sh_M302_60_WP: ShellBase
	{
		soundsetexplosion[] = {"jsrs_2025_explosion_shock_medium_soundset","jsrs_2025_mortar_epl_soundset","jsrs_2025_explosion_stereo_generic_soundset","jsrs_2025_medium_explosion_tails_soundset","jsrs_2025_debris_big_soundset","jsrs_2025_explosion_shrapnel_soundset","vn_gas_grenade_phosphor_soundset"};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class SPE_MortarCannon_base;
	class SPEX_M2_60: SPE_MortarCannon_base
	{
		class Single1: Mode_SemiAuto
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
		class Single2: Single1
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
		class Single3: Single1
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
	};
	class SPE_M1_81: SPE_MortarCannon_base
	{
		class Single1: Mode_SemiAuto
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
		class Single2: Single1
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
		class Single3: Single1
		{
			class standardsound
			{
				soundsetshot[] = {"jsrs_2025_mortar_small_shot_soundset"};
			};
		};
	};
};
