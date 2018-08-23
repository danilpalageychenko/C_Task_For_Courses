#include "Triad.h"



Triad::Triad(int a, int b, int c)
{
	_number1 = a;
	_number2 = b;
	_number3 = c;
}

int Triad::getNumber1()
{
	return _number1;
}
int Triad::getNumber2()
{
	return _number2;
}
int Triad::getNumber3()
{
	return _number3;
}

int Triad::whatBigger()
{
	int ans = _number1 > _number2 ? _number1 : _number2;
	return _number3 > ans ? _number3 : ans;
}

