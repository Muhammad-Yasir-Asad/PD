#include <iostream>
using namespace std;

int pow(int, int);

main()
{
    int base;
    int exponent;
    cout << "Enter the base number : ";
    cin >> base;
    cout << "Enter the exponent : ";
    cin >> exponent;
    int result = pow(base, exponent);
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