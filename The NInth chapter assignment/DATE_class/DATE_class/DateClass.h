#pragma once
#ifndef DATE_H
#define DATE_H
class DateClass
{
public:
	DateClass(int year = 2000, int month = 1, int day=1);
	~DateClass();
	bool setYear(int year);
	bool setMonth(int month);
	bool setDay(int day);
	void print() const;
	void Nextday();
private:
	int m_iMonth;
	int m_iYear;
	int m_iDay;
	static const int DayofMonth[13];
	bool checkday(int day) const;
};

#endif // !DATE_H




