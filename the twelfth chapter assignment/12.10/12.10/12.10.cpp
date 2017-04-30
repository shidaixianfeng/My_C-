#include <iostream>
#include "Account.h"
using namespace std;
int main()
{

	Account account1(500); 
	Account account2(250); 

	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;

	int withdrawalAmount; 

	cout << "\nEnter withdrawal amount for account1: "; 
	cin >> withdrawalAmount; 
	cout << "\nattempting to subtract " << withdrawalAmount
		<< " from account1 balance\n\n";
	account1.debit(withdrawalAmount); 

									  
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;

	cout << "\nEnter withdrawal amount for account2: ";
	cin >> withdrawalAmount; 
	cout << "\nattempting to subtract " << withdrawalAmount
		<< " from account2 balance\n\n";
	account2.debit(withdrawalAmount); 
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
} 