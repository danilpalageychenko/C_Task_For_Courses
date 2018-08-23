/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Даны три различных целых числа. Определить, какое из них (первое, второе или третье):
а)	самое большое;
б)	самое маленькое;
в)	является средним (средним назовем число, которое больше наимень¬шего из данных чисел, но меньше наибольшего).
*/

#include "iostream"

using namespace std;

int max(int x, int y) { return x>y ? x : y; }
int max(int x, int y, int z) {
	return max(max(x, y), z);
}

int min(int x, int y) { return x<y ? x : y; }
int min(int x, int y, int z) {
	return min(min(x, y), z);
}

void main()
{
	setlocale(LC_ALL, "");

	int a,b,c;
	cout << "Введите число 1=";
	cin >> a;

	cout << "Введите число 2=";
	cin >> b;

	cout << "Введите число 3=";
	cin >> c;
	cout << "max = " << max(a, b, c) << endl;
	cout << "ser = " << (a+b+c)- (min(a, b, c)+ max(a, b, c)) << endl;
	cout << "min = " << min(a, b, c) << endl;
	system("pause");
}