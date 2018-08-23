#include "Money.h"
#include "Pair.h"

#include <iostream>

using namespace std;

Money::Money() : Pair()
{

}
Money::Money(int _a, int _b) : Pair(_a, _b)
{

}
void Money::setRuble()
{
	cout << "Введите количество рублей" << endl;
	cin >> _a;
}
void Money::setKopek()
{
	cout << "Введите количество копеек" << endl;
	cin >> _b;
}


void Money::operator+=(int n)
{
	int tmp;
	tmp = (_a * 100) + _b + n;
	_a = (int)(tmp / 100);
	_b = tmp - _a * 100;
}

void Money::operator-=(int n)
{
	int tmp;
	tmp = (_a * 100) + _b - n;
	_a = (int)(tmp / 100);
	_b = tmp - _a * 100;
}

void Money::operator/=(int n)
{
	int tmp;
	tmp = ((_a * 100) + _b) / n;
	_a = (int)(tmp / 100);
	_b = tmp - _a * 100;
}
void Money::show()
{
	int summ(0);
	cout << "Рублей: " << _a << endl <<
		"Копеек: " << _b << endl;

}

