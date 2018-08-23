/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
21. —оставить программу дл€ проверки утверждени€: –езультатами вычислений по формуле x^2+x+41 при 0<=x>=40 
€вл€ютс€ простые числа.
*/

#include "iostream"
#include "math.h"
using namespace std;

bool simple(int x)
{
	bool ans;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return (false);
		else ans = true;
	}
	return ans;
}

void main()
{
	setlocale(LC_ALL, "");
	int x;
	do
	{
		cout << "¬ведите x (x >= 40) =";
		cin >> x;
	} while (x < 40);
	int urururu;
	urururu = pow(x,2) + x + 41;

	if (simple(urururu) == 1) cout << urururu << " - простое" << endl;
	else cout << urururu << " - не простое" << endl;

	system("pause");
}