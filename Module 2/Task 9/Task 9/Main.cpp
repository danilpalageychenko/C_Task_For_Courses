/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*� ������ Polinom (�������)  ����������� �������� �������� ��� ������������� �������. 
��������� ����� �������������, ������� ���� �������� ������ ����: Polinom (int k). 
����������� ������ ��������� ������� ������� �������. ����������� ���������, � ������� 
������������� ������������� ������� ������������ ������������ ��� �������� ���� ���������, 
� ����� �������� � ������ �����, ����� � ������ ��������.*/

#include <iostream>
#include "Polinom.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;
	Polinom obj1, obj2, obj3;

	cout << "������� ������� 1��� ����������: ";
	cin >> n;

	obj1.set(n);
	obj1.show();

	cout << "������� ������� 2��� ����������: ";
	cin >> n;

	obj2.set(n);
	obj2.show();

	obj3 = obj1 + obj2;
	cout << endl;
	cout << "���������: ";
	obj3.show();

	cout << "������� ������� ������� �������: ";
	cin >> n;

	Polinom obj4(n);
	cout << "������� ����� �����: ";
	cin >> n;
	cout << "��������� �������� �������� � ������ �����: ";
	obj3 = obj4 + n;
	obj3.displayNull();
	cout << "��������� �������� ������ ����� � ��������: ";
	obj3 = n + obj4;
	obj3.displayNull();


	system("pause");
	return 0;
}

