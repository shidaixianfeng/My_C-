#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
class Package
{
public:
	Package(int weigth = 0, int cost = 0, string senderState = "", string senderCity = "", string senderAddress = "", string senderName = "", int senderZIPCode = 0, string RecipientState = "", string RecipientCity = "", string RecipientAddress = "", string RecipientName = "", int RecipientZIPCode = 0);
	~Package();
	string m_sSenderName;
	string m_sRecipientName;
	string m_sSenderAddress;
	string m_sRecipientAddress;
	string m_sSenderCity;
	string m_sRecipientCity;
	string m_sSenderState;
	string m_sRecipientState;
	int m_iSenderZIPcode;
	int m_iRecipientZIPcode;
	int m_iWeight;
	int m_iCostOfPerWeight;
	virtual int CalculateCost();
	friend ostream& operator<<(ostream&output, Package &A);
};
#endif // !PACKAGE_H
