#include "Date.h"
#include "iostream"
#include <string>
using namespace std;


Date::Date()
{
}
Date::Date(unsigned int day, unsigned int month, unsigned int year)
{
	_date.day = day;
	_date.month = month;
	_date.year = year;
}

void Date::setDate1()
{
	int day;
	int month;
	int year;
	checkDate1(day, month, year);
	_date.day = day;
	_date.month = month;
	_date.year = year;
}

void Date::setDate2()
{
	int day;
	int month;
	int year;
	checkDate2(year, month, day);
	_date.day = day;
	_date.month = month;
	_date.year = year;
}

void Date::setDay()
{
	int Day;
	cout << "Введите день:";
	cin >> Day;
	_date.day = Day;
}
void Date::setMonth()
{
	int Month;
	cout << "Введите месяц:";
	cin >> Month;
	_date.month = Month;
}
void Date::setYear()
{
	int Year;
	cout << "Введите год:";
	cin >> Year;
	_date.year = Year;
}

void Date::clear()
{
	_date.day = 0;
	_date.month= 0;
	_date.year = 0;
}

//ГОД.МЕСЯЦ.ДЕНЬ + ввод
void Date::checkDate2(int &day,int &month, int &year)
{
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	char buf[100];
	int tmp[3];
	char str[100];
	int u = 0;
	while (1)
	{
		try
		{

			cout << "Введите дату в виде yyyy/mm/dd" << endl;

			u = 0;

			cin.getline(str, 100);

			char *ch = strtok(str, "./ ");
			while (ch != NULL)
			{
				tmp[u] = stoi(ch);
				ch = strtok(NULL, "./ ");
				u++;
			}
			day = tmp[2];
			month = tmp[1];
			year = tmp[0];
			//cout << day << " " << month << " " << year << " " << endl;
			itoa(tmp[0], buf, 10);
			if (u < 3)
				throw "Ввёдены не все числа";
			if (strlen(buf) < 4 || strlen(buf) > 4 || year > 2015)
				throw "Год ввёден неправильно!";
			if (month > 12 || month <= 0)
				throw "Введён не существующий месяц!";
			if (day > days[month - 1] || day <= 0)
				throw "Введён неверный день!";

			break;
		}
		catch (const exception &e)
		{
			cout << "Дата введена не правильно" << endl;
		}
		catch (const char *msg)
		{
			cout << msg << endl;
		}
	}

	
}

//ДЕНЬ.МЕСЯЦ.ГОД + ввод
void Date::checkDate1(int &day, int &month, int &year)
{

	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	char buf[100];
	char str[100];
	int tmp[3];
	int u = 0;
	while (1)
	{


		cout << "Введите дату в виде dd/mm/yyyy" << endl;

		u = 0;

		cin.getline(str, 100);



		try
		{
			char *ch = strtok(str, "./ ");
			while (ch != NULL)
			{
				tmp[u] = stoi(ch);
				ch = strtok(NULL, "./ ");
				u++;
			}
			day = tmp[0];
			month = tmp[1];
			year = tmp[2];
			itoa(year, buf, 10);
			if (u < 3)
				throw "Ввёдены не все числа";
			if (month > 12 || month <= 0)
				throw "Введён не существующий месяц!";
			if (day > days[month-1] || day <= 0)
				throw "Введён неверный день!";
			if (strlen(buf) < 4 || strlen(buf) > 4 || year > 2015)
				throw "Год ввёден неправильно!";
			break;
		}
		catch (const exception &e)
		{
			cout << "Дата введена не правильно" << endl;
		}
		catch (const char *msg)
		{
			cout << msg << endl;
		}
	}

}
//getters
unsigned int Date::getDay()
{
	return _date.day;
}
unsigned int Date::getMonth()
{
	return _date.month;
}
unsigned int Date::getYear()
{
	return _date.year;
}

void Date::showDatePlusDays()
{
	unsigned int days_to_add;
	cout << "Сколько дней добавить?:";
	cin >> days_to_add;
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	unsigned int day = getDay();
	unsigned int month = getMonth();
	unsigned int year = getYear();

	day+=days_to_add;
	while (day > days[month-1])
	{
		day -= days[month-1];
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}

	cout << "Через " << days_to_add << " будет " << day << "." << month << "." << year << endl;
	system("pause");
}

void Date::showDateMinusDays()
{
	unsigned int days_to_reduce;
	cout << "Сколько дней отнять?:";
	cin >> days_to_reduce;
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int day = getDay();
	int month = getMonth();
	int year = getYear();

	day -= days_to_reduce;
	while (day < 0)
	{
		day += days[month - 1];
		month--;
		if (month < 1)
		{
			month = 12;
			year--;
		}
	}

	cout << days_to_reduce << " дней назад было " << day << "." << month << "." << year << endl;
	system("pause");
}

void Date::showIsLeap()
{
	if (getYear() % 4 == 0)
		cout << "Год високосный" << endl;
	else
		cout << "Год не високосный" << endl;
	system("pause");
}

void Date::showCountDays()
{
	int day1;
	int month1;
	int year1;
	int day2;
	int month2;
	int year2;
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int ans = 0;
	cout << "Дата 1:";
	checkDate1(day1, month1, year1);
	cout << "Дата 2:";
	checkDate1(day2, month2, year2);

	ans+=abs(day1 - day2);
	for (int i = 0; i < abs(month1 - month2); i++)
	{
		ans += days[i];
	}
	ans += abs(year1 - year2) * 365;

	cout << "Между датами разница " << ans << " Дней" << endl;
	system("pause");
}


int Date::countDaysWithArgs(int day2,int month2,int year2)
{
	
	
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int ans = 0;

	ans += abs((int)_date.day - day2);
	for (int i = 0; i < abs((int)_date.month - month2); i++)
	{
		ans += days[i];
	}
	ans += abs((int)_date.year - year2) * 365;

	return ans;
}


void Date::showWhatBigger()
{
	short int ans;
	int day1;
	int month1;
	int year1;
	int day2;
	int month2;
	int year2;
	cout << "Дата 1:";
	checkDate1(day1, month1, year1);
	cout << "Дата 2:";
	checkDate1(day2, month2, year2);

	if (year1 - year2 < 0)
		ans = 2;
	else if (year1 - year2 > 0)
		ans = 1;
	else if (year1 == year2)
	{
		if (month1 - month2 < 0)
			ans = 2;
		else if (month1 - month2 > 0)
			ans = 1;
		else if (month1 == month2)
		{
			if (day1 - day2 < 0)
				ans = 2;
			else if (day1 - day2 > 0)
				ans = 1;
			else if (day1 == day2)
				ans = 0;
		}
	}

	switch (ans)
	{
	case 0:
		cout << "Даты равны" << endl;
		break;
	case 1:
		cout << "Первая дата больше" << endl;
		break;
	case 2:
		cout << "Вторая дата больше" << endl;
		break;
	}
	system("pause");
}