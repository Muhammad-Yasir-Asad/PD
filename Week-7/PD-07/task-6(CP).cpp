#include <iostream>
using namespace std;

int primorial(int);

main(){
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int sum = primorial(number);
    cout << sum;
}

int primorial(int number){
    int product = 1;
    int counter = 0;
    int i;
    for(int j = 0; j < number; j++){ 
    for(i = 2; i < number; i++){
        if(i % 2 != 0){
            counter ++;
        }
    }
    while(counter > 2){
        product = i * 1;
    }
    }
    return product;
}