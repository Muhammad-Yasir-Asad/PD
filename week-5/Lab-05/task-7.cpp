#include <iostream>
using namespace std;

//Function Declaration
string isSymmetrical(int);

main()
{

    int number;                                 //variable declaration
    cout << "Enter a three-digit number : ";    //output on screen
    cin >> number;                              //input number
    string result = isSymmetrical(number);      //passing value to function and storing processed value in variable
    if(result == "true")
    {

        cout << "The number is symmterical";

    }
    if(result == "false")
    {

        cout << "The number is not symmterical";

    }

}

string isSymmetrical(int number)
{

    int ones = number % 10;         //determining third digit
    int hundreds = number / 100;    //determinig first digit
    if(ones == hundreds)
    {
        return "true";  
    }
    if(ones != hundreds)
    {
        return "false"; 
    }

}