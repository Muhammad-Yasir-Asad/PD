#include <iostream>
#include <math.h>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
    string yearType;
    int holidays, hometownWeekends;
    cout << "Enter year type : ";
    cin >> yearType;
    cout << "Enter number of holidays : ";
    cin >> holidays;
    cout << "Enter number of weekends : ";
    cin >> hometownWeekends;
    int volleyballGames = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << volleyballGames;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weeks = 48 - hometownWeekends;
    float weekVolleyBall = weeks * 0.75;
    float holidaysVolleyBall = holidays * (2.0/3.0);
    float result = hometownWeekends + weekVolleyBall + holidaysVolleyBall;
    if(yearType == "leap")
    {
        result = result + (result * 15) / 100; 
    }
    return static_cast<int>(floor(result));
}