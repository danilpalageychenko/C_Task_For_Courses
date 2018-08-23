#include "Complects.h"
#include <iostream>

using namespace std;


Complects::Complects(int a, int b)
{
	_a = (double)a;
	_b = (double)b;
}

Complects::Complects(double a, double b)
{
	_a = a;
	_b = b;
}

double Complects::getA()
{
	return _a;
}

void Complects::setA(int a)
{
	_a = (double)a;
}

void Complects::setA(double a)
{
	_a = a;
}

double Complects::getB()
{
	return _b;
}

void Complects::setB(int b)
{
	_b = (double)b;
}

void Complects::setB(double b)
{
	_b = b;
}

void Complects::print()
{
	if (_a == 0 && _b == 0)
	{
		cout << 0 << endl;
	}
	else {
		if (_a != 0)
		{
			cout << _a;
		}
		if (_b > 0)
		{
			if (_a == 0)
			{
				cout << _b << " * i";
			}
			else
			{
				cout << " + " << _b << " * i";
			}

		}
		else if (_b < 0)
		{
			cout << " - " << abs(_b) << " * i";
		}
	}
	cout << endl;
}

Complects Complects::operator+(Complects second)
{
	Complects tmp(0, 0);
	tmp.setA(_a + second._a);
	tmp.setB(_b + second._b);
	return tmp;
}

Complects Complects::operator-(Complects second)
{
	Complects tmp(0, 0);
	tmp.setA(_a - second._b);
	tmp.setB(_b - second._b);
	return tmp;
}

Complects Complects::operator*(Complects second)
{
	Complects tmp(0, 0);
	tmp.setA(_a*second._a - _b*second._b);
	tmp.setB(_a*second._b + _b*second._a);
	return tmp;
}

