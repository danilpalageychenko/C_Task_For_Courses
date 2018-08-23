#include "Matrix.h"
#include <iostream>
#include <ctime>

using namespace std;

Matrix::Matrix(int h, int w)
{
	
	_matrix = new double*[h];
	for (int i = 0; i < h; i++)
	{
		_matrix[i] = new double[w];
	}

	_w = w;
	_h = h;
}

void Matrix::keyboardIn()
{
	cout << "Введите " << _w*_h << " вещественных чисел:" << endl;
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			cin >> _matrix[i][j];
		}
	}
}
void Matrix::randIn()
{
	srand(time(NULL));
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			_matrix[i][j] = (-50 + rand() % 100);
			float tmp = (rand() % 9);
			_matrix[i][j] += tmp / 10;;
		}
	}
}

void Matrix::show()
{
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			printf("%.1f ", _matrix[i][j]);
		}
		cout << endl;
	}
}

Matrix Matrix::operator+(Matrix second)
{

	int w = _w > second._w ? _w : second._w;
	int h = _h > second._h ? _h : second._h;
	Matrix ans(h, w);

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i < _h && j < _w && i < second._h && j < second._w)
			{
				ans._matrix[i][j] = _matrix[i][j] + second._matrix[i][j];
			}
			else if ((i >= _h || j >= _w) && i < second._h && j < second._w)
			{
				ans._matrix[i][j] = second._matrix[i][j];
			}
			else if ((i >= second._h || j >= second._w) && i < _h && j < _w)
			{
				ans._matrix[i][j] = _matrix[i][j];
			}
			else
			{
				ans._matrix[i][j] = 0;
			}


		}
	}

	return ans;
}

Matrix Matrix::operator-(Matrix second)
{

	int w = _w > second._w ? _w : second._w;
	int h = _h > second._h ? _h : second._h;
	Matrix ans(h, w);

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i < _h && j < _w && i < second._h && j < second._w)
			{

				ans._matrix[i][j] = _matrix[i][j] - second._matrix[i][j];
			}
			else if ((i >= _h || j >= _w) && i < second._h && j < second._w)
			{
				ans._matrix[i][j] = -second._matrix[i][j];
			}
			else if ((i >= second._h || j >= second._w) && i < _h && j < _w)
			{
				ans._matrix[i][j] = -_matrix[i][j];
			}
			else
			{
				ans._matrix[i][j] = 0;
			}


		}
	}

	return ans;
}

Matrix Matrix::operator*(Matrix second)
{

	int w = _w > second._w ? _w : second._w;
	int h = _h > second._h ? _h : second._h;
	Matrix ans(h, w);

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i < _h && j < _w && i < second._h && j < second._w)
			{

				ans._matrix[i][j] = _matrix[i][j] * second._matrix[i][j];
			}
			else
			{
				ans._matrix[i][j] = 0;
			}


		}
	}

	return ans;
}

Matrix Matrix::operator/(Matrix second)
{

	int w = _w > second._w ? _w : second._w;
	int h = _h > second._h ? _h : second._h;
	Matrix ans(h, w);

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i < _h && j < _w && i < second._h && j < second._w && second._matrix[i][j] != 0)
			{

				ans._matrix[i][j] = _matrix[i][j] / second._matrix[i][j];
			}
			else
			{
				ans._matrix[i][j] = 0;
			}


		}
	}

	return ans;
}

Matrix Matrix::operator+(int second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] + second;
		}
	}
	return ans;
}

Matrix Matrix::operator-(int second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] - second;
		}
	}
	return ans;
}

Matrix Matrix::operator/(int second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if(second !=0)
			ans._matrix[i][j] = _matrix[i][j] / second;
		}
	}
	return ans;
}

Matrix Matrix::operator*(int second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] * second;
		}
	}
	return ans;
}

Matrix Matrix::operator+(float second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] + second;
		}
	}
	return ans;
}

Matrix Matrix::operator-(float second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] - second;
		}
	}
	return ans;
}

Matrix Matrix::operator/(float second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (second != 0)
				ans._matrix[i][j] = _matrix[i][j] / second;
		}
	}
	return ans;
}

Matrix Matrix::operator*(float second)
{
	Matrix ans(_h, _w);
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			ans._matrix[i][j] = _matrix[i][j] * second;
		}
	}
	return ans;
}

void Matrix::operator+=(Matrix second)
{
	if (second._h <= _h && second._w <= _w)
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				_matrix[i][j] += second._matrix[i][j];
			}
		}
	else cout << "Вторая матрица имеет больше элементов" << endl;
}

void Matrix::operator-=(Matrix second)
{
	if (second._h <= _h && second._w <= _w)
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				_matrix[i][j] -= second._matrix[i][j];
			}
		}
	else cout << "Вторая матрица имеет больше элементов" << endl;
}

void Matrix::operator/=(Matrix second)
{
	if (second._h <= _h && second._w <= _w)
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				_matrix[i][j] /= second._matrix[i][j];
			}
		}
	else cout << "Вторая матрица имеет больше элементов" << endl;
}

void Matrix::operator*=(Matrix second)
{
	if (second._h <= _h && second._w <= _w)
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				_matrix[i][j] *= second._matrix[i][j];
			}
		}
	else cout << "Вторая матрица имеет больше элементов" << endl;
}

bool Matrix::operator==(Matrix second)
{
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (_matrix[i][j] != second._matrix[i][j])
				return false;
		}
	}
	return true;
}

bool Matrix::operator!=(Matrix second)
{
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (_matrix[i][j] == second._matrix[i][j])
				return false;
		}
	}
	return true;
}

void Matrix::operator~()
{
	

	int** tmp_matrix = new int*[_h];
	for (int i = 0; i < _h; i++)
		tmp_matrix[i] = new int[_w];

	for (int i = 0; i < _h; i++)
		for (int j = 0; j < _w; j++)
			tmp_matrix[i][j] = _matrix[i][j];

	for (int i = 0; i < _h; i++)
		for (int j = 0; j < _w; j++)
			_matrix[i][j] = tmp_matrix[j][i];
}

void Matrix::type()
{
	/*• методы, реализующие проверку типа матрицы(квадратная, диагональная, нулевая,
		единичная, симметрическая, верхняя треугольная, нижняя треугольная); */
	bool square = false;
	bool diagonal = false;
	bool zero = false;
	bool ones = false;
	bool simetric = false;
	bool uptriangle = false;
	bool downtriangle = false;
	//Квадратная
	if (_w == _h)
		square = true;


	int counter = 0;
	//Диагональная
	if (square)
	{
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				if (i != j && _matrix[i][j] == 0)
					counter++;
				else if (i == j)
					counter++;
			}
		}
		if (counter == _w*_h)
			diagonal = true;
		counter = 0;
	}

	//Единичная

		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				if (i == j && _matrix[i][j] == 1)
					counter++;
				else if (i != j && _matrix[i][j] == 0)
					counter++;
			}
		}
		if (counter == _w*_h)
			ones = true;
		counter = 0;

	//Нулевая
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (_matrix[i][j] == 0)
				counter++;
		}
	}
	if (counter == _h*_w)
		zero = true;
	counter = 0;
	//Нижняя треугольная
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (j > i && _matrix[i][j] == 0)
				counter++;
			else if (j <= i)
				counter++;
		}
	}
	if (counter == _w*_h)
		downtriangle = true;
	counter = 0;

	//Верхняя треугольная
	for (int i = 0; i < _h; i++)
	{
		for (int j = 0; j < _w; j++)
		{
			if (j < i && _matrix[i][j] == 0)
				counter++;
			else if (j >= i)
				counter++;
		}
	}
	if (counter == _w*_h)
		uptriangle = true;
	counter = 0;

	//Симетричная
	if (square)
	{
		for (int i = 0; i < _h; i++)
		{
			for (int j = 0; j < _w; j++)
			{
				if (i != j && _matrix[i][j] == _matrix[j][i])
					counter++;
				else if (j == i)
					counter++;
			}
		}
		if (counter == _w*_h)
			simetric = true;
	}
	counter = 0;

	
	if (square || diagonal || zero || ones || simetric || uptriangle || downtriangle)
	{
		cout << "Матрица ";
		if (square) cout << "Квадратная";
		if (diagonal) cout << ", диагональная";
		if (zero) cout << ", нулевая";
		if (ones) cout << ", единичная";
		if (simetric) cout << ", симетричная";
		if (uptriangle)cout << ", верхняя триугольная";
		if (downtriangle) cout << ", нижняя треугольная";
		cout << endl;
	}
	else
		cout << "Тип матрицы неопределенный" << endl;
	
}