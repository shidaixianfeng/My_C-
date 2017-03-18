#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "please enter five integers \n ";
	cin >> a >> b >> c >> d >> e;
	if (a > b&&a > c&&a > d&&a > e)
		cout << "The largest is " << a << endl;
	else if (b > a&&b > c&&b > d&&b > e)
		cout << "The largest is " << b << endl;
	else if (c > a&&c > b&&c > d&&c > e)
		cout << "The largest is" << c << endl;
	else if (d > a&&d > b&&d > c&&d > e)
		cout << "The largest is " << d << endl;
	else
		cout << "The larest is " << e << endl;
	if (a < b&&a < c&&a < d&&a < e)
		cout << "The smallest is " << a << endl;
	else if (b < a&&b < c&&b < d&&b < e)
		cout << "The smallest is " << b << endl;
	else if (c < a&&c < b&&c < d&&c < e)
		cout << "The smallest is" << c << endl;
	else if (d < a&&d < b&&d < c&&d < e)
		cout << "The smallest is " << d << endl;
	else
		cout << "The smallest is " << e << endl;
	return 0;


}