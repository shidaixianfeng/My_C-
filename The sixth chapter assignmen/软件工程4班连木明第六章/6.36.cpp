#include<iostream>
using namespace std;
int recursion(int base, int exponent);
int main()
{
	int a, b;
	cout << "Please enter two number such as a and b and we will calculate the power" << endl;
	cin >> a >> b;
	cout << recursion(a, b) << endl;
	return 0;
}
int recursion(int base ,int exponent)
{
	if (exponent == 1)
		return base;
	int x;
	x = base*recursion(base, exponent - 1);
}