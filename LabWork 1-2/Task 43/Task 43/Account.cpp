#include "Account.h"
#include "iostream"
#include "time.h"

using namespace std;

Account::Account()
{
}

void Account::setNewAccount()
{
	cout << "������� ���������� ����� �� ����� �����" << endl;
	cin >> _money;
	do
	{
		cout << "������� ��������� ������� ����������" << endl;
		cin >> _percent;
	} while (_percent < 0 || _percent > 100);
	cin.ignore();
	_date.setDate1();
}

void Account::addPercentToToday()
{

	struct tm *tim;
	time_t tt = time(NULL);
	tim = localtime(&tt);
	int days = _date.countDaysWithArgs(tim->tm_mday, tim->tm_mon+1, tim->tm_year+1900);
	_percent += 0.01 * days;
	cout << "� ������� ����������� ������ " << days << " ����." << endl;
	if (_percent > 100)
		_percent = 100;

}

void Account::showAccountInfo()
{
	cout << "������� ��������� �����:" << endl;
	cout << "������:" << _money << endl;
	cout << "��������:" << _percent << endl;
	cout << "���� �����������:" << _date.getDay() << "/" << _date.getMonth() << "/" << _date.getYear() << endl;
}


