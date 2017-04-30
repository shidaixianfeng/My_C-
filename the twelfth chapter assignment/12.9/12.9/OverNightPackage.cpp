#include "OverNightPackage.h"



OverNightPackage::OverNightPackage(int flatfee, int weight, int cost, string senderState, string senderCity, string senderAddress, string senderName, int senderZIPCode, string RecipientState, string RecipientCity, string RecipientAddress, string RecipientName, int RecipientZIPCode):Package(weight, cost, senderState, senderCity, senderAddress, senderName, senderZIPCode, RecipientState, RecipientCity, RecipientAddress, RecipientName, RecipientZIPCode),m_iAdditionalFeeofPerOunce(flatfee)
{
}


OverNightPackage::~OverNightPackage()
{
}

int OverNightPackage::CalculateCost()
{
	return (m_iAdditionalFeeofPerOunce+m_iCostOfPerWeight)*m_iWeight;
}

ostream & operator<<(ostream & output,  OverNightPackage & A)
{
	output << "The sender is: " << A.m_sSenderName << endl;
	output << "The Address of the sender is: " << A.m_sSenderState << " " << A.m_sSenderCity << " " << A.m_sSenderAddress << endl;
	output << endl;
	output << "The recipient is: " << A.m_sRecipientName << endl;
	output << "The Address of the recipient is: " << A.m_sRecipientState << " " << A.m_sRecipientCity << " " << A.m_sRecipientAddress << endl;
	output << "The cost is: " << A.CalculateCost() << endl;
	return output;
	// TODO: 在此处插入 return 语句
}
