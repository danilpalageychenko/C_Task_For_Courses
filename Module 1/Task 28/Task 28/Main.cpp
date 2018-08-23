/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
28. ������ ������������ ��� �������� �������� ������ ���������� �������. � ������� ������� ��������� ����� 
��������� ������ ������ ����������, �������� � ��������� �� 163 �� 190 ������������. �� ������ ������ ������� ���������:
�)	������� �������������� �������� ����� � ������� ��� �� �����;
�)	����������� �������� ����� � ������ ���������������� �������� ������� (���� ����� ��������� ���������, 
������� ������ ������� ��������������).
����������� �������� ������� � ������ � �������� �������.
*/

#include "iostream"
#include "time.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int people[20];
	float avr=0;
	cout << "��� ���������������, �������� �������:" << endl;
	for (int i = 0; i < 20; i++)
	{
		people[i] = 163 + rand() % 28;
		cout << "people[" << i << "] = " << people[i] << ";" << endl;
		avr += people[i];
	}
	
	avr /= 20;

	int min = people[0];
	int min_index = 0;
	for (int i = 0; i < 20; i++)
	{
		if (min > people[i])
		{
			min = people[i];
			min_index = i;
		}
	}
	cout << "������� �������� ������� =" << avr << endl;
	cout << "����������� �������� ������� people[" << min_index << "] = " << min << endl;

	system("pause");
}