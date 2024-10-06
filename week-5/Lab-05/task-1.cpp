#include <iostream>
using namespace std;

int minimum(int, int);    //Function Declaration

main()
{

    float min;    //varaible declaration
    float num1;   //varaible declaration 
    float num2;   //varaible declaration 
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    min = minimum(num1, num2);        //pass value to function and stores return value in variable
    cout << "The minimum of " << num1 << " and " << num2 << " is : " << min;
    
}

int minimum(int num1, int num2)
{
    if(num1 < num2)
    {
        return num1;
    }
    if(num1 > num2)
    {
        return num2;
    }
}
