#include <iostream>
using namespace std;

string checkStudentStatus(int, int, int, int);

main()
{
    int startingHour, startingMinutes, studentHour, studentMinutues;
    cout << "Enter exam starting time (hour) : ";
    cin >> startingHour;
    cout << "Enter exam starting time (minutues) : ";
    cin >> startingMinutes;
    cout << "Enter student hour of arrival : ";
    cin >> studentHour;
    cout << "Enter student minutes of arrival : ";
    cin >> studentMinutues;
    string answer = checkStudentStatus(startingHour, startingMinutes, studentHour, studentMinutues);
    cout << answer;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int examMinutes, studentMinutes, remainingTime, remainingHours, remainingMinutes;
    string status;
    examMinutes = (examHour * 60) + examMinute;
    studentMinutes = (studentHour * 60) + studentMinute;
    if(examMinutes > studentMinutes)
    {
        remainingTime = examMinutes - studentMinutes;
        remainingMinutes = remainingTime % 60;
        remainingHours = remainingTime / 60;
        status = "Early \n" + to_string(remainingHours) + " : " + to_string(remainingMinutes) + " hours before the start";
    }
    if(examMinutes < studentMinutes)
    {
        remainingTime = studentMinutes - examMinutes;
        remainingMinutes = remainingTime % 60;
        remainingHours = remainingTime / 60;
        status = "Late \n" + to_string(remainingHours) + " : " + to_string(remainingMinutes) + " hours after the start";
    }
    if(examMinutes == studentMinutes)
    {
        status = "On time";
    }

    return status;

}