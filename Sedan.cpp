#include "Sedan.hh" // Import sedan header file


// Our method that prints our sedan vehicle's price.
double Sedan::vehiclePrice()
{
	cout << "Sedan vehicle price is : " << price << endl;
	return price; // our methods return statement.
}

// Our method that prints our sedan vehicle's door number.
int Sedan::vehicleNumberOfDoors() 
{
	cout << "Sedan vehicle door count: " << doors << endl;
	return doors; // our methods return statement.
}

// Our method that prints our sedan vehicle's trunk size.
int Sedan::vehicleTrunkSize()
{
	cout << "Sedan vehicle trunk size is : " << trunk << endl;
	return trunk; // our methods return statement.
}

// Our method that prints our sedan vehicle's model year.
int Sedan::modelYear() 
{
	cout << "Sedan vehicle model year is: " << model << endl;
	return model; // our methods return statement.
}

// Our method that prints our sedan vehicle's engine size.
double Sedan::engineSize()
{
	cout << "Sedan vehicle engine size is : " << engineSize << endl;
	return engineSize; // our methods return statement.
}

// Our method that prints our sedan vehicle's color.
string Sedan::vehicleColor()
{
	cout<< "Sedan vehicle color is : " << color << endl;
	return color; // our methods return statement.
}

// Our method that prints our sedan vehicle's gear type.
string Sedan::gearType()
{
	cout<< "Sedan vehicle gear type is : " << gear << endl;
	return gear; // our methods return statement.
}

// Our method that prints our sedan vehicle's fuel type.
string Sedan::fuelType()
{
	cout<< "Sedan vehicle fuel type is : " << fuel << endl;
	return fuel; // our methods return statement.
}

// Our show info function which is print our all features of our vehicle.
void Sedan::showInfo()
{
	cout << "These are the features of our sedan car" << "Price is = " << price << "Door number is = " << doors << "Trunk size is = " << trunk << "Model year is = " << model << "Engine size is = "<< engineSize <<"Color is = " << color << "Gear type is = "<< gear << "Fuel type is = "<<fuel << endl;

}