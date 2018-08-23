#include "matrix.h"
#include "time.h"


matrix::matrix(int height, int width)
{
	_height = height;
	_width = width;
	_matrix = new int*[height];
	for (int i = 0; i < height; i++)
		_matrix[i] = new int[width];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			_matrix[i][j] = 0;// помен€ли местами i,j

}
void matrix::operator~()
{
	int** tmp_matrix = new int*[_height];
	for (int i = 0; i < _height; i++)
		tmp_matrix[i] = new int[_width];

	for (int i = 0; i < _height; i++)
		for (int j = 0; j < _width; j++)
			tmp_matrix[i][j] = _matrix[i][j];

	for (int i = 0; i < _height; i++)
		for (int j = 0; j < _width; j++)
			_matrix[i][j] = tmp_matrix[j][i];
}

int matrix::operator()(int x, int y)
{
	return _matrix[x-1][y-1];//
}

bool matrix::operator>(matrix mat)
{
	return _height*_width > mat._height*mat._width ? true : false;
}

bool matrix::operator<(matrix mat)
{
	return _height*_width < mat._height*mat._width ? true : false;
}

bool matrix::operator==(matrix mat)
{
	return _height*_width == mat._height*mat._width ? true : false;
}

bool matrix:: operator!=(matrix mat)
{
	return _height*_width != mat._height*mat._width ? true : false;
}

bool matrix::operator>=(matrix mat)
{
	return _height*_width >= mat._height*mat._width ? true : false;
}

bool matrix::operator<=(matrix mat)
{
	return _height*_width <= mat._height*mat._width ? true : false;
}
void matrix::operator=(matrix mat)
{
	if (_height == mat._height || _width == mat._width)
	{
		for (int i = 0; i < _height; i++)
			for (int j = 0; j < _width; j++)
				_matrix[i][j] = mat._matrix[i][j];
	}
	else
		cout << "ћатрицы разного размера" << endl;
}

ostream& operator<<(ostream& os, const matrix& mat)
{
	for (int i = 0; i < mat._height; i++)
	{
		for (int j = 0; j < mat._width; j++)
			os << mat._matrix[i][j] << " ";
		cout << endl;
	}
	return os;
}

int matrix::getHeight()
{
	return _height;
}

int matrix::getWidth()
{
	return _width;
}

void matrix::show()
{
	for (int i = 0; i < _height; i++)
	{
		for (int j = 0; j < _width; j++)
		{
			cout << _matrix[i][j] << " ";
		}
		cout << endl;
	}

}

void matrix::setRand(int first, int second)
{
	srand(time(0));
	for (int i = 0; i < _height; i++)
		for (int j = 0; j < _width; j++)
			_matrix[i][j] = first + rand() % (second - first);

}

