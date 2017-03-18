#include<iostream>
#include<string.h>
using namespace std;
char multiple(int a, int b);
int main()
{
	int a, b;
	cout << "please enter two number (enter 0 and 0 to quit)" << endl;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
			break;
		int x;
		x = multiple(a, b);
		if (x == 0)
			cout << "ture" << endl;
		else
			cout << "false" << endl;

	}
	return 0;
}
char multiple(int a, int b)
{
	int x = b%a;
	if (x == 0)
		return 0;
	else
		return 1;
}