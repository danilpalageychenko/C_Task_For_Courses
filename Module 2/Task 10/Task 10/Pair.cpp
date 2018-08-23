#include "Pair.h"
#include <iostream>

using namespace std;

Pair::Pair() 
{

}

Pair::Pair(int a, int b)
{
	_a = a;
	_b = b;
}

void Pair::setA()
{
	cout << "¬ведите a :" << endl;
	cin >> _a;

}

int Pair::getA()
{
	return _a;
}

void Pair::setB()
{
	cout << "¬ведите b :" << endl;
	cin >> _b;
}

int Pair::getB()
{
	return _b;
}



Pair Pair::operator*(int second)
{
	Pair ans;
	ans._a *= second;
	ans._b *= second;
	return ans;
}

void Pair::show()
{
	cout << "a=" << _a << endl;
	cout << "b=" << _b << endl;
}

Pair Pair::operator+(Pair second)
{
	Pair ans(0, 0);
	ans._a = _a + second._a;
	ans._b = _b + second._b;
	return ans;
}