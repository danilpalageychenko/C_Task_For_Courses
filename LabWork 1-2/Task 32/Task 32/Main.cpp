/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*����������� ����� Account, �������������� ����� ���������� ����. � ������
������ ���� ������ ����: ������� ���������,����� �����, ������� ����������
� ����� � ������.�������� ������ ����� ����������� ��������� �������������.
���������� ��������� �������� ��������: ������� ��������� �����, ����� ��������� ����� �����
�� �����, �������� ������ �� ����,��������� ��������, ��������� ����� � �������,
��������� ����� � ����, �������� ����� ��������(�������������� � ������������).*/

#include "iostream"
#include "Account.h"
using namespace std;




void main()
{
	setlocale(LC_ALL, "");
	Account Ak;
	char s[255];
	Ak.setAll();
	int chose;
	while (1)
	{
		do
		{
			system("cls");
			cout << "1.������� ��������� �����" << endl;
			cout << "2.����� ��������� ����� �� �����" << endl;
			cout << "3.�������� ������ �� ����" << endl;
			cout << "4.��������� ��������" << endl;
			cout << "5.��������� ����� � �������" << endl;
			cout << "6.��������� ����� � ����" << endl;
			cout << "7.�������� ����� ��������" << endl;
			cout << "8.�����" << endl;
			cout << "�������� �����:";
			cin >> chose;
		} while (chose < 1 || chose > 8);

		switch (chose)
		{
		case 1:
			Ak.setOwner();
			break;
		case 2:
			Ak.takeOff();
			break;
		case 3:
			Ak.addMoney();
			break;
		case 4:
			Ak.addPercent();
			break;
		case 5:
			Ak.turnToDollars();
			break;
		case 6:
			Ak.turnToEvro();
			break;
		case 7:
			Ak.Print();
			break;
		case 8:
			cout << "�������.." << endl;
			system("pause");
			exit(0);
		}

	}
	system("pause");
}