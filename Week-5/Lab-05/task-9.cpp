#include <iostream>
using namespace std;

string timeTravel(int, int);    //function declaration

main()
{

    int hours;                 //variable declaration
    int minutes;               //variable declaration 
    cout << "Enter Hours : ";
    cin >> hours;
    cout << "Enter Minutes : ";
    cin >> minutes;
    string time =  timeTravel(hours, minutes);    //final time after time travel
    cout << time;

}

string timeTravel(int hours, int minutes)
{

    minutes = minutes + 15;    //adds 15 to original minutes
    if(minutes <= 59)
    {

        string result = to_string(hours) + " : " + to_string(minutes);
        return result;

    }
    if(hours <= 22 && minutes > 59)
    {

        hours = hours + 1;        //if minutes increses from 59 hours will be changed
        minutes = minutes - 60;   //remanig minutes in next hour 
        string result = to_string(hours) + " : " + to_string(minutes);
        return result; 

    }
    if(hours >= 22 & minutes > 59)
    {

        hours = (hours + 1) - 24;
        minutes = minutes - 60;     //remanig minutes in next hour
        string result = to_string(hours) + " : " + to_string(minutes);
        return result; 

    }
}
