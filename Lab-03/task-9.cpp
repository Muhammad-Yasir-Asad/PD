#include <iostream>
using namespace std;

main()
{

	int age_years;
	cout << "Enter your age in years : ";
	cin >> age_years;
	int age_months = age_years * 365;
	cout << "Your age in days is approximately " << age_months << " days";

}