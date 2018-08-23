/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*—оздать класс Pair (пара целых чисел); определить метод умножени€ на чисђло и операцию
сложени€ пар (а, b) + (с, d) = (а + b, с + d). ќпределить класс-наследник Money с пол€ми: рубли и копейки.
ѕереопределить операцию слођжени€ и определить методы вычитани€ и делени€ денежных сумм.*/

#include <iostream>
#include "Money.h"
#include "Pair.h"
using namespace std;



int main()

{
	setlocale(LC_ALL, "");
	Pair obj1;
	Pair obj2;
	obj1.setA();
	obj1.setB();
	obj2.setA();
	obj2.setB();

	cout << "obj1 + obj2 : " << endl;
	(obj1 + obj2).show();
	cout << "obj1 * 5 :" << endl;
	(obj1 * 5).show();


	


	cout << "------------------" << endl;

	Money ob;
	ob.setKopek();
	ob.setRuble();

	cout << "—чЄт + 10 =" << endl;
	ob+=10;
	ob.show();

	cout << "—чЄт - 80 =" << endl;
	ob-=80;
	ob.show();

	cout << "—чЄт / 2 =" << endl;
	ob/=2;
	ob.show();


	system("pause");
	return 0;
}