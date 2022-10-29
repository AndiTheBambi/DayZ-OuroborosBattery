#define _ARMA_

class CfgPatches
{
	class OuroborosBattery
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Battery9V: Inventory_Base{};
	class Admin_Battery: Battery9V
	{
		displayName = "Admin 9v Battery";
		weight = 0.042;
		itemSize[] = {1,1};
		inventorySlot = "BatteryD";
		
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 9999;
			energyAtSpawn = 9999;
			convertEnergyToQuantity = 1;
			reduceMaxEnergyByDamageCoef = 1;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {1};
		};
	};
	class Ouroboros_Battery: Admin_Battery
	{
		displayName = "An Ouroboros Battery";
		descriptionShort = "A nearly infinate battery source.";
	};
};
