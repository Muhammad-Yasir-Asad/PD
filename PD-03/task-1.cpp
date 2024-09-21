#include <iostream>
using namespace std;

main()
{

	int sides;
	cout << "Enter the number of sides of the polygon : ";
	cin >> sides;
	int sum_angles = (sides - 2) * 180;
	cout << "The sum of internal angles of a "<< sides <<"-sided polygon is : " << sum_angles << " degrees";

}