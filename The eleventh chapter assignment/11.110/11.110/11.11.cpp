#include<iostream>
#include"Polynomial.h"
using namespace std;
int main()
{
	Polynomial A, B;
	cout << "enter A(like 2x4): " << endl;
	cin >> A;
	cout << "enter B(like 2x4): " << endl;
	cin >> B;
	cout << "A+B: " << (A+B) << endl;
	cout << "A-B: " << A - B << endl;
	cout << "A*B: " << A + B << endl;
	int n;
	cout << "enter a numter to choose which action do you want to do(0->+=, 1->-=, 2->*=)" << endl;
	cin >> n;
	switch (n)
	{
	case 0:
		A += B;
		cout << "A+=B: " << A << endl;
		break;
	case 1:
		A -= B;
		cout << "A-=B: " << A << endl;
		break;
	case 2:
		A *= B;
		cout << "A*B: " << A << endl;
	default:
		cout << "the number you enter is wrong" << endl;
	}
	return 0;
}