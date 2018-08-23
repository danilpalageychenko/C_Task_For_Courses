#include "Polinom.h"
#include <iostream>
#include <ctime>

using namespace std;

Polinom::Polinom()
{

}

Polinom::Polinom(int num)
{
	_num = num;
}
void Polinom::set(int n) 
{
	srand(time(NULL));
	int i;
	dynamic(n);
	for (i = 0; i <= n; i++)
		_mas[i] = 1 + rand() % 10;

	_n = n;
}

void Polinom::dynamic(int n)
{
	_mas = new int[n + 1];
}

void Polinom::show()
{
	int i;
	for (i = _n; i >= 0; i--)
	{
		if (i == 0)
			cout << _mas[i] << endl;
		else if (i == 1)
			cout << _mas[i] << "x + ";
		else
			cout << _mas[i] << "x^ " << i << " + ";
	}

}
void Polinom::displayNull()
{
	cout << _num << endl;
}

Polinom  operator+ (Polinom first, Polinom second)
{
	int i, min_n;
	Polinom result;
	if (first._n>second._n)
	{
		result._n = first._n;
		min_n = second._n;
		result.dynamic(result._n);
		for (i = 0; i <= min_n; i++)
			result._mas[i] = first._mas[i] + second._mas[i];
		while (min_n < result._n)
		{
			min_n++;
			result._mas[min_n] = first._mas[min_n];

		}
	}

	else
	{
		result._n = second._n;
		min_n = first._n;
		result.dynamic(result._n);
		for (i = 0; i <= min_n; i++)
			result._mas[i] = first._mas[i] + second._mas[i];
		while (min_n < result._n)
		{
			min_n++;
			result._mas[min_n] = second._mas[min_n];

		}

	}

	return result;
}

Polinom  operator+ (int first, Polinom  second)
{
	Polinom  ans;
	ans._num = first + second._num;
	return ans;
}

Polinom  operator+ (Polinom first, int second)
{
	Polinom  ans;
	ans._num = first._num + second;
	return ans;
}


