#pragma once
#include "Triad.h"
class Time : public Triad
{
public:

	Time(int hour, int minute, int sec);
	
	void show();

	Time whatBigger(Time first,Time Second);
	Time whatLess(Time first, Time Second);
};

