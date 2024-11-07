#include <iostream>
using namespace std;

bool isPrime(int);

main(){
    int number;
    cout << "Enter the number : ";
    cin >> number;
    bool check = isPrime(number);
    cout << check;
}

bool isPrime(int number){
    bool prime = false;
    int counter = 0;
    for(int i = 2; i <= number; i++){
        if(number % i == 0){
            counter += 1;
        }
    }
    if(counter > 2){
        prime = true;
    }
    return prime;
}