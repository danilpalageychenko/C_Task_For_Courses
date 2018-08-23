#pragma once
#include <iostream>

using namespace std;

class Vector
{
public:
	Vector();
	Vector(double x,double y, double z);
	Vector(int x, int y, int z);

	Vector(int x, double y, double z);
	Vector(double x, int y, double z);
	Vector(double x, double y, int z);

	Vector(int x, int y, double z);
	Vector(int x, double y, int z);
	Vector(double x, int y, int z);

	Vector operator-(Vector second);
	Vector operator+(Vector second);
	double operator*(Vector second);

	double getX();
	double getY();
	double getZ();

	double lenght();

	friend ostream &operator<<(ostream &os, Vector &obj)
	{
		os << "x = " << obj.getX() << endl << "y = " << obj.getY() << endl << "z = " << obj.getZ() << endl;
		return os;
	}

private:
	double _x;
	double _y;
	double _z;
};

