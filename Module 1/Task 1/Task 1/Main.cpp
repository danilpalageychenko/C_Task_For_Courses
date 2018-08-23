/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*. Разработать программу, которая для двух целых чисел вводимых с клавиатуры вычисляет сумму, 
произведение, разность и частное и результат выводит на экран  в виде: a + b = c
a * b = c
a - b = c
a / b = c
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL,"");

	int a, b;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	system("pause");

}