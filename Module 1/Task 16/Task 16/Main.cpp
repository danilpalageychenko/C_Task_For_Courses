/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
16. Написать программу вывода на экран "столбиком" всех целых чисел от  а до b (значения а и b вводятся с клавиатуры; b > 0). Найти среднее арифметическое всех выведенных целых чисел. Реализовать программу тремя способами, используя:
а)	оператор цикла с предусловием,
б)	оператор цикла с постусловием.
в)	оператор цикла for
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Введите 2 числа через пробел" << endl;
	cin >> a >> b;
	cout << endl;

	//Способ 1
	cout << "С постусловием:" << endl;
	c = a;
	do
	{
		cout << c << endl;
		c++;
	}
	while (c<=b);

	//Способ 2
	cout << endl << "С предусловием:" << endl;
	c = a;
	while (c <= b)
	{
		cout << c << endl;
		c++;
	}
	//Способ 3
	float ser=0,f=0;
	cout << endl << "Цикл for:" << endl;
	for (int i = a; i <= b; i++)
	{
		cout << i << endl;
		ser += i;
		f++;
	
	}
	cout << "Ser=" << ser / f;
	system("pause");
}