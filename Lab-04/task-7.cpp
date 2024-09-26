#include <iostream>
using namespace std;

void even(int num);

main()
{

	int num;
	cout << "Enter the number : ";
	cin >> num;
	even(num);

}

void even(int num)
{

	if(num % 2 == 0 )
	{

		cout << "Number " << num << " is even";

	}
	if(num % 2 != 0 )
	{

		cout << "Number " << num << " is odd";

	}

}