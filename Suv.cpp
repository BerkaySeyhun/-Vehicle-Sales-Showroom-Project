#include "Suv.hh" // Suv header file 


// Our method that prints our suv vehicle's price.
double Suv::vehiclePrice()
{
	cout << "Suv vehicle price is : " << price << endl;
	return price; // our methods return statement.
}

// Our method that prints our suv vehicle's door number.
int Suv::vehicleNumberOfDoors() 
{
	cout << "Suv vehicle door count: " << doors << endl;
	return doors; // our methods return statement.
}

// Our method that prints our suv vehicle's trunk size.
int Suv::vehicleTrunkSize()
{
	cout << "Suv vehicle trunk size is : " << trunk << endl;
	return trunk; // our methods return statement.
}

// Our method that prints our suv vehicle's model year.
int Suv::modelYear() 
{
	cout << "Suv vehicle model year is: " << model << endl;
	return model; // our methods return statement.
}

// Our method that prints our suv vehicle's engine size.
double Suv::engineSize()
{
	cout << "Suv vehicle engine size is : " << engineSize << endl;
	return engineSize; // our methods return statement.
}

// Our method that prints our suv vehicle's color.
string Suv::vehicleColor()
{
	cout<< "Suv vehicle color is : " << color << endl;
	return color; // our methods return statement.
}

// Our method that prints our suv vehicle's gear type.
string Suv::gearType()
{
	cout<< "Suv vehicle gear type is : " << gear << endl;
	return gear; // our methods return statement.
}

// Our method that prints our suv vehicle's fuel type.
string Suv::fuelType()
{
	cout<< "Suv vehicle fuel type is : " << fuel << endl;
	return fuel; // our methods return statement.
}

// Our show info function which is print our all features of our vehicle.
void Suv::showInfo()
{
	cout << "These are the features of our Suv car" << "Price is = " << price << "Door number is = " << doors << "Trunk size is = " << trunk << "Model year is = " << model << "Engine size is = "<< engineSize <<"Color is = " << color << "Gear type is = "<< gear << "Fuel type is = "<<fuel << endl;
}