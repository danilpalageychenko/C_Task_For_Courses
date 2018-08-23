#include "Account.h"
#include "iostream"
#include <string>

using namespace std;


Account::Account()
{
}


Account::~Account()
{
}

void Account::setAll()
{
	cout << "������� �������:" ;
	getline(cin,_sur_name);
	cout << "������� ����� �����:";
	cin >> _account_num;
	do
	{
		cout << "������� �������(0..100):";
		cin >> _percent;
	} while (_percent < 0 || _percent > 100);

	cout << "���������� �����:";
	cin >> _money;
	_rde = 1;
}
void Account::setOwner()
{
	cin.ignore();
	cout << "������� ������� ������ ���������:" << endl;
	getline(cin, _sur_name);
}

void Account::takeOff()
{
	float mon;
	do
	{
		cout << "������� �����?" << endl;
		cin >> mon;
		if (_money - mon < 0)
			cout << "� ��������� ��� ����� �����" << endl;
	} while (_money - mon < 0);
	_money -= mon;

	cout << "������� ����� " << _money << endl;
	system("pause");
}
void Account::addMoney()
{
	float mon;
	cout << "������� ��������?" << endl;
	cin >> mon;

	_money += mon;
	cout << "������� ����� " << _money << endl;
	system("pause");
}

void Account::addPercent()
{
	float per;
	do
	{
		cout << "������� ��������� ���������?" << endl;
		cin >> per;
	} while (per < 0 || per > 100);

		_money += (per / 100)*_money;
		cout << "������� ����� " << _money << endl;
		system("pause");
}

void Account::turnToDollars()
{
	switch (_rde)
	{
	case 1:
		_money = _money * 0.015;
		_rde = 2;
		break;
	case 2:
		break;
	case 3:
		_money = _money * 1.09;
		_rde = 2;
		break;
	}
	cout << "������ ����� � �������� " << _money << endl;
	system("pause");
}
void Account::turnToEvro()
{
	switch (_rde)
	{
	case 1:
		_money = _money * 0.014;
		_rde = 3;
		break;
	case 2:
		_money = _money * 0.91;
		break;
	case 3:
		break;
	}
	cout << "������ ����� � ���� " << _money << endl;
	system("pause");
}

void Account::Print()
{
	int num = (int)_money;
	char s[255] = "";
		int position = 0; // ������� � ������
		int x[4];  // ������ ��������
		int div = 1000; // �������� �� �������
		int var = num;  // ������� �� �������
		int rest; // ������� �� �������
		for (int i = 0; i < 4; i++) {
			rest = (int)(var / div);
			x[i] = rest;
			var = var - rest*div;
			div = div / 10;
		}
		// ������
		switch (x[0]) {
		case 1:
			strcpy(s, "���� ������ ");
			break;
		case 2:
			strcpy(s, "��� ������ ");
			break;
		case 3:
			strcpy(s, "��� ������ ");
			break;
		case 4:
			strcpy(s, "������ ������ ");
			break;
		case 5:
			strcpy(s, "���� ����� ");
			break;
		case 6:
			strcpy(s, "����� ����� ");
			break;
		case 7:
			strcpy(s, "���� ����� ");
			break;
		case 8:
			strcpy(s, "������ ����� ");
			break;
		case 9:
			strcpy(s, "������ ����� ");
			break;
		default: break;
		}
		position = strlen(s);
		// �����
		switch (x[1]) {
		case 1:
			strcpy(s + position, "��� ");
			break;
		case 2:
			strcpy(s + position, "������ ");
			break;
		case 3:
			strcpy(s + position, "������ ");
			break;
		case 4:
			strcpy(s + position, "��������� ");
			break;
		case 5:
			strcpy(s + position, "������� ");
			break;
		case 6:
			strcpy(s + position, "�������� ");
			break;
		case 7:
			strcpy(s + position, "������� ");
			break;
		case 8:
			strcpy(s + position, "��������� ");
			break;
		case 9:
			strcpy(s + position, "��������� ");
			break;
		default: break;
		}
		position = strlen(s);
		// �������
		switch (x[2]) {
		case 1:
			// ����� �� 10 �� 19
			switch (x[3]) {
			case 0:
				strcpy(s + position, "������ ");
				break;
			case 1:
				strcpy(s + position, "����������� ");
				break;
			case 2:
				strcpy(s + position, "���������� ");
				break;
			case 3:
				strcpy(s + position, "���������� ");
				break;
			case 4:
				strcpy(s + position, "������������ ");
				break;
			case 5:
				strcpy(s + position, "���������� ");
				break;
			case 6:
				strcpy(s + position, "����������� ");
				break;
			case 7:
				strcpy(s + position, "���������� ");
				break;
			case 8:
				strcpy(s + position, "������������ ");
				break;
			case 9:
				strcpy(s + position, "������������ ");
				break;
			}
			x[3] = 0;
			position = strlen(s);
			break;
		case 2:
			strcpy(s + position, "�������� ");
			break;
		case 3:
			strcpy(s + position, "�������� ");
			break;
		case 4:
			strcpy(s + position, "����� ");
			break;
		case 5:
			strcpy(s + position, "��������� ");
			break;
		case 6:
			strcpy(s + position, "���������� ");
			break;
		case 7:
			strcpy(s + position, "��������� ");
			break;
		case 8:
			strcpy(s + position, "����������� ");
			break;
		case 9:
			strcpy(s + position, "��������� ");
			break;
		default: break;
		}
		position = strlen(s);
		// �������
		switch (x[3]) {
		case 1:
			strcpy(s + position, "���� ");
			break;
		case 2:
			strcpy(s + position, "��� ");
			break;
		case 3:
			strcpy(s + position, "��� ");
			break;
		case 4:
			strcpy(s + position, "������ ");
			break;
		case 5:
			strcpy(s + position, "���� ");
			break;
		case 6:
			strcpy(s + position, "����� ");
			break;
		case 7:
			strcpy(s + position, "���� ");
			break;
		case 8:
			strcpy(s + position, "������ ");
			break;
		case 9:
			strcpy(s + position, "������ ");
			break;
		default: break;
		}
		position = strlen(s);

		cout << s << endl;
		system("pause");
	}