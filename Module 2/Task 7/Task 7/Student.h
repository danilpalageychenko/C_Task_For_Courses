#pragma once
#include "Man.h"
class Student : public Man
{
public:
	Student(string name,int old,bool sex,double weight,int year);

	void setYear(int year);
	Student &operator++(int num);
	void show();
private:
	int _year;
};

