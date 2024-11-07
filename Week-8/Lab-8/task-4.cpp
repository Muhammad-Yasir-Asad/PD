#include<iostream>
using namespace std;
bool isPrime(int number);
int primeNumbers(int number);
main()
{
    int number=0,totalPrimeNumber=0;

    cout << "Enter a number : ";
    cin >> number;

    totalPrimeNumber = primeNumbers(number);

    cout << totalPrimeNumber;
}
bool isPrime(int number)
{
    for(int counter=2; counter < number ; counter = counter +1)
    {
        if (number%counter==0)
        {
            return false;
        }
    }
    return true;
}
int primeNumbers(int number)
{
    int totalPrimeNumber=0;

    for(int counter = 2 ;counter<number;counter=counter+1)
    {
        if(isPrime(counter))
        {
            totalPrimeNumber=totalPrimeNumber+1;
        }
    }
    return totalPrimeNumber;
}
