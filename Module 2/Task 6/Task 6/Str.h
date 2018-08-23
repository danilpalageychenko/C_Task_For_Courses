#pragma once

#include <string>
#include <iostream>

using namespace std;

class Str
{
public:
	Str(string str);
	
	void operator=(string second);
	void operator=(Str second);
	void operator+=(string second);
	void operator+=(Str second);
	friend ostream &operator<<(ostream& os, Str& str)
	{
		os << str._str;
		return os;
	}

	char operator[](int num);
	int length();

private:
	string _str;
};

