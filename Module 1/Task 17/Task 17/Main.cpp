/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
17. Ќапечатать таблицу умножени€ на число n в следующем виде:
1 х n = Е
2 х n = Е
Е

9 х n = Е

«начение n вводитс€ с клавиатуры. ќрганизовать проверку на корректность вводимого значени€ Ц оно должно быть в диапазоне от 1 до 9 включительно.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	do
	{
		cout << "¬ведите число n=";
		cin >> n;
	} while ((n < 1) || (n>9));

	for (int i = 1; i <= 9; i++)
		cout << i << "x" << n << "=" << i*n << endl		;
	
	system("pause");
}