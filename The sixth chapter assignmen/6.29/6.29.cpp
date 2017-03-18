#include<iostream>
#include<cmath>
using namespace std;
int is_prime(int n);
int main()
{
	for (int i = 2; i <= 20000; ++i)
	{
		int x = is_prime(i);
		if (x == 1)
			cout << i<<"   ";
	}
	cout << endl;
	return 0;
}
int  is_prime(int n)
{
	int x = ceil(sqrt(n));
	for (int i = 2; i <= x; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}