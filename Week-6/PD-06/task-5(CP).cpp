#include <iostream>
using namespace std;

float calculateFruitPrice(string, string, double);

main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout << "Enter the fruit name : ";
    cin >> fruit;
    if(fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")
    {
        cout << "Wrong input";
        return 0;
    }
    cout << "Enter the day of the week : ";
    cin >> dayOfWeek;
    if(dayOfWeek != "monday" && dayOfWeek != "tuesday" && dayOfWeek != "wednesday" && dayOfWeek != "thursday" && dayOfWeek != "friday" && dayOfWeek != "saturday" && dayOfWeek != "sunday")
    {
        cout << "Wrong input";
        return 0;
    }
    cout << "Enter the quantity : ";
    cin >> quantity;

    float finalPrice =  calculateFruitPrice(fruit, dayOfWeek, quantity);
    cout << finalPrice;
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    string day;
    float price;
    if(dayOfWeek == "monday" || dayOfWeek == "tuesday" || dayOfWeek == "wednesday" || dayOfWeek == "thursday" || dayOfWeek == "friday")
    {
        day = "weekday";
    }
    else if(dayOfWeek == "saturday" || dayOfWeek == "sunday")
    {
        day = "weekend";
    }

    if(day == "weekday")
    {
        if(fruit == "banana")
        {
            price = quantity * 2.50;
        }
        else if(fruit == "apple")
        {
            price = quantity * 1.20;
        }
        else if(fruit == "orange")
        {
            price = quantity * 0.85;
        }
        else if(fruit == "grapefruit")
        {
            price = quantity * 1.45;
        }
        else if(fruit == "kiwi")
        {
            price = quantity * 2.70;
        }
        else if(fruit == "pineapple")
        {
            price = quantity * 5.50;
        }
        else if(fruit == "grapes")
        {
            price = quantity * 3.85;
        }
    }

    if(day == "weekend")
    {
        if(fruit == "banana")
        {
            price = quantity * 2.70;
        }
        else if(fruit == "apple")
        {
            price = quantity * 1.25;
        }
        else if(fruit == "orange")
        {
            price = quantity * 0.90;
        }
        else if(fruit == "grapefruit")
        {
            price = quantity * 1.60;
        }
        else if(fruit == "kiwi")
        {
            price = quantity * 3.00;
        }
        else if(fruit == "pineapple")
        {
            price = quantity * 5.60;
        }
        else if(fruit == "grapes")
        {
            price = quantity * 4.20;
        }
    }
    return price;
}

