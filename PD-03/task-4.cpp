#include <iostream>
using namespace std;

main()
{

	float imposter;
	float player;
	cout << "Enter Imposter Count : ";
	cin >> imposter;
	cout << "Enter Player Count : ";
	cin >> player;
	float chances = (imposter / player) * 100;
	cout << "Chances of being an imposter : " << chances << "%";

}