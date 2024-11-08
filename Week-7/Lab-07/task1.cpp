#include <iostream>
using namespace std;
void printTable (int number);
main()
{
    //Variables
    int number;
    //Inputs
    cout << " Enter a number ";
    cin>>number;
    printTable (number);
    
}
void printTable (int number)
{
    int multiple;
    for (int i=1;i<=10;i=i+1)
    {
        multiple=number*i;
        cout <<number <<"*" <<i  <<"=" <<multiple <<endl ;
    }
}
