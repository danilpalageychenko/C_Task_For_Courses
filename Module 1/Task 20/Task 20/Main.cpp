/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
20. ������������� ����� ������ 3 ���� ������� �� 2 ������. ����������, ������� ���� ����� ����� 3, 6, 9, 12,..., 24 ����.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL,"");
	int a1 = 1;
	
	for (int i = 0; i < 8; i++)
	{
		a1 = a1 * 2;
		cout << "����� " << (i+1)*3 << " ���� ����� " << a1 << " ����" << endl;
	}
	system("pause");
}