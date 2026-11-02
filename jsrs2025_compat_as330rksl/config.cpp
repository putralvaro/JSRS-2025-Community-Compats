////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.21
//https://mikero.bytex.digital/Downloads
//'now' is Tue Nov 03 02:01:30 2026 : 'file' last modified on Sun Jun 14 16:34:08 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgpatches
{
	class jsrs2025_compat_as330rksl
	{
		units[] = {};
		weapons[] = {};
		addonRootClass = "a3_sounds_f";
		requiredVersion = 1.94;
		requiredaddons[] = {"a3_air_f","rksla3_pumahc","jsrs2025_config_c"};
		skipWhenMissingDependencies = 1;
		version = "1";
		projectname = "";
		author = "";
	};
};
class cfgvehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class rksla3_pumahc_base: Helicopter_Base_H
	{
		class Sounds
		{
			class engineext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_ext_close.ogg",1.4,1,400};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_close.ogg",1,1,700};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class engineextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_ext_distance.ogg",1,1,1000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorextdist
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_distance.ogg",1,1,3000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class rotornoiseext
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_distance.ogg",0,1,0};
				frequency = "rotorspeed* 1";
				volume = "campos * (rotorthrust factor [0.7,0.9])";
				cone[] = {0.7,1.3,1,0};
			};
			class engineint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_int.ogg",1,1};
				frequency = "1";
				volume = "(1-campos)*((rotorspeed-0.75)*3)";
			};
			class rotorint
			{
				sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_int.ogg",0.5011872,1};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
			};
			soundsetsint[] = {"jsrs_2025_helicopter_ch53_superstallion_engineint_soundset","jsrs_2025_helicopter_ch53_superstallion_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_ch53_superstallion_gstress_soundset"};
			soundsetsext[] = {"jsrs_2025_helicopter_ch53_superstallion_engineext_soundset","jsrs_2025_helicopter_ch53_superstallion_rotorext_soundset","jsrs_2025_helicopter_ch53_superstallion_evr_soundset","jsrs_2025_helicopter_ch53_superstallion_rotordistance_soundset","jsrs_2025_helicopter_ch53_superstallion_enginedistance_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
		};
		class soundsext
		{
			class soundevents{};
			class Sounds
			{
				class engineext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_ext_close.ogg",1.4,1,400};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_close.ogg",1,1,700};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class engineextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_ext_distance.ogg",1,1,1000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorextdist
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_distance.ogg",1,1,3000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class rotornoiseext
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_ext_distance.ogg",0,1,0};
					frequency = "rotorspeed* 1";
					volume = "campos * (rotorthrust factor [0.7,0.9])";
					cone[] = {0.7,1.3,1,0};
				};
				class engineint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\turbine_int.ogg",1,1};
					frequency = "1";
					volume = "(1-campos)*((rotorspeed-0.75)*3)";
				};
				class rotorint
				{
					sound[] = {"z\jsrs2025\addons\sounds_air\sounds\helicopters\ch53_superstallion\rotor_int.ogg",0.5011872,1};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				};
				soundsetsint[] = {"jsrs_2025_helicopter_ch53_superstallion_engineint_soundset","jsrs_2025_helicopter_ch53_superstallion_rotorint_soundset","jsrs_2025_helicopter_transmissiondamageint_phase1_soundset","jsrs_2025_helicopter_transmissiondamageint_phase2_soundset","jsrs_2025_helicopter_damagealarmint_soundset","jsrs_2025_helicopter_rotorlowalarmint_soundset","jsrs_2025_helicopter_scrublandint_soundset","jsrs_2025_helicopter_scrubbuildingint_soundset","jsrs_2025_helicopter_scrubtreeint_soundset","jsrs_2025_helicopter_slingloaddownint_soundset","jsrs_2025_helicopter_slingloadupint_soundset","jsrs_2025_helicopter_rainint_soundset","jsrs_2025_helicopter_windint_soundset","jsrs_2025_helicopter_ch53_superstallion_gstress_soundset"};
				soundsetsext[] = {"jsrs_2025_helicopter_ch53_superstallion_engineext_soundset","jsrs_2025_helicopter_ch53_superstallion_rotorext_soundset","jsrs_2025_helicopter_ch53_superstallion_evr_soundset","jsrs_2025_helicopter_ch53_superstallion_rotordistance_soundset","jsrs_2025_helicopter_ch53_superstallion_enginedistance_soundset","jsrs_2025_helicopter_ch53_superstallion_tailrotor_soundset","jsrs_2025_helicopter_transmissiondamageext_phase1_soundset","jsrs_2025_helicopter_transmissiondamageext_phase2_soundset","jsrs_2025_helicopter_scrublandext_soundset","jsrs_2025_helicopter_scrubbuildingext_soundset","jsrs_2025_helicopter_scrubtreeext_soundset","jsrs_2025_helicopter_slingloaddownext_soundset","jsrs_2025_helicopter_slingloadupext_soundset","jsrs_2025_helicopter_rainext_soundset"};
			};
		};
	};
};
class cfgMods
{
	author = "GreenGoose";
	timepacked = "1781454848";
};
