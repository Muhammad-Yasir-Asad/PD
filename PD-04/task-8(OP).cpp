#include <iostream>
using namespace std;

//Function Declaration
void printMenu();
void calculateAggregate();
void compareMarks();

main()
{
	
	int choice;	//variable declaration
	system("cls");	//clear screen
	printMenu();	//calling function
	cout << "Enter your choice(1 - 2) : ";
	cin >> choice;
	
	if(choice == 1)
	{

		calculateAggregate();

	}
	if(choice == 2)
	{

		compareMarks();

	}
	
}

void printMenu()
{
	
	 
	cout << "#        #     #      #         # ######          ###### #     # ###### ######### ####### #         #" << endl;
	cout << "#        #    # #     # #     # # #               #       #   #  #          #     #       # #     # #" << endl;
	cout << "#        #   #####    #  #   #  # ######          ######    #    ######     #     ####    #  #   #  #" << endl;	
	cout << "#        #  #     #   #   # #   #      #               #    #         #     #     #       #   # #   #" << endl;
	cout << " ########  #       #  #    #    # ######          ######    #    ######     #     ####### #    #    #" << endl;
	cout << " " << endl;
	cout << "                           ********************************************                              " << endl;
	cout << "1. Calculate Aggregate" << endl;
	cout << "2. Compare ECAT Marks of Two Students" << endl;
	
} 

void calculateAggregate()
{

	string name;		//variable declaration
	float matricMarks;	//variable declaration
	float interMarks;	//variable declaration
	float ecatMarks;	//variable declaration
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your matric marks out of 1100 : ";
	cin >> matricMarks;
	cout << "Enter your inter marks out of 560: ";
	cin >> interMarks;
	cout << "Enter your Ecat marks out of 400: ";
	cin >> ecatMarks;
	float aggregate = ((matricMarks / 1100) * 30) + ((interMarks / 550) * 30) + ((ecatMarks / 400) * 40);	//calculating aggregate 	
	cout << name << " your aggrregate is " << aggregate;

}

void compareMarks()
{

	string nameStd1;	//variable declaration
	int ecatMarksStd1;	//variable declaration
	string nameStd2;	//variable declaration
	int ecatMarksStd2;	//variable declaration
	cout << "Enter first student name : ";
	cin >> nameStd1;
	cout << "Enter ecat marks of first student : ";
	cin >> ecatMarksStd1; 	
	cout << "Enter second student name : ";
	cin >> nameStd2;
	cout << "Enter ecat marks of second student : ";
	cin >> ecatMarksStd2; 
	if(ecatMarksStd1 > ecatMarksStd2)
	{

		cout << "1                         "<< nameStd1 << "			"<< ecatMarksStd1 << endl;
		cout << "2                         "<< nameStd2 << "			"<< ecatMarksStd2 << endl;

	}                            		

	if(ecatMarksStd2 > ecatMarksStd1)
	{

		cout << "1                         "<< nameStd2 << "			"<< ecatMarksStd2 << endl;
		cout << "2                         "<< nameStd1 << "			"<< ecatMarksStd1 << endl;

	}   



}