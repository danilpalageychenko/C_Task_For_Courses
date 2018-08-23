#include "Time.h"
#include <iostream>

Time:: Time(int hour, int minute, int sec) : Triad(_number1, _number2, _number3)
{
	_number1 = hour;
	_number2 = minute;
	_number3 = sec;
}

void Time::show()
{
	std::cout << _number1 << ":" << _number2 << ":" << _number3 << std::endl;
}

Time Time::whatBigger(Time first, Time Second)
{
	if (first.getNumber1() > Second.getNumber1())
		return first;
	else
		return Second;

	
	if (first.getNumber2() > Second.getNumber2())
		return first;
	else
		return Second;


	if (first.getNumber3() > Second.getNumber3())
		return first;
	else
		return Second;


}

Time Time::whatLess(Time first, Time Second)
{
	if (first.getNumber1() < Second.getNumber1())
		return first;
	else
		return Second;


	if (first.getNumber2() < Second.getNumber2())
		return first;
	else
		return Second;


	if (first.getNumber3() < Second.getNumber3())
		return first;
	else
		return Second;

	std::cout << "Объекты равны" << std::endl;

}


