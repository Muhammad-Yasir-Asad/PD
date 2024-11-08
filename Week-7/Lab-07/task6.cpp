#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

int main() {
    // Declaring variables
    int number1, number2;
    
    // Inputs
    cout << " Enter number 1 : ";
    cin >> number1;
    cout << " Enter number 2 : ";
    cin >> number2;

    // Calculate GCD
    int result = calculateGCD(number1, number2);

    // Calculate LCM using the correct GCD
    int answer = calculateLCM(number1, number2, result);

    cout << " GCD is : " << result << endl;
    cout << " LCM is : " << answer << endl;

    return 0;
}

int calculateGCD(int number1, int number2) {
    while (number2 != 0) {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    return number1;
}

int calculateLCM(int number1, int number2, int gcd) {
    int solution = (number1 * number2) / gcd;
    return solution;
}
