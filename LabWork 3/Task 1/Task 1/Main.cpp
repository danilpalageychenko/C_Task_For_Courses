/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Определить класс, представляющий матрицу, для которого перегрузить операторы:
унарный оператор ~ для транспонирования матрицы;
оператор круглые скобки с двумя аргументами, реализовав возможность доступа к элементу матрицы по двум индексам;
оператор сравнения матриц;
сложения;
присваивания;
вывода в поток («)
Разработать программу, демонстрирующую использование данного класса. */

#include<iostream>
#include "matrix.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	matrix obj1(5,5),obj2(3,4),obj3(5,5);
	obj1.setRand(0, 5);
	obj2.setRand(0, 5);
	cout << "Матрица номер 1:" << endl << obj1;
	cout << "Матрица номер 2:" << endl << obj2;
	
	if (obj1 > obj2)
		cout << "Первая матрица больше второй" << endl;
	else
		cout << "Вторая матрица больше" << endl;

	if (obj1(1, 1) == obj2(1, 1))
		cout << "Элементы 1.1 в обеих матрицах одинаковые." << endl;
	else
		cout << "Элементы 1.1 в обеих матрицах разные." << endl;

	obj3 = obj2;

	cout << "Матрица номер 3:" << endl << obj3;
	
	~obj3;
	
	cout << "Матриза номер 3 транспонирована:" << endl;
	
	cout << obj3;

	if(obj1 <= obj2)
	cout << "ob1 <= obj2 da" << endl;
	else
		cout<< "ob1 <= obj2 net" << endl;




	system("pause");
}