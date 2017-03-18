#include<iostream>
using namespace std;
int integerPower(int base, int exponent);
int main()
{
	int base, exponent;
	cout << "please enter the base integer and the exponent" << endl;
	cin >> base >> exponent;
	integerPower(base, exponent);
	
	cout << integerPower << endl;
	return 0;
}
int integerPower(int base, int exponent)
{
	int sum = 1;
	for (int i = 1; i <= exponent; ++i)
	{
		sum *= base;
	}
	return sum;
}