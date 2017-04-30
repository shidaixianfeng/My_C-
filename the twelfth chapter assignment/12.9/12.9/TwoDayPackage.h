#pragma once
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"Package.h"
#include<iostream>
using std::cout;
using std::ostream;
class TwoDayPackage:public Package
{
public:
	TwoDayPackage(int flatfee,int weight, int cost, string senderState, string senderCity, string senderAddress, string senderName, int senderZIPCode, string RecipientState, string RecipientCity, string RecipientAddress, string RecipientName, int RecipientZIPCode);
	~TwoDayPackage();
	virtual int CalculateCost();
	friend ostream& operator<<(ostream&output,TwoDayPackage &A);
private:
	int m_iFlatFlee;
};

#endif // !TWODAYPACKAGE_H
