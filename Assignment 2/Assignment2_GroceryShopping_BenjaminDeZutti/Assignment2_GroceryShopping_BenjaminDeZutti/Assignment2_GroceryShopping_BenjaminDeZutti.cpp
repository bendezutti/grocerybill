//Program asks user to select an item from a list and the quantity of said item, then displays the total cost
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{

	//Establishes string variables in the list
	string milkString = "1. Milk";
	string eggString = "2. Egg";
	string cheeseString = "3. Cheese";
	string pastaString = "4. Pasta";
	
	//Establishes constants
	double MILK = 5.99;
	double EGG = 6.99;
	double CHEESE = 10.98;
	double PASTA = 2.75;
	
	
	//Displays the grocery list
	cout << "----------------------------------" << endl;
	cout << "----- GROCERY SHOPPING ITEMS -----" << endl;
	cout << setw(10) << milkString << setw(10) << "$" << MILK << "/ gallon" << endl;
	cout << setw(9) << eggString << setw(11) << "$" << EGG << "/ dozen" << endl;
	cout << setw(12) << cheeseString << setw(8) << "$" << CHEESE << "/ 8oz" << endl;
	cout << setw(11) << pastaString << setw(9) << "$" << PASTA << "/ packet" << endl; 
	cout << "----------------------------------" << endl; 
	
	//Asks user for input
	cout << "Select an item from the list above using M,E,C, or P" << endl;
	char choice;
	cin >> choice;



	//Establishes variables in the choice selection
	int milkGallons;
	int eggDozens;
	int cheeseOunces;
	int pastaPackets;
	double SUBTOTAL;
	
	//Asks user what selection they want to make and the quantity of said choice
	switch (choice)
	{
	case 'M': cout << "You chose milk." << endl;
		cout << "How many gallons of milk do you want?" << endl;
		cin >> milkGallons;
		SUBTOTAL = milkGallons * MILK;
		break;
	case 'E': cout << "You chose eggs." << endl;
		cout << "How many dozens of eggs do you want?" << endl;
		cin >> eggDozens;
		SUBTOTAL = eggDozens * EGG;
		break; 
	case 'C': cout << "You chose cheese." << endl;
		cout << "How many ounces of cheese do you want?" << endl;
		cin >> cheeseOunces; 
		SUBTOTAL = cheeseOunces * CHEESE;
		break; 
	case 'P': cout << "You chose pasta." << endl;
		cout << "How many packets of pasta do you want?" << endl; 
		cin >> pastaPackets;
		SUBTOTAL = pastaPackets * PASTA; 
		break; 

	default: cout << "You did not enter M,E,C, or P!" << endl;
	}

	//Calculates Tip and adds to subtotal
	char tip;
	cout << "Do you want to pay a $5 tip? Enter Y or N." << endl;
	int TIP = 5.00;
	cin >> tip;
	if (tip == 'Y')
		SUBTOTAL + TIP;
	else if (tip == 'N')
		SUBTOTAL + 0;

	//Calculates Shipping Rate and adds to the subtotal
	const double SHIP_RATE1 = 0.00;
	const double SHIP_RATE2 = 4.75;
	const double SHIP_RATE3 = 7.65;
	double shippingTotal;

	if (SUBTOTAL < 20)
		 shippingTotal = SHIP_RATE1; 

	if (SUBTOTAL > 20 && SUBTOTAL < 30)
		shippingTotal = SHIP_RATE2; 

	if (SUBTOTAL > 35)
		shippingTotal = SHIP_RATE3;

	//Calculates total cost
	double TOTALCOST; 
	TOTALCOST = SUBTOTAL + shippingTotal + TIP;

	//Displays total cost
	cout << "The total cost is " << setprecision(4) << "$" << TOTALCOST << "." << endl;
	


}