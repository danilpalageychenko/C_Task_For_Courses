/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
51. Определить функцию вычисления корней квадратного уравнения. Функция должна возвращать значение 1, 
если корни найдены, значение 0, если два корня совпадают, и значение -1, если корней не существует.  
Значения найденных корней должны возвращаться в качестве аргументов функции, передаваемых по ссылке.
Разработать программу,  которая использует созданную функцию.
*/

#include "iostream";

using namespace std;

int roots(float a, float b, float c, float *x1,float *x2)
{
	int D;
	D = pow(b, 2) - 4 * a*c;
	
	*x1 = (-b + D)/2*a;
	*x2 = (-b - D) / 2 * a;

	if (D < 0)
		return -1;
	if (*x1 == *x2)
		return 0;
	return 1;
}

void main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	cout << "Введите коэфициенты уравнения(a,b,c через пробел):";
	cin >> a >> b >> c;

	float x1 = 0;
	float x2 = 0;
	float root;
	cout << "Функция возвращает " << roots(a, b, c, &x1,&x2) << endl;

	cout << "x1=" << x1 << endl << "x2=" <<x2 << endl;
	system("pause");
}