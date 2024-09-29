#include <iostream>
using namespace std;

//Function decleration
void negation(string);

main()
{

	string statement;	//variable declaration
	cout << "Enter 'true' or 'false' : ";
	cin >> statement;
	negation(statement);	//passing value to function 
	
}

void negation(string statement)
{

	if(statement == "true")
	{

		cout << "False";
		
	}
	if(statement == "false")
	{
		
		cout << "True";
	
	}

}