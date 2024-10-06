#include <iostream>
#include <conio.h>
using namespace std;

string projectTimeCalculation(int, int, int);      //function declaration

main()
{

    int hours, days, workers;                   //variable declaration
    cout << "Enter the needed hours : ";
    cin >> hours;
    cout << "Enter the days that the firm has : ";
    cin >> days;
    cout << "Enter the number of all workers : ";
    cin >> workers;
    string time = projectTimeCalculation(hours, days, workers);     //passing value to function and storing that value in variable
    cout << time;

}

string projectTimeCalculation(int hours, int days, int workers)
{

    int workingHours = days * workers * 10;                                 //total working hours
    int totalWorkingHours = workingHours - ((workingHours * 10 ) / 100);    //total hours after substracting learning time
    if(hours > totalWorkingHours)
    {

        int remainHours = hours - totalWorkingHours;         
        return "Not enough time ! " + to_string(remainHours) + " hours needed";

    }
    if(hours < totalWorkingHours)
    {

        int leftHours = totalWorkingHours - hours;
        return  "Not enough time ! " + to_string(leftHours) + " hours left";

    }

}