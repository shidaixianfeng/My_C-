// member-function definition for class Time 
# include <iostream>
# include "Time.h"
# include <stdexcept> 
# include <iomanip>
using namespace std;


Time::Time(int y, int mon, int d, int h, int m, int s)
{
	set_whole(y, mon, d, h, m, s);
}
void Time::set_whole(int y, int mon, int d, int h, int m, int s)
{
	set_date(y, mon, d);
	set_time(h, m, s);
}

void Time::set_date(int y, int mon, int d)
{
	set_year(y);
	set_month(mon);
	set_day(d);
}

void Time::set_year(int y)
{
	year = y;
}

void Time::set_month(int mon)
{
	if (mon >= 1 && mon <= 12)
		month = mon;
	else
		throw ("month must be 1-12");
}

void Time::set_day(int d)
{
	day = check_day(d);
}

int Time::check_day(int test_day)
{
	static const int days_per_month[13] =
	{ 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (test_day > 0 && test_day <= days_per_month[month])
		return test_day;
	if (month == 2 && test_day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
		return test_day;
}

void Time::set_time(int h, int m, int s)
{
	set_hour(h);
	set_minute(m);
	set_second(s);
}

void Time::set_hour(int h)
{
	if (h >= 0 && h<24)
		hour = h;
	//else
		//throw invalid_argument("hour must be 0-23");
}

void Time::set_minute(int m)
{
	if (m >= 0 && m<60)
		minute = m;
	//else
		//throw invalid_argument("minute must be 0-59");
}

void Time::set_second(int s)
{
	if (s >= 0 && s<60)
		second = s;
	//else
		//throw invalid_argument("second must be 0-59");
}

int  Time::get_year()
{
	return year;
}
int  Time::get_month()
{
	return month;
}
int  Time::get_day()
{
	return day;
}
int  Time::get_hour()
{
	return hour;
}
int  Time::get_minute()
{
	return minute;
}
int  Time::get_second()
{
	return second;
}

void Time::add_second(int s)
{

	cout << endl << "you have added " << s << " second(s)" << endl;
	int multiple = (second + s) / 60;
	if (multiple >= 1)
	{
		add_minute(multiple);
	}
	second = (second + s) % 60;
}

void Time::add_minute(int m)
{
	//cout<<endl<<"you have added "<<m<<" minute(s) to the object of class Time";
	int 	multiple = (minute + m) / 60;
	if (multiple >= 1)
	{
		add_hour(multiple);
	}
	minute = (minute + m) % 60;

}

void Time::add_hour(int h)
{
	// cout<<endl<<"you have added "<<h<<" hour(s) to the object of class Time";
	int  multiple = (minute + h) / 24;
	if (multiple >= 1)
	{
		add_day(multiple);
	}
	hour = (hour + h) % 24;
}


void Time::add_day(int d)
{
	day += d;
	cout << endl;
	cout << endl << "you have added " << d << " day(s) to the object of class Time";
}


void  Time::print_universal()
{
	cout << endl;
	cout << "universal date time : " << get_year() << " " << setfill('0') << setw(2) << get_month() << " " << setw(2) << get_day() << "  "
		<< setfill('0') << setw(2) << get_hour() << ":" << setw(2) << get_minute() << ":" << setw(2) << get_second();
}

void  Time::print_standard()
{
	cout << endl;
	cout << " standard date time : " << get_year() << " " << setfill('0') << setw(2) << get_month() << " " << setw(2) << get_day() << "  "
		<< setfill('0') << setw(2) << ((get_hour() == 0 || get_hour() == 12) ? 12 : get_hour() % 12) << ":"
		<< setw(2) << get_minute() << ":" << setw(2) << get_second() << (hour<12 ? " AM" : " PM");
}



