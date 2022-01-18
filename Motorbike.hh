#include "Vehicle.hh" // importing our main header file Vehicle.

// Creating our Motorbike subclass from parent Vehicle header file.
class Motorbike : public Vehicle 
{
	
	double price = 55000; // I determine the value of our vehicle and assign it to a variable.
	
	int doors = 0; // I write vehicles door number.
	
	int trunk = 15; // I write vehicles trunk size.
	
	int model = 2019; // I write vehicles model year.
	
	double engineSize = 0.25; // I write vehicles engine size.
	
	string color = "yamaha blue"; // I write vehicles color.
	
	string gear = "manuel"; // I write vehicles gear type.
	
	string fuel = "gasoline"; // I write vehicles fuel type.
	

public:

// Since this is just a header file, we just need to write the names of the functions and I will make the definition part in the source file.

	double vehiclePrice() ; 
	
	int vehicleNumberOfDoors() ;
	
	int vehicleTrunkSize() ; 
	
	int modelYear() ;
	
	double engineSize() ;
	
	string vehicleColor() ;
	
	string gearType() ;
	
	string fuelType() ;
	
	void showInfo() ;
};