#pragma once
class Octal
{
public:
	
	
	Octal(unsigned char* num);


	unsigned char* getNum();

	Octal operator+(Octal second);
	Octal operator-(Octal second);
	

	bool operator>(Octal second);
	bool operator<(Octal second);
	bool operator==(Octal second);
	bool operator!=(Octal second);
	bool operator>=(Octal second);
	bool operator<=(Octal second);
	
	
private:
	int _ln = 0;
	unsigned char* _num;
};

