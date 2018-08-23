#pragma once

	
struct date
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
};

class Date
{
public:
	Date();
	Date(unsigned int day,unsigned int month,unsigned int year);
	//setters
	void setDate1();
	void setDate2();
	void setDay();
	void setMonth();
	void setYear();
	void clear();
	//chekers
	void checkDate1(int &day,int &month,int &year);
	void checkDate2(int &day, int &month, int &year);
	//getters
	unsigned int getDay();
	unsigned int getMonth();
	unsigned int getYear();

	//showers
	void showDatePlusDays();
	void showDateMinusDays();
	void showIsLeap();
	void showCountDays();
	void showWhatBigger();

	void KillMe() { this->~Date(); }
private:
	date _date;
};

