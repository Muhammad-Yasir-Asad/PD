#include <iostream>
using namespace std;

int minimum(int, int);

main()
{

    float min;
    float num1;
    float num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    min = minimum(num1, num2);
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