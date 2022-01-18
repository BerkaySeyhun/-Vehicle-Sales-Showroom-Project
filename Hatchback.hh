#include "Vehicle.hh" // importing our main header file Vehicle.
 
// Creating our Hatchback subclass from parent Vehicle header file. 
class Hatchback : public Vehicle 
{
	double price = 125000; // I determine the value of our vehicle and assign it to a variable.
	
	int doors = 5; // I write vehicles door number.
	
	int trunk = 350; // I write vehicles trunk size.
	
	int model = 2020; // I write vehicles model year.
	
	double engineSize = 1.6; // I write vehicles engine size.
	
	string color = "ferrari red"; // I write vehicles color.
	
	string gear = "automatic"; // I write vehicles gear type.
	
	string fuel = "diesel"; // I write vehicles fuel type.
	

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