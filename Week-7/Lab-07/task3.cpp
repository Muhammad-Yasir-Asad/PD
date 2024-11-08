#include <iostream>
using namespace std;
int totalDigits (int number);
main()
{
    //Declaring variables
    int number,result;
    //Inputs
    cout << " Enter number ";
    cin>>number;
    result=totalDigits(number);
    cout << result;
}
int totalDigits (int number)
{
    int count=0;
    while(number!=0)
    {
        number=number/10;
        count=count+1;
    }
    return count;
}
