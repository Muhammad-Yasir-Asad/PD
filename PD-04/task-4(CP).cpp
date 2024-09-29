#include <iostream>
using namespace std;

//Function declaration
void checkSpeed(int);

main()
{

	int speed;	//variable declaration
	cout << "Speed : ";
	cin >> speed;	
	checkSpeed(speed);	//passing value of variable to function

}

void checkSpeed(int speed)
{

	if(speed > 100)
	{

		cout << "Halt... You will be CHALLANGED!!!";

	}
	if(speed <= 100)
	{

		cout << "Perfect! You're going good";

	}
		
}

