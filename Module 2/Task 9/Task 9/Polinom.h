#pragma once

class Polinom 
{	
public:
	void set(int);
	Polinom();
	Polinom(int num);
	void dynamic(int);
	void show();
	void displayNull();

	friend Polinom  operator+(Polinom  first, Polinom  second);
	friend Polinom  operator+(Polinom  first, int second);
	friend Polinom  operator+(int firsr, Polinom  second);

private:
	int *_mas;
	int _n;
	int _num;
};

