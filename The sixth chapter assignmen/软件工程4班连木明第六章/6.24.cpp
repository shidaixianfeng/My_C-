#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x;
	cout << "Enter your number " << endl;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
		cout << x[i] << "  ";
	cout << endl;
	return 0;
}