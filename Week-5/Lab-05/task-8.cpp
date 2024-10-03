#include <iostream>
using namespace std;

//function decleration
string checkFunction(int);

main()
{

    int number;                                 //varaiable declaration
    cout << "Enter a five digit number : ";     //output on screen
    cin >> number;                              //input number from user 
    string result = checkFunction(number);      //passing values to function and storing return value in variable
    cout << result;                             //printing result on screen

}

string checkFunction(int number)
{

    int tenThousand = number / 10000;                           //determining tenthousnd place number
    int thosund = (number % 10000) / 1000;                      //determining thousnd place number
    int hundred = (number % 1000) / 100;                        //determining hundred place number
    int tens = (number % 100) / 10;                             //determining tens place number
    int ones = number % 10;                                     //determining ones place number
    int sum = tenThousand + thosund + hundred + tens + ones;    //sum of all numbers
    if(sum % 2 == 0)
    {

        return "Evenish";

    }
    if(sum % 2 != 0)
    {

        return "Oddish";

    }

}