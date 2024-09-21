#include <iostream>
using namespace std;

main()
{

	int number;
	cout << "Enter a 4-digit number : ";
	cin >> number;
	int ones = number % 10;
	int tens = (number / 10) % 10;
	int hundreds = (number / 100) % 10;
	int thousands = number / 1000;
	int sum = ones + tens + hundreds + thousands;
	cout << "The sum of indiviuals digits is : " << sum;

}