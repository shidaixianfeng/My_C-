#pragma once
#ifndef DATEANDTIME_H
#define DATEANDTIME_H
class DateAndTime
{
public:
	DateAndTime(int year, int month, int day, int hour, int minute, int second);
	~DateAndTime();
	void printday() const;
	void printUniversal() const;
	void printStandard() const;
	void NextDay();//the day will add by one day;
	void tick();//the time will add by one second
private:
	int m_iYear;
	int m_iMonth;
	int m_iDay;
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
	bool CheckTime(int hour, int minute, int second) const;
	bool CheckDay(int year,int month, int day) const;
	static const int DayOfMonth[13];
};
#endif // !DATEANDTIME_H
