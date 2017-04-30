#include "Package.h"



Package::Package(int weight, int cost, string senderState, string senderCity, string senderAddress, string senderName, int senderZIPCode, string RecipientState, string RecipientCity, string RecipientAddress, string RecipientName, int RecipientZIPCode) :m_sSenderState(senderState), m_sSenderCity(senderCity), m_sSenderAddress(senderAddress), m_sSenderName(senderName), m_sRecipientState(RecipientState), m_sRecipientCity(RecipientCity), m_sRecipientAddress(RecipientAddress), m_sRecipientName(RecipientName), m_iRecipientZIPcode(RecipientZIPCode), m_iCostOfPerWeight(cost), m_iWeight(weight)
{
}


Package::~Package()
{
}

int Package::CalculateCost()
{
	return m_iWeight*m_iCostOfPerWeight;
}
ostream & operator<<(ostream & output, Package & A)
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