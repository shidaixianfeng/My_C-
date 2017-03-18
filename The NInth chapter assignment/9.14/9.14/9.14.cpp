#include<iostream>
#include<string>
#include"HugeInterge.h"
using namespace std;
int main()
{
	bool flag0 = true;
	while (flag0)
	{
		HugeInterge A;
		HugeInterge B;
		cout << "Enter A: ";
		A.input();
		cout << "Enter B: ";
		B.input();
		cout << "A is greater than B: " << A.isGreaterThan(A, B) << endl;
		cout << "A isGreaterThanOrEqualTo B" << A.isGreaterThanOrEqualTo(A, B) << endl;
		cout << "A is LessThan B: " << A.isLessThan(A, B) << endl;
		cout << "A isLessthanOrEqualTo B: " << A.isLessthanOrEqualTo(A, B) << endl;
		cout << "A.isNotequal B: " << A.isNotequal(A, B) << endl;
		bool flag;
		cout << "Enter a interge to reply that you want to call add function(enter 1) or substract function(enter 0)" << endl;
		cin >> flag;
		if (flag)
		{
			cout << "the function add it will A=A+B" << endl;
			A.add(A, B);
			A.output(true);
		}
		if (!flag)
		{
			cout << "the function add it will A=A-B" << endl;
			A.substract(A, B);
			A.output(true);
		}
		cout << "do you want to exit?(enter 0 to quit ,1 to continue" << endl;
		cin >> flag0;
	}
	return 0;
}
