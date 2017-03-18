#include<iostream>
using namespace std;
int static a[10] = { 0 };
int FirstClass(int *ptr, int n);
int Economy(int *ptr, int n);
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "Please type 1 for\"First Class\" " << endl;
		cout << "Please type 2 for\"Economy\"" << endl;
		int condition;
		cin >> condition;
		if (condition == 1)
			FirstClass(a, 10);
		if (condition == 2)
			Economy(a, 10);
	}
	cout << "Seats are all ocupied" << endl;
	cout << "Next flight leaves in 3 hours." << endl;
	return 0;
}
int FirstClass(int *ptr,int n)
{
	for(int i=0;i<5;i++)
		if (*(ptr + i) == 0)
		{
			*(ptr + i) = 1;
			cout << "First class: " << endl;
			cout << "Seat number is: " << i+1 << endl<<endl;
			return i;
		}
	cout << "Can you satisfy the economy(the first class is ocupied)if ok, enter \"y\",else enter\" n\"" << endl;
	char x;
	cin >> x;
	if (x == 'y')
		Economy(a, 10);
	else
		cout << "Next flight leaves in 3 hours." << endl << endl;
	return 0;
}
int Economy(int *ptr, int n)
{
	for (int i = 5; i<10; i++)
		if (*(ptr + i) == 0)
		{
			*(ptr + i) = 1;
			cout << "Economy:" << endl;
			cout << "Seat number is: " << i+1 << endl << endl;
			return i;
		}
	cout << "Can you satisfy the first class(the economy is ocupied)if ok, enter \"y\",else enter\" n\"" << endl;
	char x;
	cin >> x;
	if (x == 'y')
		FirstClass(a, 10);
	else
		cout << "Next flight leaves in 3 hours." << endl << endl;
	return 0;
}