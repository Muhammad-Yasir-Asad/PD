#include <iostream>
using namespace std;
string inputString(string value);
int inputInteger(string value);
int calculateDamage(string type, string opponentType, int attack, int defense);
main()
{
    string type = " ", opponentType = " ";
    int attack = 0, defense = 0;

    type = inputString("Your type");
    opponentType = inputString("opponent's type");
    attack = inputInteger("attack power");
    defense = inputInteger("opponent's defense");

    cout << calculateDamage( type,  opponentType,  attack,  defense);
}

string inputString(string value)
{
    string date = " ";

    cout << "Enter " << value << " : ";
    cin >> date;

    return date;
}
int inputInteger(string value)
{
    int date = 0;

    cout << "Enter " << value << " : ";
    cin >> date;

    return date;
}
int calculateDamage(string type, string opponentType, int attack, int defense)
{
    int damage=0 ;
    float effectiveness=0;

    if ((type=="fire" && opponentType=="grass") || (type=="water" && opponentType=="fire") || (type=="grass" && opponentType=="water") || (type=="electric" && opponentType=="water"))
    {
      effectiveness = 2;
    }

    else if ((type=="grass" && opponentType=="electric") || (type=="electric" && opponentType=="fire"))
    {
        effectiveness=1;
    }
    else{
        effectiveness =0.5;
    }
    
    damage = 50 * (attack / defense) * effectiveness;

    return damage;

}