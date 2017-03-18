#include<iostream>
#include<string>
#include"Time.h"
using namespace std;
int main()
{
	string x ;
	bool flag = true;
	int a, b, c;
	int n;
	cout << "enter the three number and one string to represent the time such as:12 15 16 AM to dsplay 12:15:16 AM;" << endl;
	cin >> a >> b >> c >> x;
	cout << "enter an number to represent the times do you want to check;" << endl;
	cin >> n;
	Time *p = new Time(a, b, c, x);
	for(int i=0;i<n;i++)
	{
		p->tick(flag);
	}
	delete p;
	return 0;
}