#include <iostream>
#include <windows.h>
using namespace std;

//Function Declaration
void gotoxy(int x, int y);
void printMaze();
void movePlayer(int x, int y);

main()
{
	
	system("cls");	//clear screen
	int x = 1;	//x-axis coordinates
	int y = 4;	//y-axis coordinates
	printMaze();	//print maze
	while(true)
	{

		movePlayer(x, y);
		x = x + 1;
				
	}

}

void movePlayer(int x, int y)
{
	
	gotoxy(x, y);	//passing value of x and y to function
	cout << "P";	//print P on screen
	Sleep(100);	//pausing function 1 second for smooth movement		
	
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