#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "please enter your number \n";
	cin >> a;
	int b, c, d, e, f;
	b = a / 10000;
	c = (a - b * 10000) / 1000;
	d = (a - b * 10000 - c * 1000) / 100;
	e = (a - b * 10000 - c * 1000 - d * 100) / 10;
	f = a % 10;
	cout << b << "   " << c << "   " << d << "   " << e << "   " << f << endl;
	return 0;

}