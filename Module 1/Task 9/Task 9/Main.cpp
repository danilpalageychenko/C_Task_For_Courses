/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*� ���������� �������� ��� ����������: ���� �
����������, ������ � � ����� (1 ��� = 0.45 �). 
���������� ����������� ���������, ������� ����� 
��������� ����� �� ���������� ������?*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	float dist1, dist2;

	cout << "���������� � ���������� =";
	cin >> dist1;

	cout << "���������� � ����� =";
	cin >> dist2;

	float d1, d2;
	d1 = dist1 * 1000;
	d2 = dist2 * 0.45;

	if (d1 > d2)
		cout << "��������� � ���������� ������" << endl;
	else
		cout << "��������� � ����� ������" << endl;

	system("Pause");
}