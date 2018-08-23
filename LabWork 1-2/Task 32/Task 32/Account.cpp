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
	cout << "Введите фамилию:" ;
	getline(cin,_sur_name);
	cout << "Введите номер счёта:";
	cin >> _account_num;
	do
	{
		cout << "Введите процент(0..100):";
		cin >> _percent;
	} while (_percent < 0 || _percent > 100);

	cout << "Количество денег:";
	cin >> _money;
	_rde = 1;
}
void Account::setOwner()
{
	cin.ignore();
	cout << "Введите фамилию нового владельца:" << endl;
	getline(cin, _sur_name);
}

void Account::takeOff()
{
	float mon;
	do
	{
		cout << "Сколько снять?" << endl;
		cin >> mon;
		if (_money - mon < 0)
			cout << "У владельца нет такой суммы" << endl;
	} while (_money - mon < 0);
	_money -= mon;

	cout << "Текущая сумма " << _money << endl;
	system("pause");
}
void Account::addMoney()
{
	float mon;
	cout << "Сколько положить?" << endl;
	cin >> mon;

	_money += mon;
	cout << "Текущая сумма " << _money << endl;
	system("pause");
}

void Account::addPercent()
{
	float per;
	do
	{
		cout << "Сколько процентов начислить?" << endl;
		cin >> per;
	} while (per < 0 || per > 100);

		_money += (per / 100)*_money;
		cout << "Текущая сумма " << _money << endl;
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
	cout << "Теперь сумма в долларах " << _money << endl;
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
	cout << "Теперь сумма в евро " << _money << endl;
	system("pause");
}

void Account::Print()
{
	int num = (int)_money;
	char s[255] = "";
		int position = 0; // позиция в строке
		int x[4];  // массив разрядов
		int div = 1000; // делитель на разряды
		int var = num;  // частное от деления
		int rest; // остаток от деления
		for (int i = 0; i < 4; i++) {
			rest = (int)(var / div);
			x[i] = rest;
			var = var - rest*div;
			div = div / 10;
		}
		// Тысячи
		switch (x[0]) {
		case 1:
			strcpy(s, "Одна тысяча ");
			break;
		case 2:
			strcpy(s, "Две тысячи ");
			break;
		case 3:
			strcpy(s, "Три тысячи ");
			break;
		case 4:
			strcpy(s, "Четыре тысячи ");
			break;
		case 5:
			strcpy(s, "Пять тысяч ");
			break;
		case 6:
			strcpy(s, "Шесть тысяч ");
			break;
		case 7:
			strcpy(s, "Семь тысяч ");
			break;
		case 8:
			strcpy(s, "Восемь тысяч ");
			break;
		case 9:
			strcpy(s, "Девять тысяч ");
			break;
		default: break;
		}
		position = strlen(s);
		// Сотни
		switch (x[1]) {
		case 1:
			strcpy(s + position, "сто ");
			break;
		case 2:
			strcpy(s + position, "двести ");
			break;
		case 3:
			strcpy(s + position, "триста ");
			break;
		case 4:
			strcpy(s + position, "четыреста ");
			break;
		case 5:
			strcpy(s + position, "пятьсот ");
			break;
		case 6:
			strcpy(s + position, "шестьсот ");
			break;
		case 7:
			strcpy(s + position, "семьсот ");
			break;
		case 8:
			strcpy(s + position, "восемьсот ");
			break;
		case 9:
			strcpy(s + position, "девятьсот ");
			break;
		default: break;
		}
		position = strlen(s);
		// Десятки
		switch (x[2]) {
		case 1:
			// Числа от 10 до 19
			switch (x[3]) {
			case 0:
				strcpy(s + position, "десять ");
				break;
			case 1:
				strcpy(s + position, "одиннадцать ");
				break;
			case 2:
				strcpy(s + position, "двенадцать ");
				break;
			case 3:
				strcpy(s + position, "тринадцать ");
				break;
			case 4:
				strcpy(s + position, "четырнадцать ");
				break;
			case 5:
				strcpy(s + position, "пятнадцать ");
				break;
			case 6:
				strcpy(s + position, "шестнадцать ");
				break;
			case 7:
				strcpy(s + position, "семнадцать ");
				break;
			case 8:
				strcpy(s + position, "восемнадцать ");
				break;
			case 9:
				strcpy(s + position, "девятнадцать ");
				break;
			}
			x[3] = 0;
			position = strlen(s);
			break;
		case 2:
			strcpy(s + position, "двадцать ");
			break;
		case 3:
			strcpy(s + position, "тридцать ");
			break;
		case 4:
			strcpy(s + position, "сорок ");
			break;
		case 5:
			strcpy(s + position, "пятьдесят ");
			break;
		case 6:
			strcpy(s + position, "шестьдесят ");
			break;
		case 7:
			strcpy(s + position, "семьдесят ");
			break;
		case 8:
			strcpy(s + position, "восемьдесят ");
			break;
		case 9:
			strcpy(s + position, "девяносто ");
			break;
		default: break;
		}
		position = strlen(s);
		// Единицы
		switch (x[3]) {
		case 1:
			strcpy(s + position, "один ");
			break;
		case 2:
			strcpy(s + position, "два ");
			break;
		case 3:
			strcpy(s + position, "три ");
			break;
		case 4:
			strcpy(s + position, "четыре ");
			break;
		case 5:
			strcpy(s + position, "пять ");
			break;
		case 6:
			strcpy(s + position, "шесть ");
			break;
		case 7:
			strcpy(s + position, "семь ");
			break;
		case 8:
			strcpy(s + position, "восемь ");
			break;
		case 9:
			strcpy(s + position, "девять ");
			break;
		default: break;
		}
		position = strlen(s);

		cout << s << endl;
		system("pause");
	}