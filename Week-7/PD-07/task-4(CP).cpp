#include <iostream>
using namespace std;

int numberOfDots(int);

main(){
    int numberOfTriangles;
    cout << "Enter the numbers of Triangles : ";
    cin >> numberOfTriangles;
    int dots = numberOfDots(numberOfTriangles);
    cout << dots;
}

int numberOfDots(int numberOfTriangles){
    int n = 1;
    int m = 0;
    for(int i = n; i <= numberOfTriangles; i++){
        m = i + m; 
    }
    return m;
    
}