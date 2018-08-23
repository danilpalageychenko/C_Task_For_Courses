#pragma once
class Triad
{
public:
	Triad(int a,int b,int c);
	
	int getNumber1();
	int getNumber2();
	int getNumber3();

	int whatBigger();


protected:

	int _number1;
	int _number2;
	int _number3;
};

