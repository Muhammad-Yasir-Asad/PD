#include <iostream>
using namespace std;

int pow(int, int);    //Function Declaration

main()
{
    int base;        //variable declaration
    int exponent;    //variable declaration
    cout << "Enter the base number : ";
    cin >> base;
    cout << "Enter the exponent : ";
    cin >> exponent;
    int result = pow(base, exponent);    //passing values to function and storing return value in variable
    cout << result;
}

int pow(int base, int exponent)
{
    int result = 1;
    int n = 1;
    while(exponent >= n)
    {
        result = result * base;
        n++;
        
    }
    return(result);
    

}
