/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*2.	����������� �����, ���������� ���������� � �������� ������ �����������. 
������������� ����������� ����������� ���������/������  ��������� ������ ������, 
�������� � ����������� �������� ����� ������.*/

#include <iostream>
#include "Mail.h"
#include <vector>
using namespace std;

void main()
{
	setlocale(LC_ALL,"");

	Mail obj1("Mystreet","23","Kharkiv","dzerginskiy","","Ukraine","68919");
	vector <Mail> mails;
	mails.push_back(obj1);

	int input,chose;

	while(1)
	{
		do
		{
			system("cls");
			cout << "0.������� ����� ������" << endl;
			for (int i = 0; i < mails.size(); i++)
			{
				cout << i + 1 << ".";
				mails[i].show();
				cout << endl;
			}
			cout << endl << "��� �����:";
			cin >> input;

			if(input == 0)
			{
				string tmp;
				system("cls");
				Mail obj;
				cout << "������� �����:";
				cin >> tmp;
				obj.setStreet(tmp);

				cout << "������� ����� ����:";
				cin >> tmp;
				obj.setHouseNumber(tmp);

				cout << "������� �������� ����������� ������:";
				cin >> tmp;
				obj.setLocality(tmp);

				cout << "������� �����:";
				cin >> tmp;
				obj.setDistrict(tmp);

				cout << "������� ����������:";
				cin >> tmp;
				obj.setRepublic(tmp);

				cout << "������� ������:";
				cin >> tmp;
				obj.setCountry(tmp);

				cout << "������� ������:";
				cin >> tmp;
				obj.setIndex(tmp);

				mails.push_back(obj);

				cout << "������ ��������!";
			}


		} while (input <= 0 || input > mails.size());

		input--;


		do
		{

			do
			{

				system("cls");
				cout << "1.�������� �����." << endl;
				cout << "2.�������� ����� ����." << endl;
				cout << "3.�������� �������� ����������� ������." << endl;
				cout << "4.�������� �����." << endl;
				cout << "5.�������� ����������." << endl;
				cout << "6.�������� ������." << endl;
				cout << "7.�������� ������." << endl;
				cout << "8.������� �� ����� �����." << endl;
				cout << "9.������� �� ����� ����� ����." << endl;
				cout << "10.������� �� ����� �������� ����������� ������." << endl;
				cout << "11.������� �� ����� �����." << endl;
				cout << "12.������� �� ����� ����������." << endl;
				cout << "13.������� �� ����� ������." << endl;
				cout << "14.������� �� ����� ������." << endl;
				cout << "15.������� �� ����� ������ �������." << endl;
				cout << "16.���������� ������" << endl;
				cout << "17.�����" << endl;

				cin >> chose;

			} while (chose <= 0 || chose > 18);
			cin.ignore();
			string tmp;
			switch (chose)
			{
			case 1:
				cout << "�������� ����� ��:" << endl;
				getline(cin, tmp);
				mails[input].setStreet(tmp);
				break;

			case 2:
				cout << "�������� ����� ���� ��:" << endl;
				getline(cin, tmp);
				mails[input].setHouseNumber(tmp);
				break;

			case 3:
				cout << "�������� �������� ����������� ������ ��:" << endl;
				getline(cin, tmp);
				mails[input].setLocality(tmp);
				break;

			case 4:
				cout << "�������� ����� ��:" << endl;
				getline(cin, tmp);
				mails[input].setDistrict(tmp);
				break;

			case 5:
				cout << "�������� ���������� ��:" << endl;
				getline(cin, tmp);
				mails[input].setRepublic(tmp);
				break;

			case 6:
				cout << "�������� ������ ��:" << endl;
				getline(cin, tmp);
				mails[input].setCountry(tmp);
				break;

			case 7:
				cout << "�������� ������ ��:" << endl;
				getline(cin, tmp);
				mails[input].setIndex(tmp);
				break;

			case 8:
				cout << mails[input].getStreet() << endl;
				break;

			case 9:
				cout << mails[input].getHouseNumber() << endl;
				break;

			case 10:
				cout << mails[input].getLocality() << endl;
				break;

			case 11:
				cout << mails[input].getDistrict() << endl;
				break;

			case 12:
				cout << mails[input].getRepublic() << endl;
				break;

			case 13:
				cout << mails[input].getCountry() << endl;
				break;

			case 14:
				cout << mails[input].getIndex() << endl;
				break;

			case 15:
				mails[input].show();
				break;

		

			case 16:
				mails.erase(mails.begin()+input);
				
			default:
				break;
			}

			cout << endl;
			system("pause");

		} while (chose < 16);

	}

	system("pause");
}