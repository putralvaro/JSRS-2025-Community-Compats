class cfgpatches
{
	class jsrs2025_compat_svp
	{
		units[] = {};
		weapons[] = {};
		addonRootClass = "a3_sounds_f";
		requiredVersion = 1.94;
		requiredaddons[] = {"TKE_Ext_Core_V","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
		version = "1";
		author = "Goosey";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class autocannon_30mm_CTWS;
	class autocannon_Base_F;
	class TKE_Ext_Autocannon_30mm_BASE: autocannon_30mm_CTWS
	{
		class HE: autocannon_Base_F
		{
			class player: Mode_FullAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_cannon_30mm_shot_soundset"};
				};
				soundContinuous = 0;
				soundBurst = 0;
			};
		};
		class AP: autocannon_Base_F
		{
			class player: Mode_FullAuto
			{
				class StandardSound
				{
					soundsetshot[] = {"jsrs_2025_cannon_30mm_shot_soundset"};
				};
				soundContinuous = 0;
				soundBurst = 0;
			};
		};
	};
	class autocannon_35mm;
	class CannonCore;
	class TKE_Ext_Autocannon_30mm_AA: autocannon_35mm
	{
		class manual: CannonCore
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_zsu_shot_soundset"};
			};
		};
	};
	class cannon_105mm_VTOL_01;
	class TKE_Ext_Cannon_105mm_Pylon: cannon_105mm_VTOL_01
	{
		class player: Mode_Burst
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_cannon_small_shot_soundset","jsrs_2025_tailsystem_Cannon_Small_soundset"};
			};
		};
	};
	class Cannon_30mm_Plane_CAS_02_F;
	class TKE_Ext_Cannon_30mm: Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF: Mode_FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = {"jsrs_2025_autocannon_zsu_shot_soundset"};
			};
		};
	};
};
class CfgVehicles
{
	class All{};
	class AllVehicles: All
	{
		class NewTurret{};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret{};
	};
	class Car: LandVehicle{};
	class Car_F: Car
	{
		class NewTurret: NewTurret{};
		class Turrets{};
	};
	class Wheeled_Apc_F: Car_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_Apc_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter{};
	class Helicopter_Base_H: Helicopter_Base_F{};
	class TKE_Ext_Bearcat_BASE: APC_Wheeled_01_base_F
	{
		class Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				soundservo[] = {"z\jsrs2025\addons\sounds_vehicles\sounds\tanks\shared\soundservo2.ogg",1.5,1,150};
				soundservovertical[] = {"z\jsrs2025\addons\sounds_vehicles\sounds\tanks\shared\soundvertical.ogg",1.5,1,150};
			};
		};
		class Sounds
		{
			soundsetsint[] = {"jsrs_2025_apc_w_01_engine_int_idle_soundset","jsrs_2025_apc_w_01_engine_int_drive_soundset","jsrs_2025_base_apcs_engine_int_rev_west_soundset","jsrs_2025_apc_w_01_engine_int_release_soundset","jsrs_2025_tires_asphalt_slow_int_soundset","jsrs_2025_tires_asphalt_fast_int_soundset","jsrs_2025_tires_offroad_slow_int_soundset","jsrs_2025_tires_offroad_fast_int_soundset","jsrs_2025_tires_grass_int_soundset","jsrs_2025_wheeled_driving_noises_int_mrap_1_soundset","jsrs_2025_wheeled_offroad_driving_noises_int_mrap_1_soundset","jsrs_2025_base_apcs_rattle_int_soundset","jsrs_2025_base_apcs_stress_int_soundset","jsrs_2025_base_mraps_rain_int_soundset","truck_01_tires_water_fast_int_soundset","truck_01_tires_water_slow_int_soundset","truck_01_tires_turn_hard_int_soundset","truck_01_tires_turn_soft_int_soundset","truck_01_tires_brake_hard_int_soundset","truck_01_tires_brake_soft_int_soundset"};
			soundsetsext[] = {"jsrs_2025_apc_w_01_engine_ext_idle_soundset","jsrs_2025_apc_w_01_engine_ext_drive_soundset","jsrs_2025_base_apcs_engine_rev_west_soundset","jsrs_2025_apc_w_01_engine_evr_soundset","jsrs_2025_apc_w_01_engine_ext_release_soundset","jsrs_2025_apc_w_01_engine_ext_distance_soundset","jsrs_2025_tires_asphalt_slow_ext_soundset","jsrs_2025_tires_asphalt_fast_apc_ext_soundset","jsrs_2025_tires_asphalt_fast_apc_far_soundset","jsrs_2025_tires_offroad_slow_ext_soundset","jsrs_2025_tires_offroad_fast_ext_soundset","jsrs_2025_tires_grass_ext_soundset","jsrs_2025_base_apcs_rattle_ext_soundset","jsrs_2025_base_apcs_stress_ext_soundset","truck_01_rain_ext_soundset","truck_01_tires_water_fast_ext_soundset","truck_01_tires_water_slow_ext_soundset","truck_01_tires_turn_hard_ext_soundset","truck_01_tires_turn_soft_ext_soundset","truck_01_tires_brake_hard_ext_soundset","truck_01_tires_brake_soft_ext_soundset"};
		};
	};
	class TKE_Ext_Heli_BASE: Helicopter_Base_H
	{
		class Sounds
		{
			class engineext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_ext_close.ogg",1.4,1,400};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_close.ogg",1,1,700};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class engineextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_ext_distance.ogg",1,1,1000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_distance.ogg",1,1,3000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class rotornoiseext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_distance.ogg",0,1,0};
				frequency = "rotorspeed* 1";
				volume = "campos * (rotorthrust factor [0.7,0.9])";
				cone[] = {0.7,1.3,1,0};
			};
			class engineint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_int.ogg",1,1};
				frequency = "1";
				volume = "(1-campos)*((rotorspeed-0.75)*3)";
			};
			class rotorint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_int.ogg",0.5011872,1};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
			};
			soundsetsint[] = {"jsrs_2025_helicopter_Ka52_Kamov_engineint_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_Ka52_Kamov_gstress_soundset"};
			soundsetsext[] = {"jsrs_2025_helicopter_Ka52_Kamov_engineext_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotorext_soundset","jsrs_2025_helicopter_Ka52_Kamov_evr_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotordistance_soundset","jsrs_2025_helicopter_Ka52_Kamov_enginedistance_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
		};
		class soundsext
		{
			class soundevents{};
			class Sounds
			{
				class engineext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_ext_close.ogg",1.4,1,400};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_close.ogg",1,1,700};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class engineextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_ext_distance.ogg",1,1,1000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_distance.ogg",1,1,3000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class rotornoiseext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_ext_distance.ogg",0,1,0};
					frequency = "rotorspeed* 1";
					volume = "campos * (rotorthrust factor [0.7,0.9])";
					cone[] = {0.7,1.3,1,0};
				};
				class engineint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\turbine_int.ogg",1,1};
					frequency = "1";
					volume = "(1-campos)*((rotorspeed-0.75)*3)";
				};
				class rotorint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\mi48_kajman\rotor_int.ogg",0.5011872,1};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				};
				soundsetsint[] = {"jsrs_2025_helicopter_Ka52_Kamov_engineint_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_Ka52_Kamov_gstress_soundset"};
				soundsetsext[] = {"jsrs_2025_helicopter_Ka52_Kamov_engineext_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotorext_soundset","jsrs_2025_helicopter_Ka52_Kamov_evr_soundset","jsrs_2025_helicopter_Ka52_Kamov_rotordistance_soundset","jsrs_2025_helicopter_Ka52_Kamov_enginedistance_soundset","jsrs_2025_helicopter_Ka52_Kamov_tailrotor_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
			};
		};
	};
};
class cfgMods
{
	author = "GreenGoose";
	timepacked = "1773059194";
};
