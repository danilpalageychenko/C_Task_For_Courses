#pragma once
class Matrix
{
public:
	Matrix(int h,int w);

	void keyboardIn();
	void randIn();
	void show();

	//Арифмитические операции
	Matrix operator+(Matrix second);
	Matrix operator-(Matrix second);
	Matrix operator/(Matrix second);
	Matrix operator*(Matrix second);

	Matrix operator+(int second);
	Matrix operator-(int second);
	Matrix operator/(int second);
	Matrix operator*(int second);

	Matrix operator+(float second);
	Matrix operator-(float second);
	Matrix operator/(float second);
	Matrix operator*(float second);


	//Операторы комбинированого присваивания
	void operator+=(Matrix second);
	void operator-=(Matrix second);
	void operator/=(Matrix second);
	void operator*=(Matrix second);

	//Операции равенства
	bool operator==(Matrix second);
	bool operator!=(Matrix second);

	//Оператор транспонирования
	void operator~();

	//Тип матрицы
	void type();

private:
	double** _matrix;
	int _w;
	int _h;
};

