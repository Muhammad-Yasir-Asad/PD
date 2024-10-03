#include <iostream>
using namespace std;

string checkAlphabetCase(char);     //Function Declaration

main()
{

    char alphabet;                                          //intilization of varaiable
    cout << "Enter a character (A/a) : ";                   //output on screen
    cin >> alphabet;                                        //getting input 
    string caseOfAlphabet = checkAlphabetCase(alphabet);    //passing value to function and storing result in variable
    cout << caseOfAlphabet;                                 //printing result

}

string checkAlphabetCase(char aplhabet)
{
    if(aplhabet == 'A')
    {

        string caseOfAlphabet = "You have entered Capital letter A";
        return caseOfAlphabet;

    }
    if(aplhabet == 'a')
    {

        string caseOfAlphabet = "You have entered small letter a";
        return caseOfAlphabet;

    }
}