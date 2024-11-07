#include <iostream>
using namespace std;

int findGreater (int, int, int);

main()
{

    int num1, num2, num3;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter the third number : ";
    cin >> num3;
    int answer = findGreater(num1, num2, num3);    
    cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is : " << answer;

}

int findGreater(int num1, int num2, int num3)
{

    int greater = num1;
    if(num2 > num1 && num2 > num3)
    {

        greater = num2;

    }
    if(num3 > num1 && num3 > num1)
    {

        greater = num3;

    }
    return greater;

}

