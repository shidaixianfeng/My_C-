// change from fig.9-8
// name: Time.h

#ifndef TIME_H
#define TIME_H
class Time
{

public:
	Time(int, int, int, int, int, int);
	void set_year(int);
	void set_month(int);
	void set_day(int);
	int check_day(int);
	void set_hour(int);
	void set_minute(int);
	void set_second(int);
	void set_date(int, int, int);  // year month day
	void set_time(int, int, int); // hour minute second 
	void set_whole(int, int, int, int, int, int); // year month day hour minute second 

	int get_year();
	int get_month();
	int get_day();
	int get_hour();
	int get_minute();
	int get_second();

	void add_second(int); // the tick member function required in task;
	void add_minute(int);
	void add_hour(int);
	void add_day(int);


	void print_universal();
	void print_standard();
private:
	int year;
	int month;
	int day;
	int hour;   // 0-23 
	int minute; // 0-59 
	int second; // 0-59

};

#endif


