/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
19. ����� ����������, ��������� � ������ ���� �������� 10 ��. 
������ ���� �� ���������� ������� ����� �� 10% ����� ����������� ���. 
����� ��������� ���� �������� ��������� �� 7 ����?
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	float a1 = 10;
	int s;
	for (int i = 0; i < 7; i++)
	{
		a1 += a1*0.1;
	}
	cout << "����� 7 ���� �������� ���� = " << a1 << endl;
	system("pause");
}