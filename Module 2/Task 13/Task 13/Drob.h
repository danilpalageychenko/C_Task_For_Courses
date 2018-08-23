#pragma once
class Drob
{
public:
	Drob();

	Drob(int n, int m);
	void setN(int n);

	void setM(int m);

	void show();
	
	void operator*(Drob second);
	
	void operator*(int second);

	void operator/(Drob second);

	void operator-(Drob second);
	
	void operator+(Drob second);

private:
	int _n;
	int _m;
};