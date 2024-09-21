#include <iostream>
using namespace std;

main()
{

	float vegetable_price;
	float fruit_price;
	float total_vegetables;
	float total_fruits;
	cout << "Enter vegetable price per kilogram (in coins) : ";
	cin >> vegetable_price;
	cout << "Enter fruit price per kilogram (in coins) : ";
	cin >> fruit_price;
	cout << "Enter total kilograms of vegetables : ";
	cin >> total_vegetables;
	cout << "Enter total kilograms of fruits : ";
	cin >> total_fruits;
	float earning = (vegetable_price * total_vegetables) + (fruit_price * total_fruits);
	float total_earning = earning / 1.94;
	cout << "Total earning in Rupees (Rps) : " << total_earning;

}