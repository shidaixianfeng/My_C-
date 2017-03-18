#include "Time.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

Time::Time(int hour, int minute, int second, string x)
{
	SetHour(hour);
	SetMinute(minute);
	SetSecond(second);
	if (x == "AM")
		m_iMorning = 1;
	else
		m_iMorning = 2;
	//m_bFlag = false;
}

Time::~Time()
{
}

bool Time::SetHour(int Hour)
{
	if (Hour > 12 || Hour < 0)
	{
		m_iHour = 0;
		return false;
	}
	else
	{
		m_iHour = Hour;
	}
	return true;
}

bool Time::SetMinute(int Minute)
{
	if (Minute > 60 || Minute < 0)
	{
		m_iMinute = 0;
		return false;
	}
	else
	{
		m_iMinute = Minute;
	}
	return true;
}

bool Time::SetSecond(int Second)
{
	if (Second > 60 || Second < 0)
	{
		m_iSecond = 0;
		return false;
	}
	else
	{
		m_iSecond = Second;
	}
	return true;
}

int Time::getHour() const
{

	return m_iHour;
}

int Time::getMinute() const
{
	return m_iMinute;
}

int Time::getSecond() const
{
	return m_iSecond;
}

void Time::tick(bool counter)
{
	if(counter)
	{
		m_iSecond += 1;
		if(m_iSecond>=60)
		{
			m_iSecond %= 60;
			m_iMinute += 1;
			if(m_iMinute>=60)
			{
				m_iMinute %= 60;
				m_iHour++;
			}
		}
	}
		if (m_iHour == 12 && m_iMinute == 0 && m_iSecond == 0)
		{
			m_iMorning++;
		}
		if (m_iHour >= 13)
		{
			m_iHour %= 12;
		}
	cout << setw(2)<<setfill('0')<<getHour() << ":" << setw(2) << setfill('0')<< getMinute()<< ":" << setw(2)<<setfill('0')<<getSecond() << " ";
	if (m_iMorning % 2 == 0)
		cout << "PM";
	else
		cout << "AM";
	cout << endl;
}


