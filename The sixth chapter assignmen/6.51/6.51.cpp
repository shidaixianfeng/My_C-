#include<iostream>
using namespace std;
int copy(int n);
int reference(int &n);
int main()
{
	int count,x;
	cout << "Please enter a number to represent the count" << endl;
	cin >> count;
	cout << "enter 1 to call reference function and 0 to call copy function: "<<endl;
	cin >> x;
	if (x == 1)
	{
		reference(count);
		cout << endl;
		cout << "now the count is: " << count << endl;
	}
	else
	{
		copy(count);
		cout << endl;
		cout << "now the count is: " << count << endl;
	}
	return 0;
}
	int copy(int n)
{
  n=3 * n;
  cout << n;
  return n;
}
int reference(int &n)
{
	n= 3 * n;
	cout << n;
	return n;
}