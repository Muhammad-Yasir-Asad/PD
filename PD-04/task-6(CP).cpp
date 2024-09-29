#include <iostream>
using namespace std;

//Function Declaration
void check(int, int);

main()
{
	
	int minutes;	//variable declaration
	int hours;	//variable declaration
	cout << "Enter the number of minutes : ";
	cin >> minutes;
	cout << "Enter the number of hours : ";
	cin >> hours;
	check(minutes, hours);	//passing values to function

}

void check(int minutes, int hours)
{
	
	int finalMinutes = hours * 60; //conversion of hours to minutes
	if(finalMinutes > minutes)
	{
		
		cout << hours << " hours";

	}
	if(minutes > finalMinutes)
	{
		cout << minutes << " minutes";
	
	}

}