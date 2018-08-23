/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
37. В символьном массиве размерности 6 х 6 нужно размесить слово SUMMER. Слово может «ломаться», но не по диагонали. Например,

|S_ _ _ _ _ |
|U_M_ _ _ _ |
| _M_E_R_ _ |
| _ _ _ _ _ |
| _ _ _ _ _ |
| _ _ _ _ _ |

Вывести на экран 10 возможных вариантов размещения слова.

*/

#include "iostream"
#include "time.h"
using namespace std;



void newLetter(int &x, int &y, char table[6][6],char letter)
{
	int origX = x;
	int origY = y;
	int tmp_x;
	int tmp_y;
	table[y][x] = letter;
		do
		{
			x = origX;
			y = origY;
			tmp_x = -1 + rand() % 3;
			tmp_y = -1 + rand() % 3;
			x += tmp_x;
			y += tmp_y;
		} while (x < 0 || x >= 6 || y < 0 || y >= 6 || table[y][x] != ' '|| abs(tmp_x) == abs(tmp_y));


}
void Print(char table[6][6])
{
	for (int i = 0; i < 6; i++)
	{
		cout << "|";
		for (int j = 0; j < 6; j++)
			cout << table[i][j] << "|";
		cout << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	char table[6][6];
	int inX, inY;
	int x, y;
	cout << "Стартовая позиция(x,y через пробел)";
	cin >> inX >> inY;

	for (int i = 0; i < 10; i++)
	{
		x = inX;
		y = inY;

		for (int i = 0; i < 6; i++)
			for (int j = 0; j < 6; j++)
				table[i][j] = ' ';

		newLetter(x, y, table, 'S');
		newLetter(x, y, table, 'U');
		newLetter(x, y, table, 'M');
		newLetter(x, y, table, 'M');
		newLetter(x, y, table, 'E');
		newLetter(x, y, table, 'R');

		Print(table);
		cout << endl;
	}
	system("pause");
}