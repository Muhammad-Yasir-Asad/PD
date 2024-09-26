#include <iostream>
using namespace std;

void inchesToFeet(float inches);

main()
{

	float inches;
	cout << "Enter the value in inches : ";
	cin >> inches;
	inchesToFeet(inches);

}

void inchesToFeet(float inches)
{

	float feet;
	feet = inches / 12;
	cout << "The value in feet is : " << feet;

}