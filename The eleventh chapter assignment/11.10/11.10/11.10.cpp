#include<iostream>
#include"RationalNumber.h"
using namespace std;
//RationalNumber operator*(const RationalNumber&A);
//RationalNumber operator/(const RationalNumber &A);????????????????????????????????
int main()
{
	RationalNumber A, B;
	cout << "Enter the fraction A: " << endl;
	cin >> A;
	cout<< "Enter the fraction B: " << endl;
	cin >> B;
	cout <<"A+B= "<< A + B << endl;
	cout <<"A-B= "<< A - B << endl;
	cout <<"A/B= "<< A / B << endl;
	cout <<"A*B= "<< A*B<< endl;
	if (A >= B)
		cout << "A>=B" << endl;
	if (A > B)
		cout << "A>B" << endl;
	if (A <= B)
		cout << "A<=B" << endl;
	if (A < B)
		cout << "A<B" << endl;
	if (A == B)
		cout << "A==B" << endl;
	return 0;
}

