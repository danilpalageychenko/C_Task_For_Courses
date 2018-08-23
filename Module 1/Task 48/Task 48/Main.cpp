/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
48. Разработать программу, которая вычисляет наименьшее общее кратное двух введенных с клавиатуры целых чисел. 
Вычисление наименьшего кратного двух чисел оформить в виде функции.
*/

#include "iostream"

using namespace std;


int multiple(int num1, int num2)
{
	for (int i = 2; i < num1*num2; i++)
		if (num1%i ==0 && num2%i == 0)
			return i;

	return num1*num2;
}

void main()
{
	setlocale(LC_ALL,"");
	int num1;
	int num2;

	cout << "Введите число 1:";
	cin >> num1;
	cout << "Введите число 2:";
	cin >> num2;
	cout << "Найменьшее общее кратное = ";
	cout << multiple(num1, num2) << endl;
	system("pause");
}