#include <iostream>
using namespace std;

float totalincome(string, int, int);

main()
{

    string screen;
    int rows, columns;
    cout << "Enter the screening type (Premiere / Normal / Discount) : ";
    cin >> screen;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> columns;
    float answer = totalincome(screen, rows, columns);
    cout << answer;
}
float totalincome(string screen, int rows, int columns)
{
    float total;
    if(screen == "premiere")
    {
        total = rows * columns * 12.00;
    }
    if(screen == "normal")
    {
        total = rows * columns * 7.50;
    }
    if(screen == "discount")
    {
        total = rows * columns * 5.00;
    }    
    return total;
    
}