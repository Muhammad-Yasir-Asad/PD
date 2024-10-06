#include <iostream>
using namespace std;

string calculatePoolState(int, int, int, float);    //function declaration

main()
{

    int volume;            //variable declaration
    int flowRateFirst;     //variable declaration
    int flowRateSecond;    //variable declaration 
    float time;            //variable declaration
    cout << "Enter volume of the pool in liters : ";
    cin >> volume;
    cout << "Enter flow rate of the first pipe per hour : ";
    cin >> flowRateFirst;
    cout << "Enter flow rate of the second pipe per hour : ";
    cin >> flowRateSecond;
    cout << "Enter hours that the worker is absent : ";
    cin >> time;
    string result = calculatePoolState(volume, flowRateFirst, flowRateSecond, time);    //passing values to fuction and storing returned value into variable
    cout << result;

}

string calculatePoolState(int volume, int flowRateFirst, int flowRateSecond, float time)
{

    float totalWater = (flowRateFirst * time) + (flowRateSecond * time);
    int fillPercentage = (totalWater / volume) * 100;
    int overflow = totalWater - volume;
    int percentagePipe1 = ((flowRateFirst * time) / (totalWater)) * 100;
    int percentagePipe2 = ((flowRateSecond * time) / (totalWater)) * 100;
    if(percentagePipe1 + percentagePipe2 >= 100)
    {

        string result = "For " + to_string(time) + " hours, the pool overflows with " + to_string(overflow) + " Liters";
        return result;
    }
    if(percentagePipe1 + percentagePipe2 < 100)
    {

        string result = "The pool is " + to_string(fillPercentage) + "% Full. Pipe 1 : " + to_string(percentagePipe1) + "%. Pipe 2 : " + to_string(percentagePipe2) + "%.";
        return result;

    }    

    


}
