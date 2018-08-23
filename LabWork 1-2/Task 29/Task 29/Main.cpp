/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Создать класс Date для работы с датами в формате "год.месяц.день". 
Дата представляется структурой с тремя полями типа unsigned int: для года,месяца и дня.
Класс должен включать не менее трех функций инициализации: числами, строкой вида "год.месяц.день" (например "2004.08.31") и датой.
Обязательными операциями являются: вычисление даты через заданое количество дней, вычитание заданого
количества дней из даты, определение вискосности года, присвоение и получение отдельных частей (год,месяц,день),
сравнение дат(равно, до, после), вычисление количества дней между датами.*/

#include "Date.h"
#include "iostream"
#include "windows.h"
#include "conio.h"
#include <vector>
using namespace std;


void setCursorPos(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cor = { 0,0 };
	cor.X = x;
	cor.Y = y;
	SetConsoleCursorPosition(hConsole, cor);
}

void mainMenu()
{
	vector <Date> Dates;
	Date obj;
	char input;
	int chose = 0;
	while (1)
	{
		system("cls");
		setCursorPos(0, 0);
		cout << " Добавить объект(способ 1)" << endl;
		cout << " Добавить объект(способ 2)" << endl;
		cout << " Вычислисть дату через заданое количество дней" << endl;
		cout << " Вычитание заданого количества дней из даты" << endl;
		cout << " Определение высокосности года" << endl;
		cout << " Создать объект и присовить ему только день" << endl;
		cout << " Создать объект и присовить ему только месяц" << endl;
		cout << " Создать объект и присовить ему только год" << endl;
		cout << " Сравнить две даты" << endl;
		cout << " Вычислить количество дней между датами" << endl;

		setCursorPos(0, chose);
		printf(">");
		input = _getch();
		switch (input)
		{
		case 'w':
			chose--;
			if (chose < 0)
				chose = 9;
			break;
		case 's':
			chose++;
			if (chose > 9)
				chose = 0;
			break;
		case 'q':
			system("cls");
			cout << "Выход из программы..." << endl;
			system("pause");
			exit(0);
			break;
		case 'e':
			switch (chose)
			{
			case 0:
				system("cls");
				obj.setDate1();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 1:
				system("cls");
				obj.setDate2();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 2:
				system("cls");
				obj.setDate1();
				obj.showDatePlusDays();
				obj.clear();
				break;
			case 3:
				system("cls");
				obj.setDate1();
				obj.showDateMinusDays();
				obj.clear();
				break;
			case 4:
				system("cls");
				obj.setDate1();
				obj.showIsLeap();
				obj.clear();
				break;
			case 5:
				system("cls");
				obj.setDay();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 6:	
				system("cls");
				obj.setMonth();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 7:
				system("cls");
				obj.setYear();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 8:
				system("cls");
				obj.showWhatBigger();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 9:
				system("cls");
				obj.showCountDays();
				Dates.push_back(obj);
				obj.clear();
				break;
			case 10:
				break;
			}
		}

	}
}

void main()
{
	setlocale(LC_ALL,"");
	
	mainMenu();


	system("pause");
}