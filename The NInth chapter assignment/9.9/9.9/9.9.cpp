#include<iostream>
#include"DateAndTime.h"
using namespace std;
int main()
{
	int year, month, day, hour, minute, second;
	cout << "Enter a universal time like 2017 01 01 23 59 59 ";
	cin >> year >> month >> day >> hour >> minute >> second;
	DateAndTime obj1(year, month, day,hour, minute, second);
	cout << "Now the time will be printed Universal" << endl;
	for(int i=0;i<60;i++)
	{
		obj1.tick();
		obj1.printday();
		obj1.printUniversal();
		cout << endl;
	}
	cout << "Now the time will be printed Standard" << endl;
	for (int i = 0; i<60; i++)
	{
		obj1.tick();
		obj1.printday();
		obj1.printStandard();
		cout << endl;
	}
	return 0;
}