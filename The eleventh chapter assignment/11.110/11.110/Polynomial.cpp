#include "Polynomial.h"



Polynomial::Polynomial(int A, int B)
{
	m_iCofficient = A;
	m_iExponent = B;
}


Polynomial::~Polynomial()
{
}

Polynomial Polynomial::operator+(const Polynomial & A)
{
	Polynomial temp;
	if (m_iExponent == A.m_iExponent)
	{
		temp.m_iExponent = m_iExponent;
		temp.m_iCofficient = m_iCofficient + A.m_iCofficient;
		return temp;
	}
	else
		cout << "the Exponent is not equal can't add" << endl;
	return temp;
}

Polynomial Polynomial::operator-(const Polynomial & A)
{
	Polynomial temp;
	if (m_iExponent == A.m_iExponent)
	{
		temp.m_iExponent = m_iExponent;
		temp.m_iCofficient = m_iCofficient -A.m_iCofficient;
		return temp;
	}
	else
		cout << "the Exponent is not equal can't subtract" << endl;
	return temp;
}

Polynomial Polynomial::operator*(const Polynomial & A)
{
	Polynomial temp;
		temp.m_iExponent = m_iExponent+A.m_iExponent;
		temp.m_iCofficient = m_iCofficient *A.m_iCofficient;
		return temp;
}

Polynomial Polynomial::operator+=(const Polynomial & A)
{
	if (m_iExponent == A.m_iExponent)
	{
		m_iCofficient += A.m_iCofficient;
		return *this;
	}
	else
		cout << "the Exponent is not equal can't subtract" << endl;
	return *this;
}

Polynomial Polynomial::operator-=(const Polynomial & A)
{
	if (m_iExponent == A.m_iExponent)
	{
		m_iCofficient -= A.m_iCofficient;
		return *this;
	}
	else
		cout << "the Exponent is not equal can't subtract" << endl;
	return *this;
}

Polynomial Polynomial::operator*=(const Polynomial & A)
{
		m_iCofficient += A.m_iCofficient;
		m_iExponent += A.m_iExponent;
		return *this;
	
}

istream & operator >> (istream & input, Polynomial & A)
{
	char x;
	input >> A.m_iCofficient >> x >> A.m_iExponent;
	return input;
	// TODO: 在此处插入 return 语句
}

ostream & operator<<(ostream & output, const Polynomial & B)
{
	output << B.m_iCofficient << "x^" << B.m_iExponent;
	return output;
	// TODO: 在此处插入 return 语句
}
