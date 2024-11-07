#include <iostream>
using namespace std;

int pairty(int);

main()
{

    int number;
    cout << "Enter the 3-digit number : ";
    cin >> number;
    int result = pairty(number);
    cout << result;

}

int pairty(int number)
{

    int ones = number % 10;
    int tens = (number / 10) % 10;
    int hundred = number / 100;
    int sum = ones + tens + hundred;
    int answer = 0;
    if(number % 2 == 0 && sum % 2 == 0)
    {

        answer = 1;

    }
    return answer;  

}