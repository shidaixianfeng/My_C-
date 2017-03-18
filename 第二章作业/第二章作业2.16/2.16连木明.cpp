#include<iostream>
using namespace std; 
int main()
{
	double a, b;
	cout << "please enter two numbers\n";
	cin >> a >> b;
	double sum, pro, dif, quo;
	sum = a + b;
	pro = a*b;
	dif = a - b;
	quo = a / b;
	cout << sum << " " << pro << " " << dif << " " << quo << " ";
	return 0;
}