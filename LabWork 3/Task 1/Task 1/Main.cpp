/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*���������� �����, �������������� �������, ��� �������� ����������� ���������:
������� �������� ~ ��� ���������������� �������;
�������� ������� ������ � ����� �����������, ���������� ����������� ������� � �������� ������� �� ���� ��������;
�������� ��������� ������;
��������;
������������;
������ � ����� (�)
����������� ���������, ��������������� ������������� ������� ������. */

#include<iostream>
#include "matrix.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	matrix obj1(5,5),obj2(3,4),obj3(5,5);
	obj1.setRand(0, 5);
	obj2.setRand(0, 5);
	cout << "������� ����� 1:" << endl << obj1;
	cout << "������� ����� 2:" << endl << obj2;
	
	if (obj1 > obj2)
		cout << "������ ������� ������ ������" << endl;
	else
		cout << "������ ������� ������" << endl;

	if (obj1(1, 1) == obj2(1, 1))
		cout << "�������� 1.1 � ����� �������� ����������." << endl;
	else
		cout << "�������� 1.1 � ����� �������� ������." << endl;

	obj3 = obj2;

	cout << "������� ����� 3:" << endl << obj3;
	
	~obj3;
	
	cout << "������� ����� 3 ���������������:" << endl;
	
	cout << obj3;

	if(obj1 <= obj2)
	cout << "ob1 <= obj2 da" << endl;
	else
		cout<< "ob1 <= obj2 net" << endl;




	system("pause");
}