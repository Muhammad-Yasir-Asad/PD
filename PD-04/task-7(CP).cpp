#include <iostream>
using namespace std;

//Function Declaration
void flowerShop(int, int, int);

main()
{

	int redRose;	//variable declaration
	int whiteRose;	//variable declaration 
	int tulip;	//variable declaration
	cout << "Red Rose : ";
	cin >> redRose;
	cout << "White Rose : ";
	cin >> whiteRose;
	cout << "Tulip : ";
	cin >> tulip;
	flowerShop(redRose, whiteRose, tulip); //passing values of variables to function

}

void flowerShop(int redRose, int whiteRose, int tulip)
{

	float price = (redRose * 2) + (whiteRose * 4.1) + (tulip * 2.5);	//Calculation of total price
	if(price > 200)
	{

		float finalPrice = price - ((price * 20) / 100);	//Calculation of price after discount
		cout << "Original Price : $" << price << endl;
		cout << "Price after Discount : $" << finalPrice;
		
	}
	if(price <= 200)
	{
	
		cout << "Original Price : $" << price << endl; 
		cout << "No discount applied";

	}
	
}

