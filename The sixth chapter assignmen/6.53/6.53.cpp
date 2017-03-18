#include<iostream>
#include"minimum.h"
using namespace std;
int main()
{
	{
		int a, b, c;
	cout << "enter three integer numbers" << endl;
	cin >> a >> b >> c;
	cout << "the minimum is: " << minimum(a, b, c) << endl; 
	}
	{
		double a, b, c;
		cout << "enter three double numbers" << endl;
		cin >> a >> b >> c;
		cout << "the minimum is: " << minimum(a, b, c) << endl; 
	}
	{
		char a, b, c;
		cout << "enter three character number " << endl;
		cin >> a >> b >> c;
		cout << "the minimum is: " << minimum(a, b, c);
	}
	return 0;
}