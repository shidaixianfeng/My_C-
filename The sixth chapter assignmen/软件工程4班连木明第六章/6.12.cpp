#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
	int car;
	double charge, hours;
	cout << "please enter the number of car" << endl;
	cin >> car;
	cout << "Car" << setw(15) << "Hours" << setw(15) << "Charges" << endl;
	double TotalHours = 0, TotalCharge = 0;
	for(int i=1;i<=car+1;i++)
	{
		if (i <= car)
		{
			cout <<setw(strlen("cars"))<< i << "              ";
			cin >> hours;
			if (hours <= 3)
				charge = 2.00;
			if (hours > 3 && hours <= 19)
			{
				charge = 2.00 + (ceil(hours) - 3)*0.50;
			}
			if (hours > 19)
				charge = 10.00;

			cout << setw(15)  <<fixed<< setprecision(2) <<charge << endl;;
			TotalHours += hours;
			TotalCharge += charge;
		}
		if(i==(car+1))
		{
			cout << "TOTAL" << setw(15);
		    cout<<setprecision(2)<<TotalHours << setw(15) << TotalCharge;
		}

	}
	return 0;
}