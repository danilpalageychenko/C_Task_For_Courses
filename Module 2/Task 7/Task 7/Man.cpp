#include "Man.h"
#include <string>
#include <iostream>
using namespace std;


Man::Man(string name, int old, bool sex, double weight)
{
	_name = name;
	_old = old;
	_sex = sex;
	_weight = weight;
}

void Man::setName(string name)
{
	_name = name;
}
void Man::setOld(int old)
{
	_old = old;
}
void Man::setWeight(double weight)
{
	_weight = weight;
}

void Man::show()
{
	cout << "Name:" << _name << endl;
	cout << "Old:" << _old << endl;
	cout << "Sex:";
	if (true)
		cout << "Male" << endl;
	else
		cout << "Female" << endl;

	cout << "Weight:" << _weight << endl;

}


