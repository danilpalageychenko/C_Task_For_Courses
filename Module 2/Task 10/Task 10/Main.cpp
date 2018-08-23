/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*������� ����� Pair (���� ����� �����); ���������� ����� ��������� �� ����� � ��������
�������� ��� (�, b) + (�, d) = (� + b, � + d). ���������� �����-��������� Money � ������: ����� � �������.
�������������� �������� �������� � ���������� ������ ��������� � ������� �������� ����.*/

#include <iostream>
#include "Money.h"
#include "Pair.h"
using namespace std;



int main()

{
	setlocale(LC_ALL, "");
	Pair obj1;
	Pair obj2;
	obj1.setA();
	obj1.setB();
	obj2.setA();
	obj2.setB();

	cout << "obj1 + obj2 : " << endl;
	(obj1 + obj2).show();
	cout << "obj1 * 5 :" << endl;
	(obj1 * 5).show();


	


	cout << "------------------" << endl;

	Money ob;
	ob.setKopek();
	ob.setRuble();

	cout << "���� + 10 =" << endl;
	ob+=10;
	ob.show();

	cout << "���� - 80 =" << endl;
	ob-=80;
	ob.show();

	cout << "���� / 2 =" << endl;
	ob/=2;
	ob.show();


	system("pause");
	return 0;
}