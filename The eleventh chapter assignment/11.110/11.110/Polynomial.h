#pragma once
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include<iostream>
using namespace std;
class Polynomial
{
public:
	Polynomial(int =1, int =1);
	~Polynomial();
	Polynomial operator+(const Polynomial&A);
	Polynomial operator-(const Polynomial&A);
	Polynomial operator*(const Polynomial&A);
	Polynomial operator+=(const Polynomial&A);
	Polynomial operator-=(const Polynomial&A);
	Polynomial operator*=(const Polynomial&A);
	friend istream& operator >> (istream &input, Polynomial&A);
	friend ostream& operator << (ostream &output, const Polynomial&B);
private:
	int m_iCofficient;
	int m_iExponent;
};
#endif // !POLYNOMIAL_H