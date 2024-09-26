#include <iostream>
using namespace std;

void grade(int marks);

main()
{

	int marks;
	cout << "Enter your score : ";
	cin >> marks;
	grade(marks); 

}

void grade(int marks)
{
	
	if(marks > 50)
	{

		cout << "Pass";

	}
	if(marks <= 50)
	{

		cout << "Fail";

	}

}