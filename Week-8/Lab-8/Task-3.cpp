#include <iostream>
using namespace std;
string inputString(string value);
int inputInteger(string value);

void plant(string seed, int water, int fert, int temp);
main()
{
    string seed = " ";

    int water = 0, fert = 0, temp = 0;

    seed = inputString("seed");
    water = inputInteger("water");
    fert = inputInteger("fertiziler");
    temp = inputInteger("temperature");

    plant(seed, water, fert, temp);
}

string inputString(string value)
{
    string data = " ";

    cout << "Enter " << value << " : ";
    cin >> data;

    return data;
}

int inputInteger(string value)
{
    int data = 0;

    cout << "Enter " << value << " : ";
    cin >> data;

    return data;
}
void plant(string seed, int water, int fert, int temp)
{
    for (int counter = 1; counter <= water; counter = counter + 1)
    {
        for (int counter = 1; counter <= water; counter = counter + 1)
        {
            cout << "-";
        }
        // for(int counter=1;counter)
        for (int counter = 1; counter <= fert; counter = counter + 1)
        {

            if (temp >= 20 && temp <= 30)
            {
                cout << seed;
            }
        }
    }
    if (!(temp >= 20 && temp <= 30))
    {
        cout << seed;
    }
}