#include <iostream>
using namespace std;

//Function Declaration
void pet(int);

main()
{

	int holidays;	//variable declaration
	cout << "Holidays : ";
	cin >> holidays;
	pet(holidays);	//passing value to function

}

void pet(int holidays)
{
	
	int workingDays = 365 - holidays;				//calculating working days
	int timeForGames = (workingDays * 63) + (holidays * 127);	//calculating time for games
	if(timeForGames <= 30000)
	{
		   
		int  time = 30000 - timeForGames;	//calculating remaining time in minutes
		float timeHours = time / 60;		//calculating time in hours
		int timeMinutes = time % 60;		//calculating time in minutes
		cout << "Tom sleeps well" << endl;
		cout << timeHours << " hours and " << timeMinutes << " minutes less for play"; 

	}
	if(timeForGames > 30000)
	{
 		
		int  time = timeForGames - 30000;	//calculating remaining time in minutes
		float timeHours = time / 60;		//calculating time in hours
		int timeMinutes = time % 60;		//calculating time in minutes
		cout << "Tom will run away" << endl;
		cout << timeHours << " hours and " << timeMinutes << " minutes for play"; 

	}

}	