/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
16. �������� ��������� ������ �� ����� "���������" ���� ����� ����� ��  � �� b (�������� � � b �������� � ����������; b > 0). ����� ������� �������������� ���� ���������� ����� �����. ����������� ��������� ����� ���������, ���������:
�)	�������� ����� � ������������,
�)	�������� ����� � ������������.
�)	�������� ����� for
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "������� 2 ����� ����� ������" << endl;
	cin >> a >> b;
	cout << endl;

	//������ 1
	cout << "� ������������:" << endl;
	c = a;
	do
	{
		cout << c << endl;
		c++;
	}
	while (c<=b);

	//������ 2
	cout << endl << "� ������������:" << endl;
	c = a;
	while (c <= b)
	{
		cout << c << endl;
		c++;
	}
	//������ 3
	float ser=0,f=0;
	cout << endl << "���� for:" << endl;
	for (int i = a; i <= b; i++)
	{
		cout << i << endl;
		ser += i;
		f++;
	
	}
	cout << "Ser=" << ser / f;
	system("pause");
}