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
	cout << "Введите имя студента:";
	cin >> _Name;
	cout << "Введите отчество студента:";
	cin >> _SecondName;
	cout << "Введите фамилию студента:";
	cin >> _SurName;
	cout << "Введите номер читательского билета:";
	cin >> _Number;
	cout << "Введите название факультета:";
	cin >> _Fakult;
	cin.ignore();
	cout << "Введите дату рождения:";
	_Birth.setDate1();
	cout << "Введите номер телефона:";
	cin >> _Phone;

	cout << "Объект добавлен!" << endl;
	system("pause");
}
void Biblio::show()
{
	cout << "ФИО студента:" << _Name << " " << _SecondName << " " << _SurName << endl;
	cout << "Номер читательского билета:" << _Number << endl;
	cout << "Название факультета:" << _Fakult << endl;
	cout << "Дата рождения:" << _Birth.getDay() << "/" << _Birth.getMonth() << "/" << _Birth.getYear() << endl;
	cout << "Номер телефона:" << _Phone << endl;

}
string Biblio::getSurName()
{
	return _SurName;
}
string Biblio::getFakult()
{
	return _Fakult;
}