#include <iostream>
using namespace std;

main()
{

	float volts;
	float current;
	cout << "Enter voltage (in volts) : ";
	cin >> volts;
	cout << "Enter current (in amperes) : ";
	cin >> current;
	float power = volts * current;
	cout << "The power is " << power << " watts";

}