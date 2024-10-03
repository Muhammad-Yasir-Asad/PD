#include <iostream>
using namespace std;

string timeTravel(int, int);

main()
{

    int hours;
    int minutes;
    cout << "Enter Hours : ";
    cin >> hours;
    cout << "Enter Minutes : ";
    cin >> minutes;
    string time =  timeTravel(hours, minutes);
    cout << time;

}

string timeTravel(int hours, int minutes)
{

    minutes = minutes + 15;
    if(minutes <= 59)
    {

        string result = to_string(hours) + " : " + to_string(minutes);
        return result;

    }
    if(hours <= 22 && minutes > 59)
    {

        hours = hours + 1;
        minutes = minutes - 60;
        string result = to_string(hours) + " : " + to_string(minutes);
        return result; 

    }
    if(hours >= 22 & minutes > 59)
    {

        hours = (hours + 1) - 24;
        minutes = minutes - 60;
        string result = to_string(hours) + " : " + to_string(minutes);
        return result; 

    }
}