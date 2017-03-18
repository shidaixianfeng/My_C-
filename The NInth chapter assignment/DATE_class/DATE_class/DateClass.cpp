#include "DateClass.h"
#include<iostream>
#include<iomanip>
using namespace std;
DateClass::DateClass(int year, int month, int day)
{
	bool flag1=setYear(year);
	bool flag2=setMonth(month);
	bool flag3=setDay(day);
	if (!(flag1&&flag2&&flag3))
	{
		cout << "you have enter an invalid date and the date will be initialized 2017/01/01" << endl;
		flag1 = setYear(2017);
		flag2 = setMonth(1);
		flag3 = setDay(1);
	}
}

DateClass::~DateClass()
{
	cout << "the day is over;";
}

bool DateClass::setYear(int year)
{
	if (year <= 0)
		return false;
	else
	{
		m_iYear = year;
		return true;
	}
}
bool DateClass::setMonth(int month)
{
	if(month<=0||month>12)
	return false;
	else
	{
		m_iMonth = month;
		return true;
	}
}

bool DateClass::setDay(int day)
{
	if (checkday(day))
	{
		m_iDay = day;
		return true;
	}
	else
		return false;
	
}
bool DateClass::checkday(int day) const
{
	if (day > 31 || day <= 0)
		return false;
	else if (day <= DayofMonth[m_iMonth] && day > 0)
	{
		return true;
	}
	else if (m_iMonth == 2 && day == 29 && (m_iYear % 4 == 0 && m_iYear % 100 != 0 || m_iYear % 400 == 0))
	{
		return true;
	}
	else
		return false;
}
void DateClass::print() const
{
	cout << setfill('0') << setw(4) << m_iYear << "/" << setfill('0') << setw(2) << m_iMonth << "/" << setfill('0') << setw(2) << m_iDay << endl;
}
void DateClass::Nextday()
{
	m_iDay++;
	if(!checkday(m_iDay))
	{
		m_iMonth++;
		m_iDay = 1;
		if(m_iMonth==13)
		{
			m_iYear++;
			m_iMonth = 1;
		}
	}
}
const int DateClass::DayofMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };