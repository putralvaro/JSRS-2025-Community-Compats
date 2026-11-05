class CfgPatches
{
	class grcb_jsrs2025_OSS_Revolvers
	{
		requiredAddons[] = {"OSS_Revolvers","jsrs2025_config_c"};
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
	class RevolverJansen: Pistol_Base_F{};
	class OSS_Colt1848Dragoon: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Dragoon_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Colt1848Dragoon_FancyLike: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Dragoon_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Colt1860: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Dragoon_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Colt1860_Normal: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Dragoon_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Colt1851: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Model1851_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Colt1849Pocket: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Model1849_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Remington1858_44Centre: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_44Centre_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_ColtSAA: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_44Centre_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Remington1858_46Rim: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_46Rim_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Starr44_SA: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Starr_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Starr44_DA: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Starr_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_Bodeo1889_DA: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Bodeo_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
	class OSS_WebleyRIC_RICKYGERVAIS: RevolverJansen
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OSS_Bodeo_SoundSet","jsrs_2025_tailsystem_65mm_rifle_soundset"};
			};
		};
	};
};
