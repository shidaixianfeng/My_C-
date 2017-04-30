#include <iostream>
#include "Account.h" 
using namespace std;
Account::Account(double initialBalance)
{

	if (initialBalance >= 0.0)
		m_dBalance = initialBalance;
	else 
	{

		cout << "Error: Initial balance cannot be negative." << endl;
		m_dBalance = 0.0;

	} 

} 

void Account::credit(double amount)
{

	m_dBalance = m_dBalance + amount;

} 


bool Account::debit(double amount)
{

	if (amount > m_dBalance)
	{

		cout << "Debit amount exceeded account balance." << endl;
		return false;

	}
	else
	{

		m_dBalance = m_dBalance - amount;
		return true;

	}
}


void Account::setBalance(double newBalance)
{

	m_dBalance = newBalance;

}


double Account::getBalance()
{

	return m_dBalance;

} 
