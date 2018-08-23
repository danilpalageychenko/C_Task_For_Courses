/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Реализовать класс Account, представляющий собой банковский счет. В классе
должны быть четыре поля: фамилия владельца,номер счета, процент начисления
и сумма в рублях.Открытие нового счета выполняется операцией инициализации.
Необходимо выполнить следущие операции: сменить владельца счета, снять некоторую сумму денег
со счета, положить деньги на счет,начислить проценты, перевести сумму в доллары,
перевести сумму в евро, получить сумму прописью(переобразовать в числительное).*/

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
			cout << "1.Сменить владельца счёта" << endl;
			cout << "2.Снять некоторую сумму со счёта" << endl;
			cout << "3.Положить деньги на счёт" << endl;
			cout << "4.Начислить проценты" << endl;
			cout << "5.Перевести сумму в доллары" << endl;
			cout << "6.Перевести сумму в евро" << endl;
			cout << "7.Получить сумму прописью" << endl;
			cout << "8.Выход" << endl;
			cout << "Выберите опцию:";
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
			cout << "Выходим.." << endl;
			system("pause");
			exit(0);
		}

	}
	system("pause");
}