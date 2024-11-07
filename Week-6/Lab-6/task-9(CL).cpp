#include <iostream>
using namespace std;

string checkTitle(int, char);

main()
{

    int age;
    char gender;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your gender (m/f) : ";
    cin >> gender;
    string result = checkTitle(age, gender);
    cout << "Your personal title is : " << result;

}

string checkTitle(int age, char gender)
{

    string gen;
    if(age >= 16 && gender == 'm')
    {

        gen = "Mr.";

    }
    if(age < 16 && gender == 'm')
    {

        gen = "Mister";

    }
    if(age >= 16 && gender == 'f')
    {

        gen = "Ms.";

    }
    if(age < 16 && gender == 'f')
    {

        gen = "Miss";

    }
    return gen;

}
