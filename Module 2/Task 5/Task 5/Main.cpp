/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*5.	����������� �����  ��������-��������, ���������� ������������ ������ � ���������� ������������. 
���������� �������� �������� � ��������� �������� � ���������� ������ ������� (����� ��� ��������), 
���������� ���������� ������������ ���� ��������, ����� �������.*/

#include <iostream>
#include "Vector.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	Vector obj1(3, 3.5, 1);
	Vector obj2(5.9, 8.1, 2);

	cout << "obj1 + obj2 :\n" << obj1 + obj2 << endl;
	cout << "obj1 - obj2 :\n"<< obj1 - obj2 << endl;
	cout << "obj1 * obj2 :\n" << obj1 * obj2 << endl;
	cout << "������ ������� ������� = " << obj1.lenght() << endl << "������ ������� ������� = " << obj2.lenght() << endl;


	system("pause");
}