/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*����������� ���������, ������� ��������� �������� � ������� ������������ �� ���� �������� ��������.
��� ���������� ������� ������������ ������� ������:
S=sqrt(p(p-a)(p-b)(p-c)) , ��� p - ������������, a,b,c - ������� ������������.
*/

#include <iostream>
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "������� a=";
	cin >> a;
	cout <<  "������� b=";
	cin >> b;
	cout << "������� c=";
	cin >> c;
	float P = a + b + c;
	float p = P / 2;
	float S = sqrt(p*(p - a)*(p - b)*(p- c));
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;

	system("pause");

}