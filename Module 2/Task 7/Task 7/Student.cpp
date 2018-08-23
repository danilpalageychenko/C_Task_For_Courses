#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name, int old, bool sex, double weight,int year) : Man(name,old,sex,weight)
{
	_year = year;
}

void Student::setYear(int year)
{
	_year = year;
}

Student& Student::operator++(int num)
{
	
	_year++;
	return *this;
}
void Student::show()
{
		cout << "Name:" << _name << endl;
		cout << "Old:" << _old << endl;
		cout << "Sex:";
		if (true)
			cout << "Male" << endl;
		else
			cout << "Female" << endl;

		cout << "Weight:" << _weight << endl;
		cout << "Year = " << _year << endl;
}


