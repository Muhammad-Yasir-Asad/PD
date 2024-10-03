#include <iostream>
using namespace std;

string firstDigit(int);
string digitToText(int);

main()
{

    int number;
    cout << "Enter a number (1-99) : ";
    cin >> number;
    
    if(number >= 0 & number <=9)
    {

        string fText = firstDigit(number);
        cout << fText;
        
    }
    if(number > 9 & number <= 20)
    {

        string text = digitToText(number);
        cout << text;

    }
    if(number >=20 & number <30)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Twenty" << text;
    }
    if(number >=30 & number <40)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Thirty" << text;

    }if(number >=40 & number <50)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Fourty" << text;

    }if(number >=50 & number <60)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Fifty" << text;

    }if(number >=60 & number <70)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Sixty" << text;

    }
    if(number >=70 & number <80)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Seventy" << text;

    }
    if(number >=80 & number <90)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Eighty" << text;

    }
    if(number >=90 & number <90)
    {
        int sDigit = number % 10;
        string text = firstDigit(sDigit);
        cout << "Ninty" << text;

    }

}

string digitToText(int number)
{

    if(number == 10)
    {

        return "Ten";

    }
    if(number == 11)
    {

        return "Eleven";

    }
    if(number == 12)
    {

        return "Twelve";

    }
    if(number == 13)
    {

        return "Therteenth";

    }
    if(number == 14)
    {

        return "Fourtheenth";

    }   
    if(number == 15)
    {

        return "Fifthteenth";

    }
    if(number == 16)
    {

        return "Sixteen";

    }
    if(number == 17)
    {

        return "Seventeenth";

    }
    if(number == 18)
    {

        return "Eighteenth";

    }
    if(number == 19)
    {

        return "Nineteenth";

    }
    if(number == 20)
    {

        return "Twenty";

    }
    
}

string firstDigit(int fDigit)
{
    if(fDigit == 0)
    {

        return "";

    }
    if(fDigit == 1)
    {

        return "One";

    }
    if(fDigit == 2)
    {

        return "Two";

    }
    if(fDigit == 3)
    {

        return "Three";

    }
    if(fDigit == 4)
    {

        return "Four";

    }
    if(fDigit == 5)
    {

        return "Five";

    }
    if(fDigit == 6)
    {

        return "Six";

    }
    if(fDigit == 7)
    {

        return "Seven";

    }
    if(fDigit == 8)
    {

        return "Eight";

    }
    if(fDigit == 9)
    {

        return "Nine";

    }


}
