#pragma once
#ifndef HUGEINTERGE_H
#define HUGEINTERGE_H
#include<string>
#include<iostream>
using namespace std;
class HugeInterge
{
public:
	HugeInterge();
	~HugeInterge();
	int m_iarrHugeInt[40];
	bool input();
	bool output(bool flag);
	int getLength();
	bool add(HugeInterge& ,  HugeInterge&);
	bool substract(HugeInterge &, HugeInterge&);
	bool isNotequal( HugeInterge &, HugeInterge&) ;
	bool isGreaterThan( HugeInterge &, HugeInterge&);
	bool isLessThan( HugeInterge &,  HugeInterge&);
	bool isGreaterThanOrEqualTo( HugeInterge &,  HugeInterge&) ;
	bool isLessthanOrEqualTo( HugeInterge &,  HugeInterge&) ;
private:
	string m_sNumber;
	int m_iLength;
};
#endif // !HUGEINTERGE_H

