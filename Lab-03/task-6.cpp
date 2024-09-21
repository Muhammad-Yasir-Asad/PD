#include <iostream> 
using namespace std;

main()
{

	float megabytes;
	cout << "Ener the size in megabytes (MB) : ";
	cin >> megabytes;
	float bits = megabytes * 1024 * 1024 * 8;
	cout << megabytes << " MB is equivalent to " << bits;

}