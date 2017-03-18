#include<iostream>
#include<string>
using namespace std;
int main()
{
	string number;
	cout << "Enter your number ;" << endl;
	cin >> number;
	for (int i = number.size() - 1; i >= 0; --i)
		cout << number[i];
	return 0;
}