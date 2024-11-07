#include <iostream>
using namespace std;

float lowestPrice(int, string);

main()
{
    int kilometers;
    string period;
    cout << "Enter the numbers of kilometers : ";
    cin >> kilometers;
    cout << "Enter the period of the day(day/night) : ";
    cin >> period;
    float total = lowestPrice(kilometers, period);
    cout << "Lowest price for " << kilometers << " kilometers : " << total << " EUR";

}

float lowestPrice(int kilometers, string period)
{
    float fare;
    if(kilometers < 20 && period == "day")
    {
        fare = 0.70 + (kilometers * 0.79);
    }
    else if(kilometers < 20 && period == "night")
    {
        fare = 0.70 + (kilometers * 0.90);
    }
    else if(kilometers > 20 && kilometers < 100)
    {
        fare = kilometers * 0.09;
    }
    else{
        fare = kilometers * 0.06;
    }
    return fare;
}