#include <iostream>
using namespace std;

main()
{

	string movie;
	int adult;
	int child;
	int adult_tickets;
	int child_tickets;
	int percentage;
	cout << "Enter the movie name : " ;
	cin >> movie;
	cout << "Enter the adult ticket price : $";
	cin >> adult;
	cout << "Enter the child ticket price : $";
	cin >> child;
	cout << "Enter the number of adult tickets sold : ";
	cin >> adult_tickets;
	cout << "Enter the number of child tickets sold : ";
	cin >> child_tickets;
	cout << "Enter the percentage of amount to be donated to charity : ";
	cin >> percentage;
	cout << "Movie: " << movie << endl;
	int total_amount = (adult * adult_tickets) + (child * child_tickets); 
	cout << "Total amount generated from tickets sales : $" << total_amount << endl;
	int donation_amount = (total_amount / 100) * percentage;
	cout << "Donation to charity (10%) : $" << donation_amount << endl;
	int remaining_amount = total_amount - donation_amount;
	cout << "Remaining amount after donation : $" << remaining_amount;

}