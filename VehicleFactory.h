#pragma once

#include "IVehicle.h"
#include "Bike.h"
#include "Car.h"

class VehicleFactory
{

public:
	enum class VehicleType
	{
		VehicleType_Car = 1,
		VehicleType_Bike
	};

	static IVehicle* GetVehicle(VehicleType type);
};

