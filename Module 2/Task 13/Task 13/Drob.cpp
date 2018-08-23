#include "Drob.h"
#include <iostream>

using namespace std;

Drob::Drob()
{
	_n = 0;
	_m = 1;
}
Drob::Drob(int n, int m) 
{
	_n = n;
	_m = m;
}
void Drob::setN(int n)
{
	_n = n;
}

void Drob::setM(int m)
{
	_m = m;
}

void Drob::show()
{
	cout << _n << "/" << _m << endl;
}

void Drob::operator *(Drob second)
{
	_n *= second._n;
	_m *= second._m;
}

void Drob::operator *(int second)
{
	_n *= second;
}

void Drob::operator/(Drob second)
{
	_n *= second._m;
	_m *= second._n;
}

void Drob::operator -(Drob second)
{
	if (_m != second._m)
	{
		_n = _n * second._m - _m * second._n;
		_m *= second._m;
	}
	else {
		_n -= - second._n;
	}

}

void Drob::operator +(Drob _add)
{
	if (_m != _add._m)
	{
		_n = _n * _add._m + _m * _add._n;
		_m *= _add._m;
	}
	else {
		_n += _add._n;
	}
}
