#include <iostream>
#include <windows.h>
using namespace std;

//Function decleration
void gotoxy(int x, int y);
void printName();

main()
{
	
	system("cls");	//clear screen
	gotoxy(47, 18);	//moving cursor in middle 
	printName();	//printing name
	gotoxy(0, 31);	//moving cursor to end of cmd

}

void printName()
{
	
	cout << "MUHAMMAD-YASIR-ASAD";
	
}

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}