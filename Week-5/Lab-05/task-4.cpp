#include <iostream>
#include <cmath>
using namespace std;

float convertRadian(float);            //function declaration 
float calculateHeight(float, float);   //function declaration  

main()
{
    float base;                                                        //variable declaration
    float degree;                                                      //variable declaration
    cout << "Enter the distance from the base of tree (in feet): ";
    cin >> base;
    cout << "Enter the angle of elevation (in degree) : ";
    cin >> degree;
    float radian = convertRadian(degree);                              //Function to convert into radian
    float height = calculateHeight(base, radian);                      //Function to calculate height
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
