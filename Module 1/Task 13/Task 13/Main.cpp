/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
13. Дано натуральное число. Определить:
а)	является ли оно четным;
б)	оканчивается ли оно цифрой 7.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int a;
	cout << "Введите число = ";
	cin >> a;

	if (a % 2 == 0)
		cout << "Число чётное" << endl;
	else cout << "Число не чётное" << endl;
	
	if(a % 10 == 7)
		cout << "Число заканчивается на 7" << endl;
	else cout << "Число не заканчивается на 7" << endl;
	system("pause");
}