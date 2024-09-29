#include <iostream>
#include <windows.h>
using namespace std;

//Function Declaration
void gotoxy(int x, int y);
void printMaze();
void movePlayer(int x, int y);

main()
{
	
	system("cls");		//clear screen
	int x = 3;		//x-axis coordinates
	int y = 4;		//y-axis coordinates
	printMaze();		//print maze
	movePlayer(x, y);	//passing argument to moveplayer() function
	

}

void movePlayer(int x, int y)
{
	
	gotoxy(x, y);	//passing values to function
	cout << "P";	//print P on screen
	Sleep(100);	//pausing function for smooth movement	
	gotoxy(0, 10);	//moving cursor below maze		

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