class CfgPatches
{
	class FP_BLU_F
	{
		units[] = 
		{
			"FP_B_MBT_03_cannon_F",
			"FP_B_APC_Tracked_03_cannon_F",
			"FP_B_APC_Wheeled_03_cannon_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Armor_F_EPB_MBT_03",
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Armor_F_EPB_APC_tracked_03",
			"A3_Armor_F"
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car;
	class Car_F : Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class Wheeled_APC_F : Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class APC_Wheeled_03_base_F : Wheeled_APC_F {};
	class APC_Tracked_03_base_F : Tank_F {};
	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F {};
	class I_APC_tracked_03_cannon_F : I_APC_tracked_03_base_F {};
	class I_APC_Wheeled_03_base_F : APC_Wheeled_03_base_F {};
	class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F {};
	class MBT_03_base_F : Tank_F {};
	class I_MBT_03_base_F : MBT_03_base_F {};
	class I_MBT_03_cannon_F : I_MBT_03_base_F {};
	class FP_B_MBT_03_base_F: I_MBT_03_cannon_F
	{
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_Soldier_F"
		};
		side = 1;
		scope = 1;
		faction = "BLU_F";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = 
						{
							"500Rnd_127x99_mag_Tracer_Red",
							"500Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[] = 
				{
					"28Rnd_120mm_APFSDS_shells_Tracer_Red",
					"14Rnd_120mm_HE_shells_Tracer_Red",
					"2000Rnd_762x51_Belt_Red",
					"2000Rnd_762x51_Belt_Red"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class FP_B_MBT_03_cannon_F: FP_B_MBT_03_base_F
	{
		author = "Night515";
		_generalMacro = "FP_B_MBT_03_cannon_F";
		scope = 2;
		hiddenSelections[] = 
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"FP_Factions\BLU_F\data\mbt_03_ext01_blufor_co.paa",
			"FP_Factions\BLU_F\data\mbt_03_ext02_blufor_co.paa",
			"FP_Factions\BLU_F\data\mbt_03_rcws_blufor_co.paa"
		};
	};
	class FP_B_APC_Tracked_03_cannon_F: I_APC_tracked_03_cannon_F
	{
		crew = "B_crew_F";
		_generalMacro = "B_APC_Tracked_03_cannon_F";
		author = "Night515";
		typicalCargo[] = 
		{
			"B_Soldier_F"
		};
		side = 1;
		faction = "BLU_F";
		hiddenSelections[] = 
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_Factions\BLU_F\data\apc_tracked_03_ext_blufor_co.paa",
			"FP_Factions\BLU_F\data\apc_tracked_03_ext2_blufor_co.paa"
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = 
				{
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"1000Rnd_762x51_Belt_Red",
					"1000Rnd_762x51_Belt_Red"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class FP_B_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F
	{
		side = 1;
		scope = 2;
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_soldier_F"
		};
		faction = "BLU_F";
		_generalMacro = "FP_B_APC_Wheeled_03_cannon_F";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = 
				{
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"1000Rnd_762x51_Belt_Red",
					"2Rnd_GAT_missiles"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		};
	};
};