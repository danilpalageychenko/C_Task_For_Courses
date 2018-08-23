#pragma once
#include "Car.h"
#include <string>

using namespace std;

class Lorry : public Car
{
public:
	Lorry(string mark, double weight, double power, double load_capacity);
	Lorry(string mark, int weight, int power, double load_capacity);
	Lorry(string mark, double weight, int power, double load_capacity);
	Lorry(string mark, int weight, double power, double load_capacity);
	
	Lorry(string mark, double weight, double power, int load_capacity);
	Lorry(string mark, int weight, int power, int load_capacity);
	Lorry(string mark, double weight, int power, int load_capacity);
	Lorry(string mark, int weight, double power, int load_capacity);

	void setMark(string mark);
	void setLoadCapacity(double);
	void setLoadCapacity(int);

	void show();

private:
	double _load_capacity;
};

