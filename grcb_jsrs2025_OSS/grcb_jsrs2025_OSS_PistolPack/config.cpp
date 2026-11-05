class CfgPatches
{
	class grcb_jsrs2025_OSS_PistolPack
	{
		requiredAddons[] = {"OSS_PistolPack","jsrs2025_config_c"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Pistol_Base_F;
	class PistolJansen: Pistol_Base_F{};
	class AHA_SIG_P220: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_SIG_P220_10mm_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Jericho_40ShortNWimpy: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Jericho_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Colt_N99: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_ColtN99_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_37M_FromerFemaru: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Fromer37M_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Beretta1934: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Beretta34_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Mauser_0608: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Mauser0608_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_VAG73: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_vag_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_vag_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_RubyPistol: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_UNION_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_unionPistol: Pistol_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_UNION_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_CZ52: Pistol_Base_F
	{
		recoil = "recoil_pistol_acpc2";
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_CZ52_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_vis35: Pistol_Base_F
	{
		recoil = "recoil_pistol_acpc2";
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_vis35_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_cz27: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_CZ27_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_cz27_S: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_cz27_S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class OSS_VP70M: Pistol_Base_F
	{
		recoil = "recoil_pistol_acpc2";
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_vp70_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
		class ThreeRoundBurst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_vp70_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Benelli_B76: PistolJansen
	{
		recoil = "recoil_pistol_acpc2";
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_BenelliPistol_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class OSS_Benelli_B76Comp: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_BenelliPistol_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
	class AHA_Steyr_M1912: PistolJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_M1912_SoundSet","jsrs_2025_tailsystem_9mm_pistol_sonic_soundset"};
			};
		};
	};
};
