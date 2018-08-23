#pragma once
class Circle
{
public:
	Circle(int x,int y,int r);

	void show();
	char move();
	float square();
	void setCursorPos(int x,int y);

private:
	int _x;
	int _y;
	int _r;
	
};

