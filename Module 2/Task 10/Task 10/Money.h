#pragma once
#include "Pair.h"
class Money : public Pair

{
public:
	Money();
	Money(int _a, int _b);
	void setRuble();
	void setKopek();


	void Money::operator+=(int n);

	void Money::operator-=(int n);

	void Money::operator/=(int n);

	void show();

};


