#pragma once
#include <iostream>

using namespace std;
class matrix
{
public:
	matrix(int height,int width);
	void operator~();
	int operator()(int x,int y);
	bool operator>(matrix mat);
	bool operator<(matrix mat);
	bool operator==(matrix mat);
	bool operator!=(matrix mat);
	bool operator>=(matrix mat);
	bool operator<=(matrix mat);
	void operator=(matrix mat);
	friend ostream& operator<<(ostream& os, const matrix& mat);
	void show();
	void setRand(int first, int second);

	int getHeight();
	int getWidth();

private:
	int** _matrix;
	int _width;
	int _height;
};


