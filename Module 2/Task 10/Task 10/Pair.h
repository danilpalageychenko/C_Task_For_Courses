#pragma once
#include <string>

using namespace std;
class Pair
{
public:
	Pair();

	Pair(int _a, int _b);
	void setA();

	int getA();

	void setB();

	int getB();
	
	void show();


	Pair operator*(int number);
	Pair operator+(Pair second);

protected:
	int _a, _b;
};