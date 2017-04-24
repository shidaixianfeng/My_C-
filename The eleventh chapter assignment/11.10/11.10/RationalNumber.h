#pragma once
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include<iostream>
using namespace std;
class RationalNumber
{
public:
	RationalNumber(int =1, int =1);
	~RationalNumber();
	friend istream& operator >> ( istream&, RationalNumber&);//friend function to define the operator overload 
	friend ostream& operator<<(ostream&,  RationalNumber&);
	RationalNumber operator+(const RationalNumber&);//member function to define the operator overload
	RationalNumber operator-(const RationalNumber&);
	RationalNumber operator/(const RationalNumber &A);
	RationalNumber operator*(const RationalNumber&A);
	friend bool operator>=(RationalNumber&, const RationalNumber&);//if this function has been define in the class must use the friend function that i can use the operator -overload;
	friend bool operator<=(RationalNumber&, const RationalNumber&);
	friend bool operator>(RationalNumber&, const RationalNumber&);
	friend bool operator<(RationalNumber&, const RationalNumber&);
	 friend bool operator==(RationalNumber&, const RationalNumber&);
private:
	int m_iNumeration;
	int m_iDenominator;
};
#endif
