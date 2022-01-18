#ifndef _Vehicle_hh_ // This avoids double declaration of identifiers such as types, numbers and static variables.
#define _Vehicle_hh_ // This avoids double declaration of identifiers such as types, numbers and static variables.

#include <iostream> // include input output stream.
using namespace std;
#include <string> // include string type.

// C++ project that I prepared for a vehicle sales company.
class VehicleShowRoom // our main header file .
{
public: // Declaring our propertys public because we can access them easily.

	double vehiclePrice() = 0; // Our vehicles price method.
	
	int vehicleNumberOfDoors() = 0; // Our vehicles door number method.
	
	int vehicleTrunkSize() = 0; // Our vehicles trunk size method.
	
	int modelYear() = 0; // Our vehicles model year method.
	
	double engineSize() = 0.0; // Our vehicles engine size method.
	
	string vehicleColor() = ""; // Our vehicles color method.
	
	string gearType() = ""; // Our vehicles gear type method.
	
	string fuelType() = ""; // Our vehicles fuel type method.
	
	void showInfo() = ""; // A method that prints all the features of the vehicles at once.
};
#endif // This avoids double declaration of identifiers such as types, numbers and static variables.