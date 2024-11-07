#include <iostream>
using namespace std;

string findZodiacSign(int, string);

main()
{
    int day;
    string month;
    cout << "Enter the day of birth : ";
    cin >> day;
    cout << "Enter the month of birth : ";
    cin >> month;
    string sign = findZodiacSign(day, month);
    cout << sign; 
}

string findZodiacSign(int day, string month)
{   
    int days;
    string star;
   if(month != "a"){ 
    if(month == "janury")
    {
        days = 0 + day;
    }
    else if(month == "feburary")
    {
        days = 28 + day;
    }
    else if(month == "march")
    {
        days = 59 + day;
    }
    else if(month == "april")
    {
        days = 89 + day;
    }
    else if(month == "may")
    {
        days = 120 + day;
    }
    else if(month == "june")
    {
        days = 150 + day;
    }
    else if(month == "july")
    {
        days = 181 + day;
    }
    else if(month == "august")
    {
        days = 211 + day;
    }
    else if(month == "september")
    {
        days = 242 + day;
    }
    else if(month == "october")
    {
        days = 272 + day;
    }
    else if(month == "november")
    {
        days = 303 + day;
    }
    else if(month == "december")
    {
        days = 333 + day;
    }
   }
    if(days >= 80 && days <= 109)
    {
        star = "Aries";
    }
    if(days >= 110 && days <= 140)
    {
        star = "Taurus";
    }
    if(days >= 141 && days <= 171)
    {
        star = "Gemini";
    }
    if(days >= 172 && days <= 203)
    {
        star = "Cancer";
    }
    if(days >= 204 && days <= 234)
    {
        star = "Leo";
    }
    if(days >= 235 && days <= 265)
    {
        star = "Virgo";
    }
    if(days >= 266 && days <= 295)
    {
        star = "Libra";
    }
    if(days >= 296 && days <= 325)
    {
        star = "Scorpio";
    }
    if(days >= 325 && days <=356)
    {
        star = "Sagittarius";
    }
    if(days >= 356 && days <= 19)
    {
        star = "Capricorn";
    }
    if(days >= 20 && days <= 49)
    {
        star = "Aquarius";
    }
    if(days <= 49 && days <=79)
    {
        star = "Pisces";
    }
    return star;
}