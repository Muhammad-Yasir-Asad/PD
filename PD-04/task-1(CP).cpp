#include <iostream>
using namespace std;

//Function decleration
void checkFunction(int, int);

main()
{

	int num1;	//Function Decelaration
	int num2;	//Function Decelaration
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	checkFunction(num1, num2);	//passing values to function

}

void checkFunction(int num1, int num2)
{

	if(num1 == num2)
	{

		cout << "True";
		
	}
	if(num1 != num2)
	{
		
		cout << "False";
	
	}

}