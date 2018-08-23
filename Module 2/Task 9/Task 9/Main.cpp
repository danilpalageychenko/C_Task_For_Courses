/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*В классе Polinom (полином)  перегрузить оператор сложения как дружественную функцию. 
Дополнить класс конструктором, имеющим один параметр целого типа: Polinom (int k). 
Конструктор должен создавать полином нулевой степени. Разработать программу, в которой 
перегруженная дружественная функция суммирования используется для сложения двух полиномов, 
а также полинома и целого числа, числа и целого полинома.*/

#include <iostream>
#include "Polinom.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;
	Polinom obj1, obj2, obj3;

	cout << "Введите степень 1ого многочлена: ";
	cin >> n;

	obj1.set(n);
	obj1.show();

	cout << "Введите степень 2ого многочлена: ";
	cin >> n;

	obj2.set(n);
	obj2.show();

	obj3 = obj1 + obj2;
	cout << endl;
	cout << "Результат: ";
	obj3.show();

	cout << "Введите полином нулевой степени: ";
	cin >> n;

	Polinom obj4(n);
	cout << "Введите целое число: ";
	cin >> n;
	cout << "Результат сложения полинома и целого числа: ";
	obj3 = obj4 + n;
	obj3.displayNull();
	cout << "Результат сложения целого числа и полинома: ";
	obj3 = n + obj4;
	obj3.displayNull();


	system("pause");
	return 0;
}

