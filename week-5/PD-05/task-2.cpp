#include <iostream>
#include <string.h>
using namespace std;

string volumePyramid(float, float, float, string); //Function Declaration

main()
{
	
	float length, width, height;					//variable declaration			
	string units;
	cout << "Enter the length of the pyramid (in meters) : ";
	cin >> length;
	cout << "Enter the width of the pyramid (in meters) : ";
	cin >> width;
	cout << "Enter the height of the pyramid (in meters) : ";
	cin >> height;
	cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers) : ";
	cin >> units;
	string volume = volumePyramid(length, width, height, units);		//passing value to fuunction and storing return value in variable
	cout << volume; 
	
}

string volumePyramid(float length, float width, float height, string units)
{
	
	float volume = (length * width * height) / 3;				//calculating volume
	if(units == "meters")
	{
		string volume1 = "The volume of the pyramid is : " + to_string(volume) + " cubic meters";
		return volume1;
		
	}
	if(units == "millimeters")
	{
		
		volume = volume * 10000000;
		string volume1 = "The volume of the pyramid is : " + to_string(volume) + " cubic meters";
		return volume1;
		
	}
	if(units == "centimeters")
	{
		
		volume = volume * 1000000;
		string volume1 = "The volume of the pyramid is : " + to_string(volume) + " cubic meters";
		return volume1;
		
	}
	if(units == "kilometers")
	{
		
		volume = volume / 1000000000;
		string volume1 = "The volume of the pyramid is : " + to_string(volume) + " cubic meters";
		return volume1;
		
	}
}
