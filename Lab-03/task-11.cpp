#include <iostream>
using namespace std;

main()
{

	int population;
	int n;
	cout << "Enter the current world population : ";
	cin >> population;
	cout << "Enter the monthly birth rate (number of births per month) : ";
	cin >> n;
	int population_decade = population + (360 * n);
	cout << "The population in three decades will be : " << population_decade;

}