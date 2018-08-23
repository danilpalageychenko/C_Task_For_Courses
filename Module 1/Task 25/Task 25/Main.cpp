/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
25. Составить программу возведения натурального числа в квадрат, учиты¬вая следующую закономерность:
1^2 = 1
2^2 = 1+3
3^2 = 1+3+5
4^2 = 1+3+5+7
...
n^2=1+3+5+7+9+...+(2n-1)
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	char ans;
	cout << "Введите n = ";
	cin >> n;
	do
	{
		cout << "Вывести подробную информацию? (Y - да, N - нет) ";
		cin >> ans;
		
	} while ((ans != 'Y') && (ans != 'N'));
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += 2 * i - 1;
		if (ans == 'Y')
		{
			cout << i << " = ";
			for (int j = 1; j <= i; j++)
			{
				cout << 2 * j - 1;
				if (j < i) cout << "+";
			}
			cout << "=" << s << endl;
		}
		else
			cout << i << " = " << s << endl;
	}
	system("pause");
}