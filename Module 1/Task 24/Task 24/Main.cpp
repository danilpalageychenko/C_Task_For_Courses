/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*

24. Ќапечатать числа в виде следующей таблицы:
1						5	5	5	5	5
2	2					6	6	6	6
3	3	3				7	7	7
4	4	4	4			8	8
5	5	5	5	5		9
а)						б)

*/

#include "iostream"

using namespace std;

void main()
{
	const int n = 5;
	const int m = 5;
	setlocale(LC_ALL,"");


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << i+1 << " ";
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < m; j++)
			cout << i + 5 << " ";
		cout << endl;
	}
	system("pause");
}