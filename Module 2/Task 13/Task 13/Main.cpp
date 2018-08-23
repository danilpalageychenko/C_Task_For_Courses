/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Разработать класс дробь.
Определить конструктор с параметрами (числитель и знаменатель). Вычислить выражения: (5/3*4+3/2)-5/6/1/5*/

#include <iostream>
#include "Drob.h"

using namespace std;

int main()

{
	setlocale(LC_CTYPE, "");

	Drob d1(5, 3);
	Drob d2(3, 2);
	Drob d3(5, 6);
	Drob d4(1, 5);
	d1 * 4;
	d1 + d2;
	d3 / d4;
	d1 + d3;
	d1.show();
	system("pause");
	return 0;
}