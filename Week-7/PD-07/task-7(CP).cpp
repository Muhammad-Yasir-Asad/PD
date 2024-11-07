#include <iostream>
using namespace std;

int main() {
    int period;
    cin >> period;

    int doctors = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= period; ++day) {
        int patients;
        cin >> patients;

        if (day % 3 == 0 && untreatedPatients > treatedPatients) {
            ++doctors; 
        }

        if (patients <= doctors) {
            treatedPatients += patients; 
        }
        
        else {
            treatedPatients += doctors; 
            untreatedPatients += (patients - doctors); 
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

}
