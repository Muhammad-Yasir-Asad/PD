#include <iostream>
using namespace std;

//Function Declaration
void checkPosition(int, int);

main()
{

	int myPosition;		//variable declaration
	int friendPosition;	//variable declaration
	cout << "Enter your position : ";
	cin >> myPosition;
	cout << "Enter your friend position : ";
	cin >> friendPosition;
	checkPosition(myPosition, friendPosition);	//passing values to function
	
}

void checkPosition(int myPosition, int friendPosition)
{

	int myFinalposition = myPosition + 6;
	if(myFinalposition > friendPosition)
	{
	
		cout << "True";

	}
	if(myFinalposition < friendPosition)
	{
	
		cout << "False";

	}

}