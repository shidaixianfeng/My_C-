#pragma once
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"
#include <string>
#include<iostream>
using std::cout;
using std::ostream;
using std::string;
class OverNightPackage:public Package
{
public:
	OverNightPackage(int flatfee, int weight, int cost, string senderState, string senderCity, string senderAddress, string senderName, int senderZIPCode, string RecipientState, string RecipientCity, string RecipientAddress, string RecipientName, int RecipientZIPCode);
	~OverNightPackage();
	virtual int CalculateCost();
	friend ostream& operator<<(ostream&output,  OverNightPackage &A);
private:
	int m_iAdditionalFeeofPerOunce;
};

#endif // !OVERNIGHTPACKAGE_H