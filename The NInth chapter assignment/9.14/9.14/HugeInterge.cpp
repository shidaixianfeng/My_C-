#include "HugeInterge.h"



HugeInterge::HugeInterge()
{
	for (int i = 0; i < 40; i++)
		m_iarrHugeInt[i] =0;
}


HugeInterge::~HugeInterge()
{
}

bool HugeInterge::input()
{
	string x;
	cout << "Enter a hugeinterge: " << endl;
	cin >> x;
	m_iLength = x.size();
	for(int i=m_iLength-1;i>=0;i--)
	{
		int j = m_iLength - i - 1;
		m_iarrHugeInt[j] = x[i] - '0';
		if(m_iarrHugeInt[j]>=10)
		{
			return false;
		}
	}
	return true;
}

bool HugeInterge::output(bool flag)
{
	this->getLength();
	for (int i = m_iLength-1; i >= 0; i--)
	{
		cout << m_iarrHugeInt[i];
	}
	cout << endl;
	return true;
}

int HugeInterge::getLength() 
{
	int counter=1;
	for (int i = 39; i >= 0; i--)
	{
		if(m_iarrHugeInt[i]!=0)
		{
			counter = i + 1;
			break;
		}
	}
	m_iLength = counter;
	return m_iLength;
}

bool HugeInterge::add(HugeInterge &A,  HugeInterge &B)
{
	int a = A.getLength();
	int b = B.getLength();
	int length = 0;
	if (a >= b)
		length = a;
	else
		length = b;
		for(int i=0;i<length;i++)
		{
			A.m_iarrHugeInt[i] += B.m_iarrHugeInt[i];
			if (A.m_iarrHugeInt[i] >= 10)
			{
				A.m_iarrHugeInt[i + 1] = A.m_iarrHugeInt[i + 1]+ A.m_iarrHugeInt[i] / 10;
				A.m_iarrHugeInt[i] %= 10;
			}
		}
	return true;
}

bool HugeInterge::substract(HugeInterge &A,  HugeInterge &B)
{
	bool flag = A.isGreaterThan(A, B);
	if (flag)
	{
		int a = A.getLength();
		int b = B.getLength();
		for(int i=0;i<a;i++)
		{
			A.m_iarrHugeInt[i] -= B.m_iarrHugeInt[i];
			if(A.m_iarrHugeInt[i]<0)
			{
				A.m_iarrHugeInt[i + 1]--;
				A.m_iarrHugeInt[i] += 10;
			}
		}
		return true;
	}
	else if(!A.isNotequal(A,B))
	{
		for(int i=0;i<40;i++)
		{
			A.m_iarrHugeInt[i] = 0;
		}
	}
	else
	{
		int a = A.getLength();
		int b = B.getLength();
		int arr[40];
		for(int i=0;i<40;i++)
		{
			arr[i] = B.m_iarrHugeInt[i];
		}
		for (int i = 0; i < b;i++)
		{
			arr[i] -= A.m_iarrHugeInt[i];
			if(arr[i]<0)
			{
				arr[i + 1]--;
				arr[i] += 10;
			}
		}
		bool flag2 = false;
		for(int i=39;i>=0;i--)
		{
			A.m_iarrHugeInt[i] = arr[i];
			if(arr[i]!=0&&!flag2)
			{
				A.m_iarrHugeInt[i] = -A.m_iarrHugeInt[i];
				flag2 = true;
			}
		}
	}
	return true;
}

bool HugeInterge::isNotequal( HugeInterge &A,  HugeInterge &B) 
{
	int a = A.getLength();
	int b = B.getLength();
	if (a > b)
		return true;
	else if (a == b)
	{
		for (int i = a - 1; i >= 0; i--)
		{
			if (A.m_iarrHugeInt[i]>B.m_iarrHugeInt[i]||A.m_iarrHugeInt[i]<B.m_iarrHugeInt[i])
			{
				return true;
			}
		}
		return false;
	}
	else
		return true;
}

bool HugeInterge::isGreaterThan(HugeInterge &A,  HugeInterge &B) 
{
	int a = A.getLength();
	int b = B.getLength();
	if (a > b)
		return true;
	else if(a==b)
	{
		for(int i=a-1;i>=0;i--)
		{
			if(A.m_iarrHugeInt[i]>B.m_iarrHugeInt[i])
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		return false;
	}
}

bool HugeInterge::isLessThan( HugeInterge &A, HugeInterge &B) 
{
	int a = A.getLength();
	int b = B.getLength();
	if (a > b)
		return false;
	else if (a == b)
	{
		for (int i = a - 1; i >= 0; i--)
		{
			if (A.m_iarrHugeInt[i]<B.m_iarrHugeInt[i])
			{
				return true;
			}
		}
		return false;
	}
	else
	return true;
}

bool HugeInterge::isGreaterThanOrEqualTo( HugeInterge &A,  HugeInterge &B) 
{
	int a = A.getLength();
	int b = B.getLength();
	if (a > b)
		return true;
	else if (a == b)
	{
		int counter = 0;
		for (int i = a - 1; i >= 0; i--)
		{
			if (A.m_iarrHugeInt[i] > B.m_iarrHugeInt[i])
			{
				return true;
			}
			if (A.m_iarrHugeInt[i] == A.m_iarrHugeInt[i])
				counter++;
		}
		if (counter == a - 1)
			return true;
		return false;
	}
	else
		return false;
}

bool HugeInterge::isLessthanOrEqualTo( HugeInterge &A,  HugeInterge &B) 
{
	int a = A.getLength();
	int b = B.getLength();
	if (a < b)
		return true;
	else if (a == b)
	{
		int counter = 0;
		for (int i = a - 1; i >= 0; i--)
		{
			if (A.m_iarrHugeInt[i]<B.m_iarrHugeInt[i])
			{
				return true;
			}
			if (A.m_iarrHugeInt[i] == B.m_iarrHugeInt[i])
				counter++;
		}
		if (counter == a - 1)
			return true;
		return false;
	}
	else
		return false;
}
