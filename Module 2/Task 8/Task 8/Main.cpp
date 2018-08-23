/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*������� ������� ����� ��r, ��������������� �������� ������ (������), �����, 
���������. ���������� ������ �������������� � ��������� ��������. ������� ����������� 
����� Lorry (��������), ��������������� ����� ����������������� ������. ���������� ���
���� ������� �������������� ����� � ��������� ����������������.*/

#include <iostream>
#include "Car.h"
#include "Lorry.h"
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	Car obj1("Name", 100, 20);
	Lorry obj2("Name", 500, 50, 130);

	cout << "������:" << endl;
	obj1.show();
	cout << "---------------" << endl;
	cout << "��������:" << endl;
	obj2.show();
	cout << "---------------" << endl;

	double tmp_power;
	cout << "������� ����� �������� ������" << endl;
	cin >> tmp_power;
	cin.ignore();
	obj1.setPower(tmp_power);
	


	string tmp_mark;
	cout << "������� ����� ����� ���������" << endl;
	getline(cin, tmp_mark);
	
	obj2.setMark(tmp_mark);


	double tmp_LC;
	cout << "������� ����� ���������������� ���������" << endl;
	cin >> tmp_LC;
	cin.ignore();
	obj2.setLoadCapacity(tmp_LC);

	cout << "������:" << endl;
	obj1.show();
	cout << "---------------" << endl;
	cout << "��������:" << endl;
	obj2.show();

	system("pause");
}