#include "DateAndTime.h"
#include<iostream>
#include<iomanip>
using namespace std;
DateAndTime::DateAndTime(int year, int month, int day, int hour, int minute, int second)
{
	if (CheckDay(year, month, day))
	{
		m_iYear = year;
		m_iMonth = month;
		m_iDay = day;
	}
	else
	{
		cout << "the date which you enter is wrong and date will be initiliazed to 2017/01/01" << endl;
		m_iYear = 2017;
		m_iMonth = 1;
		m_iDay = 1;
	}
	if(CheckTime(hour, minute, second))
	{
		m_iHour = hour;
		m_iMinute = minute;
		m_iSecond = second;
	}
	else
	{
		cout << "the time which you enter is wrong and the time will be initiliazed 00:00:00" << endl;
		m_iHour = 0;
		m_iMinute = 0; 
		m_iSecond = 0;
	}
}

DateAndTime::~DateAndTime()
{
}

void DateAndTime::printday() const
{
	cout << setfill('0') << setw(4) << m_iYear << "/" << setfill('0') << setw(2) << m_iMonth << "/" << setfill('0') << setw(2) << m_iDay << "   ";
}

void DateAndTime::printUniversal() const
{
	cout << setfill('0') << setw(2) << m_iHour << ":" << setfill('0') << setw(2) << m_iMinute << ":" << setfill('0') << setw(2) << m_iSecond;
}

void DateAndTime::printStandard() const
{
	if (m_iHour >= 0 && m_iHour <12)
	{
		printUniversal();
		cout << "  AM";
	}
	else
	{
		if (m_iHour == 12)
		{
			cout << setfill('0') << setw(2) << m_iHour << ":" << setfill('0') << setw(2) << m_iMinute << ":" << setfill('0') << setw(2) << m_iSecond << "  PM";
		}
		else
		{
			cout << setfill('0') << setw(2) << m_iHour % 12<< ":" << setfill('0') << setw(2) << m_iMinute << ":" << setfill('0') << setw(2) << m_iSecond << "  PM";
		}
	}

}

void DateAndTime::NextDay()
{
	m_iDay++;
	if(!CheckDay(m_iYear,m_iMonth,m_iDay))
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

void DateAndTime::tick()
{
	m_iSecond++;
	if(!CheckTime(m_iHour,m_iMinute,m_iSecond))
	{
		m_iMinute++;
		m_iSecond = 0;
		if(m_iMinute==60)
		{
			m_iHour++;
			m_iMinute = 0;
		}
		if(m_iHour==24)
		{
			NextDay();
			m_iHour = 0;
		}
	}
}
bool DateAndTime::CheckTime(int hour, int minute, int second) const
{
	if (hour >=24 || minute >= 60 || second >= 60||hour<0||minute<0||second<0)
		return false;
	else
		return true;
}

bool DateAndTime::CheckDay(int year,int month, int day) const
{
	if (month == 2 && day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		return true;
	else if (month >= 13 || month <= 0 || day <= 0 || day > DayOfMonth[month])
	{
		return false;
	}
	else
		return true;
}
const int DateAndTime::DayOfMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


