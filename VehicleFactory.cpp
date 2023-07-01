#include "VehicleFactory.h"

IVehicle* VehicleFactory::GetVehicle(VehicleFactory::VehicleType type)
{
	IVehicle* vehicle = nullptr;
	switch (type)
	{
		case VehicleFactory::VehicleType::VehicleType_Car:
		{
			vehicle = new Car();
			break;
		}
		case VehicleFactory::VehicleType::VehicleType_Bike:
		{	vehicle = new Bike();
			break;
		}
		default:
		{
			std::cout << "Wrong type entered. Eter value again (1/2)" << std::endl;
			break;
		}
	}
	return vehicle;
}
