/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
41. Разработать программу, которая использует одномерный динамический массив для хранения коэффициентов многочлена.
Степень и коэффициенты многочлена задаются с клавиатуры. На основе данного массива вычислить:
а)	является ли данное значение корнем многочлена;
б)	значение многочлена при указанном значении х.
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
	cout << "Введите степень многочлена = ";
	cin >> degree;
	int *polynomial = new int[degree];
	for (int i = 0; i < degree; i++)
	{
		cout << "Коэфициент " << i + 1 << " члена = ";
		cin >> polynomial[i];
	}

	Print(polynomial, degree);

	int x;
	cout << "Введите значение:";
	cin >> x;

	if (Root(polynomial, degree,x) == 0)
		cout << "Значение " << x << " является корнем многчлена." << endl;
	else
		cout << "Значение " << x << " не является корнем многчлена." << endl;

	cout << "Введите значение x:";
	cin >> x;
	cout << "Значение многочлена при x=" << x << " будет " << Root(polynomial, degree, x) << endl;
	system("pause");
}