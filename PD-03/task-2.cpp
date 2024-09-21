#include <iostream>
using namespace std;

main()
{

	int numbers;
	int frames;	
	cout << "Number of Minutes : ";
	cin >> numbers;
	cout << "Frames per second : ";
	cin >> frames;
	int total_frames = numbers * frames * 60;
	cout << "Total Number of Frames : " << total_frames;

}