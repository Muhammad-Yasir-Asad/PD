#include <iostream>
using namespace std;

float priceAfterDiscount(string, string, float);

main()
{

    string day, month;
    float purchaseAmount;
    cout << "Enter purchase day : ";
    cin >> day;
    cout << "Enter purchase month : ";
    cin >> month;
    cout << "Enter purchase amount : ";
    cin >> purchaseAmount;
    float finalAmount = priceAfterDiscount(day, month, purchaseAmount);
    cout << "Payable amount after discout : " << finalAmount;

}

float priceAfterDiscount(string day, string month, float purchaseAmount)
{

    float final = purchaseAmount;
    if(day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {

        final = purchaseAmount - ((purchaseAmount * 10) / 100);

    }
   
    return final;

}
