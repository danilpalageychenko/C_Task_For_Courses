/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*С клавиатуры вводятся два расстояния: одно в
километрах, другое – в футах (1 фут = 0.45 м). 
Необходимо разработать программу, которая будет 
вычислять какое из расстояний меньше?*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	float dist1, dist2;

	cout << "Растоянния в километрах =";
	cin >> dist1;

	cout << "Растоянния в футах =";
	cin >> dist2;

	float d1, d2;
	d1 = dist1 * 1000;
	d2 = dist2 * 0.45;

	if (d1 > d2)
		cout << "Дистанция в километрах больше" << endl;
	else
		cout << "Дистанция в Футах больше" << endl;

	system("Pause");
}