#pragma once
#include <string>

using namespace std;

class Car
{
public:
	
	Car(string mark,double weight,double power);
	Car(string mark, int weight, int power);
	Car(string mark, double weight, int power);
	Car(string mark, int weight, double power);

	void setPower(double power);
	void setPower(int power);

	void show();
protected:
	string _mark;
	double _weight;
	double _power;
};

