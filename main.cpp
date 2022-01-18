#include <iostream> // input output stream
#include "Sedan.hh" // import Sedan header file
#include "Hatchback.hh" // import Hatchback header file
#include "Suv.hh" // import Suv header file
#include "Motorbike.hh" // import Motorbike header file


// Sales consultant feature method of sedan car
void sedanCarSalesmen(VehicleShowRoom* tellCustomer)
{
	
	// tellCustomer-> VehicleShowRoomPrice(); it is accountant job to tell
	//When we use this method, it conveys the features that the customer wants to hear.
	tellCustomer-> VehicleShowRoomNumberOfDoors();
	tellCustomer-> VehicleShowRoomTrunkSize();
	tellCustomer-> VehicleShowRoommodelYear();
	tellCustomer-> VehicleShowRoomengineSize();
	tellCustomer-> VehicleShowRoomgearType();
	tellCustomer-> VehicleShowRoomfuelType();
	
}

//Accounting transactions of the sedan car and the method of notifying the price to the customer
void sedanCarAccountant(VehicleShowRoom* tellCustomer)
{
	tellCustomer->VehicleShowRoomPrice();
}

// Sales consultant feature method of hatchback car
void hatchbackCarSalesmen(VehicleShowRoom* tellCustomer)
{
	// tellCustomer-> VehicleShowRoomPrice(); it is accountant job to tell
	//When we use this method, it conveys the features that the customer wants to hear.
	tellCustomer-> VehicleShowRoomNumberOfDoors();
	tellCustomer-> VehicleShowRoomTrunkSize();
	tellCustomer-> VehicleShowRoommodelYear();
	tellCustomer-> VehicleShowRoomengineSize();
	tellCustomer-> VehicleShowRoomgearType();
	tellCustomer-> VehicleShowRoomfuelType();
}

//Accounting transactions of the hatchback car and the method of notifying the price to the customer
void hatchbackCarAccountant(VehicleShowRoom* tellCustomer)
{
	tellCustomer->VehicleShowRoomPrice();
}

// Sales consultant feature method of suv car
void SuvCarSalesmen(VehicleShowRoom* tellCustomer)
{
	// tellCustomer-> VehicleShowRoomPrice(); it is accountant job to tell
	//When we use this method, it conveys the features that the customer wants to hear.
	tellCustomer-> VehicleShowRoomNumberOfDoors();
	tellCustomer-> VehicleShowRoomTrunkSize();
	tellCustomer-> VehicleShowRoommodelYear();
	tellCustomer-> VehicleShowRoomengineSize();
	tellCustomer-> VehicleShowRoomgearType();
	tellCustomer-> VehicleShowRoomfuelType();
}

//Accounting transactions of the suv car and the method of notifying the price to the customer
void SuvCarAccountant(VehicleShowRoom* tellCustomer)
{
	tellCustomer->VehicleShowRoomPrice();
}


// Sales consultant feature method of motorbike
void MotorbikeSalesmen(VehicleShowRoom* tellCustomer)
{
	// tellCustomer-> VehicleShowRoomPrice(); it is accountant job to tell
	tellCustomer-> VehicleShowRoomNumberOfDoors();
	tellCustomer-> VehicleShowRoomTrunkSize();
	tellCustomer-> VehicleShowRoommodelYear();
	tellCustomer-> VehicleShowRoomengineSize();
	tellCustomer-> VehicleShowRoomgearType();
	tellCustomer-> VehicleShowRoomfuelType();
}

//Accounting transactions of the motorbike and the method of notifying the price to the customer
void MotorbikeAccountant(VehicleShowRoom* tellCustomer)
{
	tellCustomer->VehicleShowRoomPrice();
}


// Our main method area
int main()
{
	
	//I wrote the following welcome messages for the showroom interface and asked the users to choose their options.
	cout << "Welcome to our car showroom." << endl;
	cout << "There are 4 types of vehicles in our showroom" << endl;
	cout << "You can ask our sales consultants to learn about the features of the cars." << endl;
	cout << "If you want to learn on your own, you can reach our vehicle brochures by pressing the numbers given a little later." << endl;
	//I gave users 5 options.
	cout << "Press 1 for the sedan, 2 for the hatchback, 3 for the SUV, and 4 for the motorbike." << "or you can press 0 and wait for the salesperson to come and inform you." << endl;
	
	// I created choice option
	int choice;
	// Input from user
	cin>>choice;
	// if else statement for choices
	
	if(choice==1){
		// sedan choice
		cout << "You choose sedan car" << Sedan.showInfo() << endl;
	}
	else if (choice==2){
		// hatchback choice
		cout << "You choose hatchback car" << Hatchback.showInfo() << endl;
	}
	else if (choice==3){
		// suv choice
		cout <<"You choose suv car" << Suv.showInfo() << endl;
	}
	else if (choice==4){
		// motorbike choice
		cout <<"You choose motorbike" << Motorbike.showInfo() << endl;
	}
	else if (choice==0){
		// wait salesperson choice
		cout << "You chose to wait for the vehicle advisor" << endl;
	}
	else {
		// greeting message
		cout << "Welcome" << endl;
		cout << "Welcome to our showroom. You can wander around as you wish. Our sales consultants will be ready when you need information." << endl;
	}
	
	
	//I create our objects and use them to call the required methods in our main method.
	// Creating our hatchback vehicle
	Hatchback* Golf = new Hatchback;
	
	// Creating our sedan vehicle
	Sedan* Octavia = new Sedan;
	
	// Creating our suv vehicle
	Suv* EQC = new Suv;
	
	// Creating our motorbike vehicle
	Motorbike* YamahaR25 = new Motorbike;
	
	
	// Hatchback salesperson features to say
	cout << "-----------------------------" <<endl;
	hatchbackSalesperson(Golf);
	// hatchback accountant
	hatchbackAccountant(Golf);
	
	// Sedan salesperson features to say
	cout << "-----------------------------" <<endl;
	sedanSalesperson(Octavia);
	// sedan accountant
	sedanAccountant(Octavia);
	
	// Suv salesperson features to say
	cout << "-----------------------------" <<endl;
	SuvSalesperson(EQC);
	SuvAccountant(EQC);
	
	// Motorbike salesperson features to say
	cout << "-----------------------------" <<endl;
	MotorbikeSalesperson(YamahR25);
	// motorbike accountant
	MotorbikeAccountant(YamahaR25);
	cout << "-----------------------------" <<endl;
	
	
}// end of our main class