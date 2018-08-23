/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*3. ���������� �����, �������� ����� ���������� � ������������ ����������: ���,
����� ������������� ������, ���������,  ���� ��������, �������. 
������ � ������ ������ ������������ ����������� ��������������� �������-������.
	����������� ���������, � ������� ��������� ������ �������� ������� ������. � ��������� ������������:
� ���� ������ � ���������;
� ����� ������ ������� �� �����;
� ����� (�� ������� ��� ����������) � ����� ���������� � ���������;
*/

#include <iostream>
#include "Biblio.h"
#include <vector>
#include "string.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	Biblio obj1("Name", "SecondName", "Surname", "2397878923", "TKVT", 10, 1, 1997, "09323777492");

	vector <Biblio> bibl;

	bibl.push_back(obj1);

	char input;

	while (1)
	{
		system("cls");
		cout << "1.�������� ������ ��������." << endl;
		cout << "2.����� ���������� � ���� ���������." << endl;
		cout << "3.����� �� �������." << endl;
		cout << "4.����� �� ����������." << endl;
		cout << "5.�����." << endl;

		cin >> input;

		switch (input)
		{
		case '1':
		{
			Biblio obj;
			obj.setAll();
			bibl.push_back(obj);
			break;
		}
		case '2':
			for (int i = 0; i < bibl.size(); i++)
			{
				bibl[i].show();
				cout << "--------------------------------" << endl;
			}
			break;
		case '3':
		{
			string tmp;
			cout << "������� ������� ��� ������:";
			cin >> tmp;
			for (int i = 0; i < bibl.size(); i++)
			{
				if (strstr(bibl[i].getSurName().c_str(), tmp.c_str())>0)
				{
					bibl[i].show();
					cout << "---------------------------------";
				}
			}
			break;
		}
		case '4':
		{
			string tmp;
			cout << "������� ��������� ��� ������:";
			cin >> tmp;
			for (int i = 0; i < bibl.size(); i++)
			{
				if (strstr(bibl[i].getFakult().c_str(), tmp.c_str())>0)
				{
					bibl[i].show();
					cout << "---------------------------------";
				}
			}
			break;
		}
		case  '5':
			cout << "�������.." << endl;
			system("pause");
			exit(0);


		default:
			break;
		}
		system("pause");

	}
	
}