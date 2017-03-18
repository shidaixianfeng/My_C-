#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Input three different integers \n";
	cin >> a >> b >> c;
	int sum,  pro, max = a, min = b;;
	double ave;
	sum = a + b + c;
	ave = (a + b + c) / 3.0;
	pro = a*b*c;
	if (b > a)
	{
		max = b;
		min = a;
	}
	if (max > c)
		max = max;
	else
		max = c;
	if (min < c)
		min = min;
	else
		min = c;
	cout << "Sum is " << sum << endl;
	cout << "Average is " << ave << endl;
	cout << "Product is " << pro << endl;
	cout << "Smallest is " << min << endl;
	cout << "Largest is " << max << endl;
	return 0;


}
