/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

#include "iostream"

using namespace std;
/*
14. ����������� ���������, ������� ���������, �������� �� ����� � ��������� ������������ � �������������� �������:
*/


void main()
{
	setlocale(LC_ALL, "");

	float x, y;

	cout << "������� ���������� ����� ������" << endl;
	cin >> x >> y;

	if ((y<1.5) && (y>-2))
		cout << "� ������ ������� ��������" << endl;
	else 
		cout << "� ������ ������� �� ��������" << endl;


	if (((x < -1) && (y > 1)) || ((x > 2) && (y > 1)))
		cout << "� ������ ������� ��������" << endl;
	else
		cout << "� ������ ������� �� ��������" << endl;


	if((y>0.5) && (y <1.5))
		cout << "� ������ ������� ��������" << endl;
	else if (x > 2)
		cout << "� ������ ������� ��������" << endl;
	else
		cout << "� ������ ������� �� ��������" << endl;



	system("pause");
}