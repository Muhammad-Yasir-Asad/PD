#include <iostream>
#include <windows.h>
using namespace std;

//Function Declaration
void gotoxy(int, int);
void printMaze();

main()
{
	
	system("cls");	//clear screen
	printMaze();	//printing maze on console

}

void printMaze()
{
	
	cout << "#####################" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#                   #" << endl;
	cout << "#####################" << endl;

}

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}