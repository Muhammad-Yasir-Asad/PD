#include <iostream>
using namespace std;
int calculatePrice (int money,int year);
main()
{
    //Declaring variables
    int money,year,result;
    //Inputs
    cout << " Enter money :  ";
    cin>>money;
    cout << " Enter year ";
    cin>>year;
    result=calculatePrice (money,year);
    if (result>=0)
    {
        cout << " Yes ! He will live a carefree life and will have " << result << " dollars left  " ;

    }
    else
    {
        cout << "He will need "  << result << " Dollars to survive " ;
    }

}
int calculatePrice (int money,int year)
{
    int age=18;
    int amount;
    for(int i=1800;i<=year;i=i+1)
    {
        if(i%2==0)
        {
            money-=12000;
            
        }
        else  {
            amount=12000+50*age;
            money=money-amount;
        }
        age=age+1;
        return money;
    
}
}