#include <iostream>
using namespace std;

void rubick(int stickers);

main()
{

	int stickers;
	cout << "Enter the side length of the Rubik's Cube : ";
	cin >> stickers;
	rubick(stickers);

}

void rubick(int stickers)
{

	int num_stickers = stickers * 6 * stickers;
	cout << "Number of stickers Needed : " << num_stickers;

}