#include <iostream>
using namespace std;

//Function declaration
void finalPrice(string, int);

main()
{

	while(true)
	{
		string country;		//variable declaration
		int ticketPrice;	//variable declaration	
		cout << "Enter country's name : ";
		cin >> country;
		cout << "Enter ticket price in dollars : ";
		cin >> ticketPrice;
		finalPrice(country, ticketPrice);	//passing value to function
		cout << endl;
	}

}

void finalPrice(string country, int ticketPrice)
{
	
	if(country == "pakistan")
	{

		int price = ticketPrice - ((ticketPrice * 5) / 100);	//calcultion of price after discount	
                cout << "Final ticket price after discount : " << price;
	}
	if(country == "ireland")
	{

		int price = ticketPrice - ((ticketPrice * 10) / 100);	//calcultion of price after discount	
                cout << "Final ticket price after discount : " << price;
	}
	if(country == "india")
	{

		int price = ticketPrice - ((ticketPrice * 20) / 100);	//calcultion of price after discount		
                cout << "Final ticket price after discount : " << price;
	}
	if(country == "england")
	{

		int price = ticketPrice - ((ticketPrice * 30) / 100);	//calcultion of price after discount		
                cout << "Final ticket price after discount : " << price;
	}
	if(country == "canada")
	{

		int price = ticketPrice - ((ticketPrice * 45) / 100);	//calcultion of price after discount		
                cout << "Final ticket price after discount : " << price;
	}
	

}