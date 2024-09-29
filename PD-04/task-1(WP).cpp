#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

main()
{
	
	system("cls");	//clearing screen
	cout << "Test";	
	gotoxy(15, 15);	//passing value of x and y to function
	cout << " My Name is Muhammad-Yasir-Asad";

}


