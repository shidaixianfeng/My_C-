#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "please enter two integers " << endl;
	cin >> a >> b;
	if (a == b)
		cout << "These number are equal\n";
	else
	{
		if (a > b)
			cout << a << " is larger\n";
		else
			cout << b << " is larger\n";
	}
	return 0;

}