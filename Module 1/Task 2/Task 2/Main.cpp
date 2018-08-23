/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Разработать программу, которая вычисляет периметр и площадь треугольника по трем заданным сторонам.
Для вычисления площади использовать формулу Герона:
S=sqrt(p(p-a)(p-b)(p-c)) , где p - полупериметр, a,b,c - стороны треугольника.
*/

#include <iostream>
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Сторона a=";
	cin >> a;
	cout <<  "Сторона b=";
	cin >> b;
	cout << "Сторона c=";
	cin >> c;
	float P = a + b + c;
	float p = P / 2;
	float S = sqrt(p*(p - a)*(p - b)*(p- c));
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;

	system("pause");

}