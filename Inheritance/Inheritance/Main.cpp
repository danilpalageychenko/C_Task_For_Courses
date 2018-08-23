/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Создать класс Triad (тройка чисел); определить метод сравнения триад. Определить производный класс Time
с полями: час, минута и секунда. Определить полный набор методов сравнения моментов времени.*/

#include <iostream>
#include "Time.h"
#include "Triad.h"

using namespace std;

void main()
{
	setlocale(LC_ALL,"");
	Triad obj(12, 32, 1);
	cout << "В классе триад большее число = " << obj.whatBigger() << endl;

	Time obj1(3,5,6);
	Time obj2(3,4,23);
	Time obj3(6, 5, 6);
	Time obj4(6, 5, 5);
	
	cout << "Класс Time, Объект 1:" << endl;
	obj1.show();
	cout << "Класс Time, Объект 2:" << endl;
	obj2.show();

	cout << "Из двух объектов больший =";
	Time ans = obj1.whatBigger(obj1, obj2);

	ans.show();


	cout << "Класс Time, Объект 3:" << endl;
	obj3.show();
	cout << "Класс Time, Объект 4:" << endl;
	obj4.show();
	

	cout << "Из двух объектов меньший =";
	ans = obj1.whatLess(obj3, obj4);

	ans.show();



	system("pause");
}