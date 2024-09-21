#include <iostream>
using namespace std;

main()
{

	int integer_1[3];
	int integer_2[2];
	cout << "Enter the first integer : ";
	cin >> integer_1[1];
	cout << "Enter the second integer : ";
	cin >> integer_1[2];
	cout << "Enter the third integer : ";
	cin >> integer_1[3];
	cout << "Enter the fourth integer : ";
	cin >> integer_2[1];
	cout << "Enter the fifth integer : ";
	cin >> integer_2[2];
	int sum = integer_1[1] + integer_1[2] + integer_1[3] + integer_2[1] + integer_2[2];
	cout << "The sum of all integers is : " << sum;
}