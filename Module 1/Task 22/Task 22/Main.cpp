/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
22. Разработать программу, которая переводит число из десятичной системы исчисления в шестнадцатеричную. 
В шестнадцатеричной системе счисления число 16 является основанием системы счисления, 
а коэффициенты разложения имеют вид: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.
При этом A  = 10, B = 11, C = 12 и т.д. Например, 163(10) = A3(16).
*/

#include "iostream"
#include "math.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите число = ";
	cin >> a;

	int ost[100];
	int i = 0;
	do
	{
		ost[i] = a % 16;
		a = a / 16;
		i++;
	} while (a != 0);

	for (int j = i-1; j >= 0; j--)
	{
		switch (ost[j])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << ost[j];
		}

	}
	cout << endl;
	system("pause");
}