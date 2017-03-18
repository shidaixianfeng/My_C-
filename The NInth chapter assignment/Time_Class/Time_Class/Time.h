#pragma once
#ifndef TIME_H
#define TIME_H
#include<string>
using namespace std;
class Time
{
public:
	Time(int hour, int minute, int second, string x);
	~Time();
	bool SetHour(int Hour);
	bool SetMinute(int Minute);
	bool SetSecond(int Second);
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	void tick(bool counter);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
	int m_iMorning;
	int m_iLastMorning;
	//bool m_bFlag;
};

#endif // !TIME_H
