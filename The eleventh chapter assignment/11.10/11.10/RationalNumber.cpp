#include "RationalNumber.h"



RationalNumber::RationalNumber(int numerator, int denominator)
{
	m_iDenominator = denominator;
	m_iNumeration = numerator;
}


RationalNumber::~RationalNumber()
{
}

RationalNumber RationalNumber::operator+(const RationalNumber &A)
{
	RationalNumber temp;
	temp.m_iNumeration = m_iNumeration*A.m_iDenominator + m_iDenominator*A.m_iNumeration;
	temp.m_iDenominator = m_iDenominator*A.m_iDenominator;
	return temp;
}

RationalNumber RationalNumber::operator-(const RationalNumber &A)
{
	RationalNumber temp;
	temp.m_iNumeration = m_iNumeration*A.m_iDenominator -m_iDenominator*A.m_iNumeration;
	temp.m_iDenominator = m_iDenominator*A.m_iDenominator;
	return temp;
}

RationalNumber RationalNumber::operator/(const RationalNumber & A)
{
	RationalNumber temp;
	temp.m_iNumeration=m_iNumeration*A.m_iDenominator;
	temp.m_iDenominator = m_iDenominator*A.m_iNumeration;
	return temp;
}

RationalNumber RationalNumber::operator*(const RationalNumber & A)
{
	RationalNumber temp;
	temp.m_iNumeration = m_iNumeration*A.m_iNumeration;
	temp.m_iDenominator = m_iDenominator*A.m_iDenominator;
	return temp;
}



istream & operator >> (istream & input, RationalNumber &A)
{
	char a;
	input >> A.m_iNumeration >> a >> A.m_iDenominator;
	if(A.m_iDenominator<=0)
	{
		cout << "The fractions which you enter is wrong(the denominator is smaller than or equal 0),please enter again" << endl;
		A.m_iDenominator = 1;
		A.m_iNumeration = 1;
	}
	return input;
	// TODO: 在此处插入 return 语句
}

ostream & operator<<(ostream &output, RationalNumber &A)
{
	/*if(A.m_iNumeration<A.m_iDenominator)
	{
		if(A.m_iDenominator%A.m_iNumeration==0)
		{
			A.m_iDenominator /= A.m_iNumeration;
			A.m_iNumeration = 1;
		}
	}
	else
	{
		if (A.m_iNumeration %A.m_iDenominator== 0)
		{
			output << A.m_iNumeration / A.m_iDenominator;
			return output;
		}
	}*/
	int Num = A.m_iNumeration;
	int Den = A.m_iDenominator;
	int gcd = 0;
	if(Num>Den)
	{
		int temp = Num%Den;
		while(temp!=0)
		{
			Num = Den;
			Den = temp;
			temp = Num%Den;
		}
		gcd = Den;
	}
	else
	{
		int temp = Den%Num;
		while (temp != 0)
		{
			Den = Num;
			Num= temp;
			temp = Den%Num;
		}
		gcd = Num;
	}
	output << A.m_iNumeration/gcd << "/" << A.m_iDenominator/gcd;
	return output;
	// TODO: 在此处插入 return 语句
}

bool operator>=(RationalNumber &A, const RationalNumber &B)
{
	RationalNumber temp = A - B;
	if (temp.m_iNumeration >= 0)
		return true;
	return false;
}

bool operator<=(RationalNumber &A, const RationalNumber &B)
{
	RationalNumber temp = A - B;
	if (temp.m_iNumeration <= 0)
		return true;
	return false;
}

bool operator>(RationalNumber &A, const RationalNumber &B)
{
	RationalNumber temp = A - B;
	if (temp.m_iNumeration>0)
		return true;
	return false;
}

bool operator<(RationalNumber &A, const RationalNumber &B)
{
	RationalNumber temp = A - B;
	if (temp.m_iNumeration < 0)
		return true;
	return false;
}

bool operator==(RationalNumber &A, const RationalNumber &B)
{
	RationalNumber temp = A - B;
	if (temp.m_iNumeration == 0)
		return true;
	return false;
}

