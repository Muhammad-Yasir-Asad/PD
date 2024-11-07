#include <iostream>
#include <cmath>
using namespace std;
int makeBinary(int number);
int countOne(int binaryForm);
string firstOutput(int totalOne);
string isPrime(int totalOne);
main()
{
    int number = 0, binaryForm = 0, totalOne = 0;
    ;

    cout << "Enter a number : ";
    cin >> number;

    binaryForm = makeBinary(number);
    totalOne = countOne(binaryForm);

    if (isPrime(totalOne) != " ")
    {
    cout << firstOutput(totalOne) << " , " << isPrime(totalOne);
    }
    else
    {
         cout << firstOutput(totalOne);
    }
    
}

int makeBinary(int number)
{
    int binaryForm = 0, localNumber = number;

    if (localNumber == 0)
    {
        return 0;
    }

    while (localNumber > 0)
    {
        binaryForm = (binaryForm * 10) + (localNumber % 2);
        localNumber = localNumber / 2;
    }
    return binaryForm;
}

int countOne(int binaryForm)
{
    int count = 0;
    while (binaryForm != 0)
    {
        if (binaryForm % 10 == 1)
        {
            count = count + 1;
        }
        binaryForm = binaryForm / 10;
    }
    return count;
}

string firstOutput(int totalOne)
{
    if (totalOne % 2 == 0)
    {
        return "Evil";
    }
    else
    {
        return "Odious";
    }
}

string isPrime(int totalOne)
{
    for (int counter = 2; counter < totalOne; counter = counter + 1)
    {
        if (totalOne % counter == 0)
        {
            return " ";
        }
    }
    return "Pernicious";
}