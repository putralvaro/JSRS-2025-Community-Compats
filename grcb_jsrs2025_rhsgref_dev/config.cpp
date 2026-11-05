class cfgpatches
{
	class grcb_jsrs2025_rhsgref_dev
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 1.6;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs_soundmod_2025_Beta","jsrs_soundmod_2025_Beta_rhs_gref_weapons","rhs_c_weapons","rhsgref_c_weapons","rhsgref_c_airweapons","rhsgref_sounds","jsrs_soundmod_2025_Beta_rhs_afrf_weapons"};
		version = "1";
		author = "lordjarhead/georgravioli";
		skipWhenMissingDependencies = 1;
	};
};
class cfgweapons
{
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		class Single;
		class FullAuto;
	};
	class rhsgref_556ak_base: rhs_weap_ak74m
	{
		magazineWell[] = {"CBA_556x45_AK","CBA_556x45_RPK","AK_556x45NMG"};
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_vector_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class rhs_weap_rifle_545_burst_base;
	class rhs_weap_aek_base: rhs_weap_rifle_545_burst_base
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class rhsgref_weap_aek_556_base: rhs_weap_aek_base
	{
		magazineWell[] = {"CBA_556x45_AK","CBA_556x45_RPK","AK_556x45NMG"};
		class Single: Single
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Burst
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_katiba_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
};
