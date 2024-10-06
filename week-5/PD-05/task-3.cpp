#include <iostream>
using namespace std;

int taxAmount(int, char);   //function declaration
int finalPrice(int, int);   //function declaration


main(){
    char vechileType;       //variable declaration
    int vechilePrice;       //variable declaration  
    cout << "Enter the vechile type code (M, E, S, V, T) : ";
    cin >> vechileType;
    cout << "Enter the price of vechile : ";
    cin >> vechilePrice;
    int vechileTax = taxAmount(vechilePrice, vechileType);      //calculating vechileTax
    int result = finalPrice(vechilePrice, vechileTax);          //calculating final price after tax
    cout << "The final price of a vechile of type " << vechileType << " after adding the tax is $" << result;

}

int taxAmount(int vechilePrice, char vechileType)
{
    int tax;
    if(vechileType == 'M')
    {

        tax = (vechilePrice * 6) / 100;
        

    }
    if(vechileType == 'E')
    {

        tax = (vechilePrice * 8) / 100;

    }
    if(vechileType == 'S')
    {

        tax = (vechilePrice * 10) / 100;

    }
    if(vechileType == 'V')
    {

        tax = (vechilePrice * 12) / 100;

    }
    if(vechileType == 'T')
    {

        tax = (vechilePrice * 15) / 100;

    }
    
    return tax;

}

int finalPrice(int vechilePrice, int vechileTax)
{

    int finalAmount = vechilePrice + vechileTax;
    return finalAmount;

}