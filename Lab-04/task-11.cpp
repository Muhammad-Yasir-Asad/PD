#include <iostream>
using namespace std;

void print_name(string name);

main()
{
	string name;
	cout << "Enter your name : ";
	cin >> name;
	while(true)
	{

		print_name(name);

	}
}

void print_name(string name)
{

	cout << name;

}