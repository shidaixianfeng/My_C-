#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "please enter an integer " << endl;
	cin >> a;
	int b;
	b = a % 2;
	if (b == 0)
		cout << "The number is an even" << endl;
	else
		cout << "The number is an odd " << endl;
	return 0;
}