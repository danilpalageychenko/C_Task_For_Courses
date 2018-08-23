#pragma once
class Complects
{


public:
	Complects(int a, int b);

	Complects(double a, double b);

	double getA();
	double getB();

	void setA(int a);
	void setA(double a);
	void setB(int b);
	void setB(double b);

	void print();

	Complects operator+(Complects second);
	Complects operator-(Complects second);
	Complects operator*(Complects second);
	
private:
	double _a;
	double _b;
};

