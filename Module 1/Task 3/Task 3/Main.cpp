/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*����������� ���������, ������� �������� ��� ��������� ������� �������� ��������� �����
������ � ����� ����� ��� ����, ���� ������ �������� �������� ������.*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int In, Per;

	cout << "����� = ";
	cin >> In;
	cout << "��� ������� %?=";
	cin >> Per;

	cout << "������� �� ��� ���� =" << (In / 100)*Per << endl;
	cout << "� ����� � ��� ����� =" << In + ((In / 100)*Per) << endl;

	system("pause");
}