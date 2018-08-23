#include "Circle.h"
#include "windows.h"
#include <cmath>
#include <iostream>
#include "conio.h"

using namespace std;

void Circle::setCursorPos(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

Circle::Circle(int x, int y, int r)
{
	_x = x;
	_y = y;
	_r = r;
}

void Circle::show()
{
	float katet1;
	float katet2;
	square();
	setCursorPos(_x,_y);
	cout << "*";

	for (int i = 0; i < 360; i++)
	{

		katet1 = sin(i) * _r;
		katet2 = cos(i) * _r;

		setCursorPos(round(_x + katet1), round(_y + katet2));
		cout << "*";
	}

}


char Circle::move()
{

	char input = _getch();

		switch (input)
		{
		case 'w':
			if(_y - _r > 0)
			_y--;
			break;
		case 's':
			if(_y + _r < 25)
			_y++;
			break;
		case 'a':
			if (_x - _r > 0)
			_x--;
			break;
		case 'd':
			if(_x + _r < 50)
			_x++;
			break;
		case '+':
			_r++;
			break;
		case '-':
			if(_r > 0)
			_r--;
			break;
		default:
			break;
		}
		return input;
}

float Circle::square()
{
	return 3.14*pow(_r,2);
}