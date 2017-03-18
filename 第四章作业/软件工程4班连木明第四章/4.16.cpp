#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int condition = 1;
	double hours, rate, sallary;
	while(condition==1)
	{
		cout << "Enter hours worked(-1 to end): ";
		cin >> hours;
		if (hours == -1)
			break;
		cout << "Enter hourly rate of the employee($00.00): ";
		cin >> rate;
		sallary = hours*rate;
		cout << fixed << setprecision(2) << "Sallary is: $"<<sallary << endl << endl;
	}
	return 0;
}