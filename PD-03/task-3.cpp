#include <iostream>
using namespace std;

main()
{

	int initial_velocity;
	int acceleration;
	int time;
	cout << "Enter Initial Velocity (m/s) : ";
	cin >> initial_velocity;
	cout << "Enter Acceleration (m/s^2) : ";
	cin >> acceleration;
	cout << "Enter time (s) : ";
	cin >> time;
	int final_velocity = (acceleration * time) + initial_velocity;
	cout << "Final Velocity (m/s) : " << final_velocity;

}