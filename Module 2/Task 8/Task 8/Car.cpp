#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

Car::Car(string mark, double weight, double power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
}
Car::Car(string mark, int weight, int power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
}
Car::Car(string mark, double weight, int power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
}
Car::Car(string mark, int weight, double power)
{
	_mark = mark;
	_weight = weight;
	_power = power;
}
void Car::setPower(double power)
{
	_power = power;
}
void Car::setPower(int power)
{
	_power = power;
}

void Car::show()
{
	cout << "�����:" << _mark << endl;
	cout << "���:" << _weight << endl;
	cout << "��������:" << _power << endl;
}