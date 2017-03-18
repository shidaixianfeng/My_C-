#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	int a, b, c, d, e;
	a = number % 10;
	b = (number - a) % 100 / 10;
	c = (number - 10 * b - a) % 1000 / 100;
	d = (number - 100 * c - 10 * b - a) % 10000 / 1000;
	e = number / 10000;
	if (e == a&&d == b)
		cout << "It's a palindromes;";
	else
		cout << "it's not a palindromes";
		return 0;

}