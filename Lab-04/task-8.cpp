#include <iostream>
using namespace std;

void payable_amount(int purchase, string day);

main()
{

	int purchase;
	string day;
	cout << "Enter the day of purchase : ";
	cin >> day;
	cout << "Enter the total purchase amount : ";
	cin >> purchase;
	payable_amount(purchase, day);

}

void payable_amount(int purchase, string day)
{

	int final_amount = purchase;
	if(day == "sunday")
	{

		final_amount = purchase - (purchase * 10) / 100;

	}
	cout << "Payable amount : " << final_amount;

}