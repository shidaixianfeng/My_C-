#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int j = 1; j <= 5; j++)
	{
		int factorial = 1;
		for (int i = 1; i <= j; i++)
		factorial *= i;
		cout << left << setw(10) << j << factorial<<endl;
	}
	int n;
	cout << "Now let's to calculate n!,Enter the n: ";
	cin >> n;
	double factorial = 1;
	for (int i = 1; i <= n; i++)
		factorial *= i;
	cout << "the factorial is:" << factorial << endl;
	return 0;

}