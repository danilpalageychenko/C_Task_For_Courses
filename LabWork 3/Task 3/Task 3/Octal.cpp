#include "Octal.h"
#include <string>
#include <iostream>

using namespace std;


int length(unsigned char* &num)
{
	int i = 0;
	while (num[i] != '\0')
	{
		i++;
	}
	return i;
}


Octal::Octal(unsigned char* num)
{

	_ln = length(num);
	_num = new unsigned char[_ln];

	strcpy((char*)_num, (char*)num);

}

unsigned char* Octal::getNum()
{
	return _num;
}

int uctoi(unsigned char c)
{

	switch (c)
	{
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	default: return 0;
	}
}

unsigned char itouc(int a)
{
	if (a > 9 || a < 0)
		return NULL;
	switch (a)
	{
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	default: return NULL;
	}
}

Octal Octal::operator+(Octal second)
{
	
	
	unsigned char * cans = NULL;
	unsigned char* tmp;
	
	int thisNum = 0;
	int nextNum = 0;
	int size = 0;
	for (int i = 0; i < _ln; i++)
	{
		
		thisNum = uctoi(_num[i]) + uctoi(second._num[i]);
		thisNum += nextNum;
		nextNum = 0;
		while (thisNum > 7)
		{
			nextNum++;
			thisNum -= 7;
		}

		tmp = (unsigned char*) realloc(cans, ++size * sizeof(unsigned char));
		cans = tmp;
		cans[i] = itouc(thisNum);

		
	}
	if (_ln < second._ln)
	{
	
		tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
		cans = tmp;
		cans[_ln] = itouc(nextNum+uctoi(second._num[_ln]));

		for (int i = _ln+1; i < second._ln; i++)
		{
			
			tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
			cans = tmp;
			cans[i] = second._num[i];
		}
	}
	else if(nextNum !=0)
	{
		tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
		cans = tmp;
		cans[_ln] = itouc(nextNum);
	}
	tmp = (unsigned char*)realloc(cans, size * sizeof(unsigned char));
	cans = tmp;
	cans[size] = '\0';




	Octal ans(cans);
	return ans;
}

Octal Octal::operator-(Octal second)
{


	unsigned char * cans = NULL;
	unsigned char* tmp;

	int thisNum = 0;
	int nextNum = 0;
	int size = 0;
	for (int i = 0; i < _ln; i++)
	{

		thisNum = uctoi(_num[i]) - uctoi(second._num[i]);
		thisNum += nextNum;
		nextNum = 0;
		while (thisNum < 0)
		{
			nextNum--;
			thisNum += 7;
		}

		tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
		cans = tmp;
		cans[i] = itouc(thisNum);


	}
	if (_ln < second._ln)
	{

		tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
		cans = tmp;
		cans[_ln] = itouc(nextNum + uctoi(second._num[_ln]));

		for (int i = _ln + 1; i < second._ln; i++)
		{

			tmp = (unsigned char*)realloc(cans, ++size * sizeof(unsigned char));
			cans = tmp;
			cans[i] = second._num[i];
		}
	}
	tmp = (unsigned char*)realloc(cans, size * sizeof(unsigned char));
	cans = tmp;
	cans[size] = '\0';




	Octal ans(cans);
	return ans;
}

bool Octal::operator>(Octal second)
{
	if (length(_num) > length(second._num))
		return true;
	else if (length(_num) == length(second._num))
	{
		for (int i = _ln; i > 0; i--)
		{
			if (uctoi(_num[i]) > uctoi(second._num[i])) return true;
			else if (uctoi(_num[i]) == uctoi(second._num[i])) continue;
			else return false;
		}
		return false;
	}
	else
		return false;

}

bool Octal::operator<(Octal second)
{
	if (length(_num) < length(second._num))
		return true;
	else if (length(_num) == length(second._num))
	{
		for (int i = _ln; i > 0; i--)
		{
			if (uctoi(_num[i]) < uctoi(second._num[i])) return true;
			else if (uctoi(_num[i]) == uctoi(second._num[i])) continue;
			else return false;
		}
		return false;
	}
	else
		return false;

}

bool Octal::operator==(Octal second)
{
	if (length(_num) == length(second._num))
		return true;
	else
		return false;
}

bool Octal::operator!=(Octal second)
{
	if (length(_num) != length(second._num))
		return true;
	else
		return false;
}

bool Octal::operator>=(Octal second)
{
	if (length(_num) >= length(second._num))
		return true;
	else if (length(_num) == length(second._num))
	{
		for (int i = _ln; i > 0; i--)
		{
			if (uctoi(_num[i]) >= uctoi(second._num[i])) return true;
			else if (uctoi(_num[i]) == uctoi(second._num[i])) continue;
			else return false;
		}
		return false;
	}
	else
		return false;

}

bool Octal::operator<=(Octal second)
{
	if (length(_num) <= length(second._num))
		return true;
	else if (length(_num) == length(second._num))
	{
		for (int i = _ln; i > 0; i--)
		{
			if (uctoi(_num[i]) <= uctoi(second._num[i])) return true;
			else if (uctoi(_num[i]) == uctoi(second._num[i])) continue;
			else return false;
		}
		return false;
	}
	else
		return false;

}


