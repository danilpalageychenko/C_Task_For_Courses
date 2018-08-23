/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Создать класс Octal для работы с беззнаковыми целыми восьмеричными числами, 
используя для представления числа массив из 100 элементов типа unsigned char, каждый 
элемент которого является восьмеричной цифрой. Младшая цифра имеет меньший 
индекс (единицы — в нулевом элементе массива). Реальный размер массива задается 
как аргумент конструктора инициализации. Реализовать арифметические операции, 
аналогичные встроенным для целых в С++, и операции сравнения. */

#include <iostream>
#include "Octal.h"
using namespace std;

void main()
{
	
	setlocale(LC_ALL,"");
	
	Octal num1((unsigned char*)"2345");
	Octal num2((unsigned char*)"2");
	
	
	cout << "num1 + num2 = ";
	cout << (num1 + num2).getNum() << endl;
	
	cout << "num1 - num2 = ";
	cout << (num1 - num2).getNum() << endl;


	if (num1 == num2)
	{
		cout << "num1 равняется num2" << endl;
	}
	else
		cout << "num1 не равняется num2" << endl;

	if (num1 > num2)
	{
		cout << "num1 больше" << endl;
	}
	else 
		cout << "num1 не больше" << endl;


	system("pause");
}