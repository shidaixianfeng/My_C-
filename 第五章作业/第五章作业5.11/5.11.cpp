#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double amount=1000.0;
	for(double i=0.05;i<=0.10;i+=0.01)
	{
		cout << "the rate is" << i << endl;
		cout << "Year" <<setw(20)<< "Amount on deposit" << endl;
		for (int year = 1;year<=10;year++)
		{
			amount *= (1 + i);
			cout <<right << year <<setw(20)<< fixed << setprecision(2) << amount << endl;
		}
	}
	return 0;
}