#include <iostream>
#include <cmath>
using namespace std;

float convertRadian(float);
float calculateHeight(float, float);

main()
{
    float base;
    float degree;
    cout << "Enter the distance from the base of tree (in feet): ";
    cin >> base;
    cout << "Enter the angle of elevation (in degree) : ";
    cin >> degree;
    float radian = convertRadian(degree);
    float height = calculateHeight(base, radian);
    cout << "The height of the tree is : " << height;

}

float convertRadian(float degree)
{
    float radian = degree * 0.01744;
    return radian;
}

float calculateHeight(float base, float radian)
{

    float height = base * tan(radian);
    return height;

}