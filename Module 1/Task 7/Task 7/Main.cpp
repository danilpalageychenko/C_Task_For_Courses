/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
Вычислить значение логического выражения:
а) x^2 + y^2 ≤ 4 при x=1, y=-1
б) (х ≥ 0) или (x^2 != 4) при х = 1, у = 2
в) (х ≥ 0) и (y^2 != 4 ) при х = 1, у = 2
Сформировать соответствующие логические выражения на языке С/С++.
*/

#include "iostream"
#include "math.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int x, y;

	x = 1;
	y = -1;

	cout << "При x=" << x << " и y=" << y << endl;
	if ((pow(x, 2) + pow(y, 2)) <= 4)
		cout << "true" << endl;
	else cout << "false" << endl;

	x = 1;
	y = 2;
	cout << "При x=" << x << " и y=" << y << endl;
	if ((x >= 0) || pow(y, 2)!= 4)
		cout << "true" << endl;
	else cout << "false" << endl;

	cout << "При x=" << x << " и y=" << y << endl;
	if ((x >= 0) && pow(y, 2) != 4)
		cout << "true" << endl;
	else cout << "false" << endl;



	system("pause");
}