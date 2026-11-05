class CfgPatches
{
	class grcb_jsrs2025_AHA_OOZI
	{
		requiredAddons[] = {"OOZI","jsrs2025_config_c"};
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
	class arifle_AKS_F;
	class OOZI_Based: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_Uzi_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				SoundSetShot[] = {"AHA_UZI_S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_Uzi_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				SoundSetShot[] = {"AHA_UZI_S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
	class OOZI_Based_Stock: arifle_AKS_F
	{
		class Semi: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_Uzi_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				SoundSetShot[] = {"AHA_UZI_S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
		class Fullauto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"AHA_Uzi_SoundSet","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class silencedsound: BaseSoundModeType
			{
				SoundSetShot[] = {"AHA_UZI_S_SoundSet","jsrs_2025_tailsystem_9mm_pistol_silenced_sonic_soundset"};
			};
		};
	};
};
