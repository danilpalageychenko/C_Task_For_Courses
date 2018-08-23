/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*5.	Разработать класс  объектов-векторов, задаваемых координатами концов в трехмерном пространстве. 
Определить операции сложения и вычитания векторов с получением нового вектора (суммы или разности), 
вычисления скалярного произведения двух векторов, длины вектора.*/

#include <iostream>
#include "Vector.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	Vector obj1(3, 3.5, 1);
	Vector obj2(5.9, 8.1, 2);

	cout << "obj1 + obj2 :\n" << obj1 + obj2 << endl;
	cout << "obj1 - obj2 :\n"<< obj1 - obj2 << endl;
	cout << "obj1 * obj2 :\n" << obj1 * obj2 << endl;
	cout << "Длинна первого объекта = " << obj1.lenght() << endl << "Длинна второго объекта = " << obj2.lenght() << endl;


	system("pause");
}