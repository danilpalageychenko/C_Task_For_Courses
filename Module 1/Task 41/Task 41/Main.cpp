/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
41. ����������� ���������, ������� ���������� ���������� ������������ ������ ��� �������� ������������� ����������.
������� � ������������ ���������� �������� � ����������. �� ������ ������� ������� ���������:
�)	�������� �� ������ �������� ������ ����������;
�)	�������� ���������� ��� ��������� �������� �.
*/

#include "iostream"

using namespace std;

int Root(int *polynominal,int degree,int x)
{

	int result = 0;
	for (int i = 0; i < degree; i++)
	{
		result+=polynominal[i] * pow(x,i+1);
	}
	return result;
}

void Print(int *polynomial,int degree)
{
	for (int i = 0; i < degree; i++)
	{

		if (i != 0)
		{
			if (polynomial[i] >= 0)
			{
				cout << "+";
			}
			else
			{
				cout << "-";
			}
		}

		if (i >= 1)
			cout << polynomial[i] << "x" << i;
		else
			cout << polynomial[i] << "x";
	
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	int degree;
	cout << "������� ������� ���������� = ";
	cin >> degree;
	int *polynomial = new int[degree];
	for (int i = 0; i < degree; i++)
	{
		cout << "���������� " << i + 1 << " ����� = ";
		cin >> polynomial[i];
	}

	Print(polynomial, degree);

	int x;
	cout << "������� ��������:";
	cin >> x;

	if (Root(polynomial, degree,x) == 0)
		cout << "�������� " << x << " �������� ������ ���������." << endl;
	else
		cout << "�������� " << x << " �� �������� ������ ���������." << endl;

	cout << "������� �������� x:";
	cin >> x;
	cout << "�������� ���������� ��� x=" << x << " ����� " << Root(polynomial, degree, x) << endl;
	system("pause");
}