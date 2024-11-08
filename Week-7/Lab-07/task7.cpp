#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;
void percentageCalculate(int n);
 main() {
    int n;

    // Input 
    cout << "Enter the number of lines (n): ";
    cin >> n;

    // Call the function
    percentageCalculate(n);

}

void percentageCalculate(int n)
 {
    int count_p1 = 0, count_p2 = 0, count_p3 = 0, count_p4 = 0, count_p5 = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;  // Input each number
        
        if (number >= 1 && number <= 199) {
            count_p1++;
        } else if (number >= 200 && number <= 399) {
            count_p2++;
        } else if (number >= 400 && number <= 599) {
            count_p3++;
        } else if (number >= 600 && number <= 799) {
            count_p4++;
        } else if (number >= 800 && number <= 1000) {
            count_p5++;
        }
    }

    float p1 = (float)count_p1 / n * 100;
    float p2 = (float)count_p2 / n * 100;
    float p3 = (float)count_p3 / n * 100;
    float p4 = (float)count_p4 / n * 100;
    float p5 = (float)count_p5 / n * 100;

    cout << fixed << setprecision(2);
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}



