#include <iostream>
#include <windows.h>
using namespace std;

// Function Declaration
void gotoxy(int x, int y);
void printMaze();
void movePlayer(int x, int y);

main()
{
	
	system("cls");	//clear screen
	int x = 10;	//x-axis coordinates
	int y = 1;	//y-axis coordinates
	printMaze();	//print maze
	while(true)
	{
		while(y < 7)
		{

			movePlayer(x, y);	//moving cursor 
			y = y + 1;		//moving cursor to next

			if(y == 7)
			{
			
				while(y > 1)
				{
				
					movePlayer(x, y);	//moving cursor
					y = y - 1;		//moving cursor to previous

				}

			}
			
		}	

	}

}

void movePlayer(int x, int y)
{
	
	gotoxy(x, y);	//move cursor
	cout << "P";	//printing P
	Sleep(100);	//delay for smooth animation
	gotoxy(x, y);	//move cursor 
	cout << " ";	//clearing previous P
	

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