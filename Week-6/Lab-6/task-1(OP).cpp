#include <iostream>
using namespace std;

string check(int, int);

main()
{

    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    string answer = check(num1, num2);
    cout << answer;

}

string check(int num1, int num2)
{

    string result = "0";
    if(num1 > num2)
    {

        result = "1";

    }
    return result;
}