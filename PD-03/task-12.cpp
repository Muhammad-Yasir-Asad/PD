#include <iostream>
using namespace std;

main()
{

	int square_meters;
	int width;
	int height;
	cout << "Number of square meters you can paint : ";
	cin >> square_meters;
	cout << "Width of the single wall (in meters) : ";
	cin >> width;
	cout << "Height of the single wall (in meters) : ";
	cin >> height;
	int number_walls = (square_meters) / (width * height);
	cout << "Number of walls you can paint : " << number_walls; 

}