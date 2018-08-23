/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
56. Даны первый член и разность арифметической прогрессии. Написать рекурсивную функцию для нахождения:
а)	n-го члена прогрессии;
б)	суммы n первых членов прогрессии.
*/

#include "iostream"

using namespace std;

void N(int a, int d,int *S,int n,int i)
{
	*S += d*i;
	i++;
	if (i != n)
	{
		N(a, d, S, n, i);
	}
}

void An(int a, int d, int *An, int n)
{
	*An = a + (n - 1)*d;
}


void main()
{
	setlocale(LC_ALL,"");
	float a, d;
	int n;
	cout << "Введите первый член и разность арифмитической прогресии через пробел" << endl;
	cin >> a >> d;
	cout << "Введите n=";
	cin >> n;
	int S = 0;
	int An1 = 0;
	N(a, d, &S,n,1);
	An(a, d, &An1, n);
	cout << "Сумма прогрессии до n члена = " << S << endl;
	cout << "n - член прогрессии = " << An1 << endl;
	system("pause");
}