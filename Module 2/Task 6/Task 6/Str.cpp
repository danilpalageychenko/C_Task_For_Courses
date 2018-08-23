#include "Str.h"
#include <string>

using namespace std;

Str::Str(string str)
{
	_str = str;
}

void Str::operator=(string second)
{
	_str = second;
}

void Str::operator=(Str second)
{
	_str = second._str;
}


void Str::operator+=(string second)
{
	_str += second;
}
void Str::operator+=(Str second)
{
	_str += second._str;
}
char Str::operator[](int num)
{
	return _str[num];
}

int Str::length()
{
	return _str.length();
}