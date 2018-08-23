#pragma once
class Matrix
{
public:
	Matrix(int h,int w);

	void keyboardIn();
	void randIn();
	void show();

	//�������������� ��������
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


	//��������� ��������������� ������������
	void operator+=(Matrix second);
	void operator-=(Matrix second);
	void operator/=(Matrix second);
	void operator*=(Matrix second);

	//�������� ���������
	bool operator==(Matrix second);
	bool operator!=(Matrix second);

	//�������� ����������������
	void operator~();

	//��� �������
	void type();

private:
	double** _matrix;
	int _w;
	int _h;
};

