#include <iostream>
using namespace std;

string dedcideActivity(string, string);

main()
{
    string temperature, humidity;
    cout << "Enter temperature (warm or cold) : ";
    cin >> temperature;
    cout << "Enter the humidity (dry or humid) : ";
    cin >> humidity;
    string answer = dedcideActivity(temperature, humidity);
    cout << answer;
}

string dedcideActivity(string temperature, string humidity)
{
    string decision;
    if(temperature == "warm" && humidity == "dry")
    {
        decision = "Play Tennis";
    }
    else if(temperature == "warm" && humidity == "humid")
    {
        decision = "Swim";
    }
    else if(temperature == "cold" && humidity == "dry")
    {
        decision = "Play Basketball";
    }
    else{
        decision = "Watch Tv";
    }
    return decision;
}