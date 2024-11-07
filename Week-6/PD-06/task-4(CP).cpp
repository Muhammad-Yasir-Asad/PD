#include <iostream>
using namespace std;

float cellularCompany(char, char, int);
string name(char);

main()
{

    char service, time;
    int minutes;
    string serviceType;
    cout << "Enter the service code(R/r for regular, P/p for premium) : ";
    cin >> service;

    if(service != 'R' && service != 'r' && service != 'P' && service != 'p')
    {
        cout << "Wrong input";
        return 0;
    }

    if(service == 'P' || service == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night) : ";
        cin >> time;
        if(time != 'D' && time != 'd' && time != 'N' && time != 'n')
        {
        cout << "Wrong input";
        return 0;
        }
    }

    cout << "Enter the number of minutes used : ";
    cin >> minutes;
    serviceType = name(service);    
    cout << "Service Type : " << serviceType << endl;
    cout << "Total Minutes Used : " << minutes << endl;
    float finalAmount = cellularCompany(service, time, minutes);
    cout << "Amount Due : " << finalAmount;

}

float cellularCompany(char service, char time, int minutes)
{
    float finalAmount;
    float subscription;
    if(service == 'R' || service == 'r')
    {
        subscription = 10;
        if(minutes <= 50)
        {
            finalAmount = subscription;
        }
        else
        {
            minutes = minutes - 50;
            finalAmount = subscription + (minutes * 0.20); 
        }
    }
    if(service == 'P' || service == 'p')
    {
        subscription = 25;
        if(time == 'D' || time == 'd')
        {
            if(minutes <= 75)
            {
                finalAmount = subscription;
            }
            else
            {
                minutes = minutes - 75;
                finalAmount = subscription + (minutes * 0.10);
            }
        }
    }
        if(time == 'N' || time == 'n')
        {
            if(minutes <= 100)
            {
                finalAmount = subscription;
            }
            else
            {
                minutes = minutes - 100;
                finalAmount = minutes * 0.05;
            }
        }
    return finalAmount;
}

string name(char service)
{
    string answer;
    if(service == 'P' || service == 'p')
    {
        answer = "Premeium";
    }
    if(service == 'R' || service == 'r')
    {
        answer = "Regular";
    }
    return answer;
}
