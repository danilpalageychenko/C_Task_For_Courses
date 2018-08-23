/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/
/*
12. Известны площади круга и квадрата. Определить:
а)	уместится ли круг в квадрате?
б)	уместится ли квадрат в круге?
*/

#include "iostream"
#include "math.h"
const float PI = 3.14159265358979323846;

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int S1, S2;

	cout << "Площадь круга = ";
	cin >> S1;
	cout << "Площадь квадрата = ";
	cin >> S2;

	float d,a;
	d = 2 * sqrt(S1 / PI);
	a = sqrt(S2);

	if (d <= a)
		cout << "Круг влезет в квадрат" << endl;
	else
		cout << "Круг не влезет в квадрат" << endl;
	if (d >= sqrt(2*a*a))
		cout << "Квадрат влезет в круг" << endl;
	else
		cout << "Квадрат не влезет в круг" << endl;
	system("pause");
}