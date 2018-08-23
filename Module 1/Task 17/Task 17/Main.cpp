/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
17. ���������� ������� ��������� �� ����� n � ��������� ����:
1 � n = �
2 � n = �
�

9 � n = �

�������� n �������� � ����������. ������������ �������� �� ������������ ��������� �������� � ��� ������ ���� � ��������� �� 1 �� 9 ������������.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	do
	{
		cout << "������� ����� n=";
		cin >> n;
	} while ((n < 1) || (n>9));

	for (int i = 1; i <= 9; i++)
		cout << i << "x" << n << "=" << i*n << endl		;
	
	system("pause");
}