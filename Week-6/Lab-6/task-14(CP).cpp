#include <iostream>
using namespace std;

float calculateCost(float, string, int);

main()
{

    float budget;
    string category;
    int numPeople;
    cout << "Enter the budget : ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal) : ";
    cin >> category;
    cout << "Enter the number of people in group : ";
    cin >> numPeople;
    float cost = calculateCost(budget, category, numPeople);
    cout << cost;

}

float calculateCost(float budget, string category, int numPeople)
{
    float ticketCost;
    float totalCost;
    string answer;
    if(category == "normal")
    {
        ticketCost = numPeople * 249.99; 
        if(numPeople >= 1 && numPeople <= 4)
        {
            totalCost = (budget - (budget * 0.75)) - 249.99;
        }
        if(numPeople >= 5 && numPeople <= 9)
        {
            totalCost = (budget - (budget * 0.6)) - 249.99;
        }
        if(numPeople >= 10 && numPeople <= 24)
        {
            totalCost = (budget - (budget * 0.5)) - 249.99;
        }
        if(numPeople >= 25 && numPeople <= 49)
        {
            totalCost = (budget - (budget * 0.4)) - 249.99;
        }
        if(numPeople >= 50)
        {
            totalCost = (budget - (budget * 0.25)) - 249.99;
        }        
    }    
    if(category == "vip")
    {
        ticketCost = numPeople * 499.99;
        if(numPeople >= 1 && numPeople <= 4)
        {
            totalCost = (budget - (budget * 0.75)) - 499.99;
        }
        if(numPeople >= 5 && numPeople <= 9)
        {
            totalCost = (budget - (budget * 0.6)) - 499.99;
        }
        if(numPeople >= 10 && numPeople <= 24)
        {
            totalCost = (budget - (budget * 0.5)) - 499.99;
        }
        if(numPeople >= 25 && numPeople <= 49)
        {
            totalCost = (budget - (budget * 0.4)) - 499.99;
        }
        if(numPeople >= 50)
        {
            totalCost = (budget - (budget * 0.25)) - 499.99;
        }    
    }

    float finalBuget = totalCost + ticketCost;
    float remaining_budget = budget - finalBuget;
    return remaining_budget;

}    
    
