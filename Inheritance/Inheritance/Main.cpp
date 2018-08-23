/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*������� ����� Triad (������ �����); ���������� ����� ��������� �����. ���������� ����������� ����� Time
� ������: ���, ������ � �������. ���������� ������ ����� ������� ��������� �������� �������.*/

#include <iostream>
#include "Time.h"
#include "Triad.h"

using namespace std;

void main()
{
	setlocale(LC_ALL,"");
	Triad obj(12, 32, 1);
	cout << "� ������ ����� ������� ����� = " << obj.whatBigger() << endl;

	Time obj1(3,5,6);
	Time obj2(3,4,23);
	Time obj3(6, 5, 6);
	Time obj4(6, 5, 5);
	
	cout << "����� Time, ������ 1:" << endl;
	obj1.show();
	cout << "����� Time, ������ 2:" << endl;
	obj2.show();

	cout << "�� ���� �������� ������� =";
	Time ans = obj1.whatBigger(obj1, obj2);

	ans.show();


	cout << "����� Time, ������ 3:" << endl;
	obj3.show();
	cout << "����� Time, ������ 4:" << endl;
	obj4.show();
	

	cout << "�� ���� �������� ������� =";
	ans = obj1.whatLess(obj3, obj4);

	ans.show();



	system("pause");
}