/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/
/*
12. �������� ������� ����� � ��������. ����������:
�)	��������� �� ���� � ��������?
�)	��������� �� ������� � �����?
*/

#include "iostream"
#include "math.h"
const float PI = 3.14159265358979323846;

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int S1, S2;

	cout << "������� ����� = ";
	cin >> S1;
	cout << "������� �������� = ";
	cin >> S2;

	float d,a;
	d = 2 * sqrt(S1 / PI);
	a = sqrt(S2);

	if (d <= a)
		cout << "���� ������ � �������" << endl;
	else
		cout << "���� �� ������ � �������" << endl;
	if (d >= sqrt(2*a*a))
		cout << "������� ������ � ����" << endl;
	else
		cout << "������� �� ������ � ����" << endl;
	system("pause");
}