#include "Lorry.h"
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

Lorry::Lorry(string mark, double weight, double power, double load_capacity) : Car(_mark,_weight,_power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, int weight, int power, double load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, double weight, int power, double load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, int weight, double power, double load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}

Lorry::Lorry(string mark, double weight, double power, int load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, int weight, int power, int load_capacity) : Car(mark, weight, power)
{
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, double weight, int power, int load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}
Lorry::Lorry(string mark, int weight, double power, int load_capacity) : Car(_mark, _weight, _power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
	_load_capacity = load_capacity;
}

void Lorry::setMark(string mark)
{
	_mark = mark;
}
void Lorry::setLoadCapacity(double)
{
	_load_capacity = _load_capacity;
}
void Lorry::setLoadCapacity(int)
{
	_load_capacity = _load_capacity;
}

void Lorry::show()
{
	cout << "Марка:" << _mark << endl;
	cout << "Вес:" << _weight << endl;
	cout << "Мощность:" << _power << endl;
	cout << "Грузоподемность:" << _load_capacity << endl;
}