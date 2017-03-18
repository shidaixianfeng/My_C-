#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "please enter two integers " << endl;
	cin >> a >> b;
	int c;
	c = a%b;
	if (c == 0)
		cout << "the first number is a multiple of the second\n";
	else
		cout << "the first number is not a multiple of the second\n";
	return 0;
}