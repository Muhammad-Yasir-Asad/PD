#include <iostream>
using namespace std;

float perimeter(char, float);

main()
{

    char shape;
    float value;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon) : ";
    cin >> shape;
    cout << "Enter the value : ";
    cin >> value;
    float answer = perimeter(shape, value);
    cout << "The perimeter is : " << answer;

}

float perimeter(char shape, float value)
{

    float solution;
    if(shape == 's')
    {

        solution = 4 * value;

    }
    if(shape == 'c')
    {

        solution = 6.28 * value;

    }
    if(shape == 't')
    {

        solution = 3 * value;

    }
    if(shape == 'h')
    {

        solution = 6 * value;

    }        
    return solution;

}