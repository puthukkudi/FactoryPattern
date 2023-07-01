#include <iostream>
#include "VehicleFactory.h"
#include <string>

using namespace std;

void ExecuteCreation()
{
	VehicleFactory::VehicleType type;
	string vehichleType;
	cout << "Enter the type : ";
	cin >> vehichleType;
	cout << endl;
	type = (VehicleFactory::VehicleType)stoi(vehichleType);	
	try
	{
		IVehicle* veihicle = VehicleFactory::GetVehicle(type);
		if(veihicle == nullptr)
			throw 101;
		else		
			veihicle->CreateVehicle();		
	}
	catch (...)
	{
		ExecuteCreation();
	}
}

int main()
{
	ExecuteCreation();	
}
