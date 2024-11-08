#include <iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    //Declaring variables
    int length;
    //Inputs
    cout << "  Enter length of fibonacci series ";
    cin>>length;
    generateFibonacci (length);

}
 void generateFibonacci(int length)
 {
    int n1=0;
    int n2=1;
    int next;
    cout << n1 <<","<<n2;
   for(int i=2;i<length;i++)
   {
    next=n1+n2;
    cout <<next << " ";
    n1=n2;
    n2=next;
   }
   

    
 }
