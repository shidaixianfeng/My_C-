#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double mile=0, gallon,ave,sum1=0,sum2=0;
	while (mile!=-1)
	{
		cout << "Enter miles driven (-1 to quit): ";
		cin >> mile;
		if(mile==-1)
		{
			break;
		}
		cout << "Enter gallons used: ";
		cin >> gallon;
		ave = mile / gallon;
		cout << "MPG this trip: " <<fixed<< setprecision(6)<<ave << endl;
		sum1 += mile;
		sum2 += gallon;
		cout << "Total MPG: " <<sum1 / sum2 << endl << endl;
	}

	return 0;
}