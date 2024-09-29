#include <iostream>
using namespace std;

//Function Declaration
void tpChecker(int, int);

main()
{

	int people;	//variable declaration
	int tp;		//variable declaration
	cout << "Number of people in the househlod : ";
	cin >> people;
	cout << "Number of rolls of tissue papers : ";
	cin >> tp;
	tpChecker(people, tp);	//passing value to function	

}

void tpChecker(int people, int tp)
{
	
	int sheets = tp * 500;			//calculation of total number of sheets
	int totalSheets = people * 57;		//calculation of total number of sheets used by people
	int days = sheets / totalSheets;	//calculation of days tissue roll will last
	cout << "Your tissue papers will last " << days << " days, buy more!";	

}	