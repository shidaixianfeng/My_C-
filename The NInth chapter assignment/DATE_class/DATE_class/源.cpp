#include<iostream>
#include"DateClass.h"
using namespace std;

int main()
{
	int year, month, day;
	cout << "Enter a date like 2017 1 1";
	cin >> year >> month >> day;
	DateClass day1(year, month, day);
		for(int i=0;i<40;++i)
		{
			day1.Nextday();
			day1.print();
		}
	return	0;

}