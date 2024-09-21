#include <iostream>
using namespace std;

main()
{

	int age;
	int moved;
	cout << "Enter the person's age : ";
	cin >> age;
	cout << "Enter the number of times they have moved : ";
	cin >> moved;
	int total_houses = moved + 1;
	int average = age / total_houses;
	cout << "Average number of years lived in the same house : " << average;

}