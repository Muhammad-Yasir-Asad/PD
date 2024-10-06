#include <iostream>
#include <cmath>
using namespace std;

float value(float x,float y,float z);    //function declaration

main()
{
    float a,b,c;            //variable declaration
    cout << "enter first";
    cin >> a;
    cout << "enter second";
    cin >> b;
    cout << "enter third";
    cin >> c;
   value(a,b,c);

}
float value(float x,float y,float z)
{
    float determinant=y*y-4*x*z;
    float root1, root2;
    if(determinant==0)
    {
        root1=-y/2*z;
        cout << root1;

    }
    if(determinant>0)
    {
         root1=(-y+sqrt(determinant))/2*x;
          root2=(-y-sqrt(determinant))/2*x;
         cout << root1 <<endl;
         cout << root2;
         
            
    }
    if(determinant<0)
    {
         root1=( (sqrt(-determinant)/2*x)) ;
         root2=((sqrt(-determinant)/2*x)) ;
         cout << (-y/2*x) << " - " << root1 << "i"<<endl;
         cout << (-y/2*x) << " + " << root2 << "i";
         

    }
    
}
