#include <iostream>
using namespace std;

string checkSpeed(float);

main()
{
    float speed;
    cout << "Enter the speed : ";
    cin >> speed;
    string answer = checkSpeed(speed);
    cout << answer;
}

string checkSpeed(float speed)
{

    string answer;
    if(speed < 10)
    {
        answer = "slow";
    }
    if(speed >= 10 && speed < 50)
    {
        answer = "average";
    }
    if(speed >= 50 && speed < 150)
    {
        answer = "fast";
    }
    if(speed >= 150 && speed < 1000)
    {
        answer = "ultra-fast";
    }
    if(speed >= 1000)
    {
        answer = "extremly fast";
    }
    return answer;
}
