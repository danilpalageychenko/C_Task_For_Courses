#pragma once

#include <string>

using namespace std;

class Man
{
public:
	Man(string name,int old,bool sex,double weight);

	void setName(string name);
	void setOld(int old);
	void setWeight(double weight);


	void show();
protected:

	string _name;
	int _old;
	bool _sex;
	double _weight;
};

