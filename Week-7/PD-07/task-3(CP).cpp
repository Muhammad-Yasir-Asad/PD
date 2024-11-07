#include <iostream>
using namespace std;

main(){
    int upperBound;
    cout << "Enter the Upper Bond : ";
    cin >> upperBound;
    int n;
    for(int i = 1; i <= upperBound; i++){        
        n = i;
        if(i / 4 != 0){
            n = i * 10;
        }
        cout << n << ", ";
    }
}