#include <iostream>
using namespace std;
int digitSum (int number);
 main() {
    int number, result;

    // Taking input
    cout << "Enter number: ";
    cin >> number;

    // Calling the function
    result = digitSum(number);

    // Output the result
    cout << "Sum of digits: " << result << endl;

}

int digitSum(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10;  
        number /= 10;        
    }

    return sum;
}


