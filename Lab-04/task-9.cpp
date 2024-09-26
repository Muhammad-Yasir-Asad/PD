#include <iostream>
using namespace std;

void fuel(float distance);
main()
{
	
	float distance;
	cout << "Enter the distance : ";
	cin >> distance;
	fuel(distance);	

}

void fuel(float distance)
{
	float fuel;
	fuel = distance * 10;
	if(fuel < 100)
	{

		cout << "Fuel Neded : 100";	

	}
	if(fuel >= 100)
	{

		cout << "Fuel Neded : " << fuel;	

	}

}