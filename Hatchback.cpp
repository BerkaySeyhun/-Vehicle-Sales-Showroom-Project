#include "Hatchback.hh" // import hatchback header file 

// Our method that prints our hatchback vehicle's price.
double Hatchback::vehiclePrice()
{
	cout << "Hatchback vehicle price is : " << price << endl;
	return price; // our methods return statement.
}

// Our method that prints our hatchback vehicle's door number.
int Hatchback::vehicleNumberOfDoors() 
{
	cout << "Hatchback vehicle door count: " << doors << endl;
	return doors; // our methods return statement.
}

// Our method that prints our hatchback vehicle's trunk size.
int Hatchback::vehicleTrunkSize()
{
	cout << "Hatchback vehicle trunk size is : " << trunk << endl;
	return trunk; // our methods return statement.
}

// Our method that prints our hatchback vehicle's model year.
int Hatchback::modelYear() 
{
	cout << "Hatchback vehicle model year is: " << model << endl;
	return model; // our methods return statement.
}

// Our method that prints our hatchback vehicle's engine size.
double Hatchback::engineSize()
{
	cout << "Hatchback vehicle engine size is : " << engineSize << endl;
	return engineSize; // our methods return statement.
}

// Our method that prints our hatchback vehicle's color.
string Hatchback::vehicleColor()
{
	cout<< "Hatchback vehicle color is : " << color << endl;
	return color; // our methods return statement.
}

// Our method that prints our hatchback vehicle's gear type.
string Hatchback::gearType()
{
	cout<< "Hatchback vehicle gear type is : " << gear << endl;
	return gear; // our methods return statement.
}

// Our method that prints our hatchback vehicle's fuel type.
string Hatchback::fuelType()
{
	cout<< "Hatchback vehicle fuel type is : " << fuel << endl;
	return fuel; // our methods return statement.
}

// Our show info function which is print our all features of our vehicle.
void Hatchback::showInfo()
{
	cout << "These are the features of our hatchback car" << "Price is = " << price << "Door number is = " << doors << "Trunk size is = " << trunk << "Model year is = " << model << "Engine size is = "<< engineSize <<"Color is = " << color << "Gear type is = "<< gear << "Fuel type is = "<<fuel << endl;
}