#include <iostream>
using namespace std;

main()
{

	int size;
	int cost;
	int area;
	cout << "Enter the size of the fertilizer bag in pounds : " ;
	cin >> size;
	cout << "Enter the cost of the bag : $";
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by bag : ";
	cin >> area;
	int cost_size = cost / size;
	cout << "Cost of fertilizer per pound : $" << cost_size << endl;
	int cost_area = cost / area;
	cout << "Cost of fertilizing per square foot : $" << cost_area;

}

