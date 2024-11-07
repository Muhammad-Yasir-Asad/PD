#include <iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month(May, June, July, August, September, October) : ";
    cin >> month;
    cout << "Enter the number of stays : ";
    cin >> numberOfStays;
    calculateHotelPrices(month, numberOfStays);
}

string calculateHotelPrices(string month, int numberOfStays)
{
    float priceStudio, priceApartment;
    
    if(month == "may" || month == "october")
    {
        priceStudio = numberOfStays * 50;
        priceApartment = numberOfStays * 65;
        if(numberOfStays > 7 && numberOfStays <= 14)
        {
            priceStudio = priceStudio - ((priceStudio * 5) / 100);
        }
        if(numberOfStays > 14)
        {
            priceStudio = priceStudio - ((priceStudio * 30) / 100);
        }
    }
    else if(month == "june" || month == "september")
    {
        priceStudio = numberOfStays * 75.20;
        priceApartment = numberOfStays * 68.70;
        if(numberOfStays > 14)
        {
            priceStudio = priceStudio - ((priceStudio * 20) / 100);
        }
    }
    else if(month == "july" || month == "august")
    {
        priceStudio = numberOfStays * 76;
        priceApartment = numberOfStays * 77;
    }

    if(numberOfStays > 14)
    {
        priceApartment = priceApartment - ((priceApartment * 10) / 100);
    }

    cout << "Apartment : " << priceApartment << "$" << endl;
    cout << "Studio : " << priceStudio << "$";
}