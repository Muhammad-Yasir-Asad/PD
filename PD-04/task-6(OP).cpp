#include <iostream>
#include <windows.h>
using namespace std;

//Function decleration
void gotoxy(int x, int y);
void printH();
void printA();
void printS();
void printN();

main()
{
	
	system("cls");	//clear screen
	gotoxy(55, 14);	//moving cursor
	printH();	//print H
	gotoxy(55, 15);	//moving cursor
	printA();	//print A
	gotoxy(55, 16);	//moving cursor
	printS();	//print S
	gotoxy(55, 17);	//moving cursor
	printS();	//print S
	gotoxy(55, 18);	//moving cursor
	printA();	//print A
	gotoxy(55, 19);	//moving cursor
	printN();	//print N
	gotoxy(0, 31);	//moving cursor to end of terminal
	
}

void printH()
{
	
	cout << "H";
	
}

void printA()
{
	
	cout << "A";
	
}

void printS()
{
	
	cout << "S";
	
}

void printN()
{
	
	cout << "N";
	
}

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}