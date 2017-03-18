#include<iostream>
using namespace std;
int main()
{
	char m;
	cout << "please enter one character " << endl;
	cin >> m;
	cout << m << endl;
	cout << static_cast<int>(m);
	return 0;

}