#include <iostream>
#include<cmath>
using namespace std;
int pileCubes(int volume);
main()
{
    int volume = 0;

    cout << "Enter pile volume : ";
    cin >> volume;

    cout << pileCubes(volume);
}
int pileCubes(int volume)
{
    int totalVolume=0 ,counter;
    for(counter=1; counter<=volume;counter=counter+1)
    {
        totalVolume=totalVolume+ pow(counter,3);
        if (totalVolume>=volume)
        {
            break;;
        }
        
    }


    if (totalVolume==volume)
    {
       return counter;
    }
    else{
        return -1;
    }
    
}