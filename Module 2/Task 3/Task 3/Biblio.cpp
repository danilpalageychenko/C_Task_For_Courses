#include "Biblio.h"
#include <iostream>


using namespace std;


Biblio::Biblio()
{
}

Biblio::Biblio(string Name, string SeconName, string SurName, string Number, string Fakult, int bday, int bmonth, int byear, string Phone)
{
	_Name = Name;
	_SecondName = _SecondName;
	_SurName = SurName;
	_Number = Number;
	_Fakult = Fakult;
	Date Birth(bday,bmonth,byear);
	_Birth = Birth;
	_Phone = Phone;
}

void Biblio::setAll()
{
	cout << "������� ��� ��������:";
	cin >> _Name;
	cout << "������� �������� ��������:";
	cin >> _SecondName;
	cout << "������� ������� ��������:";
	cin >> _SurName;
	cout << "������� ����� ������������� ������:";
	cin >> _Number;
	cout << "������� �������� ����������:";
	cin >> _Fakult;
	cin.ignore();
	cout << "������� ���� ��������:";
	_Birth.setDate1();
	cout << "������� ����� ��������:";
	cin >> _Phone;

	cout << "������ ��������!" << endl;
	system("pause");
}
void Biblio::show()
{
	cout << "��� ��������:" << _Name << " " << _SecondName << " " << _SurName << endl;
	cout << "����� ������������� ������:" << _Number << endl;
	cout << "�������� ����������:" << _Fakult << endl;
	cout << "���� ��������:" << _Birth.getDay() << "/" << _Birth.getMonth() << "/" << _Birth.getYear() << endl;
	cout << "����� ��������:" << _Phone << endl;

}
string Biblio::getSurName()
{
	return _SurName;
}
string Biblio::getFakult()
{
	return _Fakult;
}