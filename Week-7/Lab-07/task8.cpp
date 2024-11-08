#include <iostream>
using namespace std;
int calculateMoney( int age,int priceToys,int price);
main()
{
    //Declaring variables
    int age,priceToys,price,result;
    //Inputs
    cout << " Enter Lily age : ";
    cin>>age;
    cout << " Enter price of washing machine ";
    cin>>price;
    cout << " Enter price of each toy : ";
    cin>>priceToys;
    result=calculateMoney (age,priceToys,price);
    if (result>=price)
    {
        cout << " Yes " << result-price ;
    }
 else    {
        cout << " No " << price-result ;
    }
}
int calculateMoney( int age,int priceToys,int price)
{
    int amount=0;
    int moneyGift=10;
    int toys=0;
    for(int i=1; i<=age;i=i+1)
    {
        if(i%2==0)
        {
            amount=amount+moneyGift;
            amount=amount-1;
            moneyGift=moneyGift+10;

        }
        else{
            toys=toys+1;
        }
    }
        amount=amount+(toys*price);
        return amount;
}
        

    


    