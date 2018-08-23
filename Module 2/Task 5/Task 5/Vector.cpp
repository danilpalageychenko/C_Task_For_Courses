#include "Vector.h"
#include <cmath>
#include <iostream>

using namespace std;

Vector::Vector()
{
	_x = 0;
	_y = 0;
	_z = 0;
}
Vector::Vector(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(int x, int y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(int x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(double x, int y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(double x, double y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(int x, int y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(int x, double y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}
Vector::Vector(double x, int y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vector Vector::operator+(Vector second)
{
	Vector tmp;
	tmp._x = _x + second._x;
	tmp._y = _y + second._y;
	tmp._z = _z + second._z;
	return tmp;
}
Vector Vector::operator-(Vector second)
{
	Vector tmp;
	tmp._x = _x - second._x;
	tmp._y = _y - second._y;
	tmp._z = _z - second._z;
	return tmp;
}
double Vector::operator*(Vector second)
{
	return (_x * second._x +	_y * second._y + _z * second._z);
}

double Vector::getX()
{
	return _x;
}
double Vector::getY()
{
	return _y;
}
double Vector::getZ()
{
	return _z;
}

double Vector::lenght()
{
	return sqrt(pow(_x, 2) + pow(_y, 2) + pow(_z, 2));
}