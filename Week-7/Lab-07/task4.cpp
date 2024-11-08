#include <iostream>
using namespace std;
int frequencyChecker (int number,int digit);
 main() {
    int number, digit;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Enter the digit to check: ";
    cin >> digit;
    
    int frequency = frequencyChecker(number, digit);
    cout << "Frequency: " << frequency << endl;
    
    
}


int frequencyChecker(int number, int digit) {
    int count = 0;
    while (number > 0) {
        int currentDigit = number % 10; 
        if (currentDigit == digit) {
            count++; 
        }
        number /= 10; 
    }
    return count;
}

