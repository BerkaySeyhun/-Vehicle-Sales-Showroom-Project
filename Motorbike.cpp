#include "Motorbike.hh" // Motorbike header file 

// Our method that prints our Motorbike vehicle's price.
double Motorbike::vehiclePrice()
{
	cout << "Motorbike vehicle price is : " << price << endl;
	return price; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's door number.
int Motorbike::vehicleNumberOfDoors() 
{
	cout << "Motorbike has no door"<< endl;
	return doors; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's trunk size.
int Motorbike::vehicleTrunkSize()
{
	cout << "Motorbike vehicle trunk size is : " << trunk << endl;
	return trunk; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's model year.
int Motorbike::modelYear() 
{
	cout << "Motorbike vehicle model year is: " << model << endl;
	return model; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's engine size.
double Motorbike::engineSize()
{
	cout << "Motorbike vehicle engine size is : " << engineSize << endl;
	return engineSize; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's color.
string Motorbike::vehicleColor()
{
	cout<< "Motorbike vehicle color is : " << color << endl;
	return color; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's gear type.
string Motorbike::gearType()
{
	cout<< "Motorbike vehicle gear type is : " << gear << endl;
	return gear; // our methods return statement.
}

// Our method that prints our Motorbike vehicle's fuel type.
string Motorbike::fuelType()
{
	cout<< "Motorbike vehicle fuel type is : " << fuel << endl;
	return fuel; // our methods return statement.
}

// Our show info function which is print our all features of our vehicle.
void Motorbike::showInfo()
{
	cout << "These are the features of our Motorbike" << "Price is = " << price << "Door number is = " << doors << "Trunk size is = " << trunk << "Model year is = " << model << "Engine size is = "<< engineSize <<"Color is = " << color << "Gear type is = "<< gear << "Fuel type is = "<<fuel << endl;
}