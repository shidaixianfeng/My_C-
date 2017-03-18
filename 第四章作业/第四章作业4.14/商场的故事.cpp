#include<iostream>
using namespace std;
int main()
{
	int AccountNumber = 0;
	double BeginningBalance, NewBalance, TotalCharges, TotalCredits, CreditLimits;
	while (AccountNumber != -1)
	{
		cout << "Enter account number(or -1 to quit) : ";
		cin >> AccountNumber;
		if(AccountNumber==-1)
			break;
		cout << "Enter beginning banlance: ";
		cin >> BeginningBalance;
		cout << "Enter total charges: ";
		cin >> TotalCharges;
		cout << "Enter total credits:";
		cin >> TotalCredits;
		cout << "Enter credit limit: ";
		cin >> CreditLimits;
		NewBalance = BeginningBalance + TotalCharges - TotalCredits;
		cout << "New balance is:" << NewBalance << endl;
		if((BeginningBalance+TotalCharges-TotalCredits)<CreditLimits)
		{
			cout << "Account: " << AccountNumber << endl;
			cout << "Credit limit: " << CreditLimits << endl;
			cout << "Balance" << NewBalance << endl;
			cout << "Credit Limit Exceed." << endl;
		}
		
	}
	return 0;
}