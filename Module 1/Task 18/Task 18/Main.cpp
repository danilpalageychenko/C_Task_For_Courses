/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
18. Рассчитать значения х для значений а равных 2, 3, …17:
x=3,5*t^2-7*t+16
t=4*a
Вывод программы оформить в виде  таблицы, в которой выводить значения a, t, x, при изменении значений a от 2 до 17.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float t, x;
	cout << "a \t t \t x \t  " << endl;
	for (int a = 2; a <= 17; a++)
	{
		t = 4 * a;	
		x = 3.5*pow(t, 2) - 7 * t + 16;
		cout << a << "\t" << t << "\t" << x << "\t" << endl;
	}
	system("pause");
}