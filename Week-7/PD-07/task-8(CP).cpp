#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cargoCount;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    int totalWeight = 0;
    int minibusWeight = 0;
    int truckWeight = 0;
    int trainWeight = 0;
    double totalPrice = 0.0;

    for (int i = 1; i <= cargoCount; ++i) {
        int currentCargo;
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> currentCargo;

        totalWeight += currentCargo;

        if (currentCargo <= 3) {
            minibusWeight += currentCargo;
            totalPrice += currentCargo * 200; 
        } else if (currentCargo <= 11) {
            truckWeight += currentCargo;
            totalPrice += currentCargo * 175; 
        } else {
            trainWeight += currentCargo;
            totalPrice += currentCargo * 120; /
        }
    }

    double averagePricePerTon = totalPrice / totalWeight;
    double minibusPercentage = (static_cast<double>(minibusWeight) / totalWeight) * 100;
    double truckPercentage = (static_cast<double>(truckWeight) / totalWeight) * 100;
    double trainPercentage = (static_cast<double>(trainWeight) / totalWeight) * 100;

    //results with two decimal points
    cout << fixed << setprecision(2);
    cout << "Average price per ton: " << averagePricePerTon << endl;
    cout << "Percentage by minibus: " << minibusPercentage << "%" << endl;
    cout << "Percentage by truck: " << truckPercentage << "%" << endl;
    cout << "Percentage by train: " << trainPercentage << "%" << endl;

    return 0;
}
