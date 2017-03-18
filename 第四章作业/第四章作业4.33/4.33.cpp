#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three number" << endl;
	cin >> a >> b >> c;
	if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
		cout << "it's the right triangle";
	else
		cout << "it's not a right triangle";
	return 0;
}