class CfgPatches
{
	class grcb_jsrs2025_lzb_pla
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"PLAW_Core","PLAW"};
		skipWhenMissingDependencies = 1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Pistol_Base_F;
	class QSZ92: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_sting9_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class Rifle_Base_F;
	class LZB_QBZ191: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class LZB_QBU191: LZB_QBZ191
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_cmr76_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class QBZ95_1: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
	class c_QBZ95_1: QBZ95_1
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_soundset","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_car95_shot_silenced_soundset","jsrs_2025_tailsystem_65mm_rifle_silenced_soundset"};
			};
		};
	};
};
