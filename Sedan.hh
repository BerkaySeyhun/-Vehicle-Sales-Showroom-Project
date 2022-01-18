#include "Vehicle.hh" // importing our main header file Vehicle.

// Creating our Sedan subclass from parent Vehicle header file.
class Sedan : public Vehicle
{
	
	double price = 155000; // I determine the value of our vehicle and assign it to a variable.
	
	int doors = 5; // I write vehicles door number.
	
	int trunk = 595; // I write vehicles trunk size.
	
	int model = 2021; // I write vehicles model year.
	
	double engineSize = 2.0; // I write vehicles engine size.
	
	string color = "nardo grey"; // I write vehicles color.
	
	string gear = "automatic"; // I write vehicles gear type.
	
	string fuel = "diesel"; // I write vehicles fuel type.

public:

//Since this is just a header file, we just need to write the names of the functions and I will make the definition part in the source file.

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