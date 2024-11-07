#include <iostream>
using namespace std;

void upperPart(int);
void lowerPart(int);

main(){
    int n;
    cout << "Enter number of n : ";
    cin >> n;
    upperPart(n);
    lowerPart(n);
}

void upperPart(int n){
    int rows = n/2;
    for(int i = 1; i <= rows; i++){
        
        for(int j = 1; j <= rows - i; j++){
            cout << " ";
        }
         
        for(int z = 1; z <= i; z++){
            cout << "*";
        }
        cout << endl;
    }
}

void lowerPart(int n){
    int rows = n/2;
    for(int i =  - 1; rows >= 1; i--){
        for(int j = 1 ; j <= rows - i; j++){
            cout << " ";
        }
        for(int z = 1; z <= i; z++){
            cout << "*";
        }
        cout << endl;
    }    
}