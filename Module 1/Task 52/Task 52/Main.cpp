/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
52. Разработать программу, предназначенную для обработки информации о матчах, сыгранных футбольной командой.
Количество сыгранных матчей и заработанное в них количество очков вводится с клавиатуры. 
За матч команда получает либо 3 очка в случае победы, либо 0 очков – в случае поражения, либо 1 очко, 
если игра закончилась «в ничью».  В программе определить следующие функции:
а)	функция динамического выделения памяти под массив;
б)	функция заполнения массива данными с клавиатуры;
в)	функция для вычисления суммарного количества заработанных очков;
г)	функция для вычисления количества матчей, в которых команда не проиграла и количество матчей, в которых было поражение.
*/

#include "iostream"

using namespace std;


int *Set(int *match,int n)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Количество очков " << i + 1 << " матча =";
			cin >> match[i];
		} while (match[i]<0 || match[i] > 3);
	}
	return match;
}

int *setMemory(int n)
{
	int *match = new int[n];
	return match;
}

int Sum(int *match,int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += match[i];
	}
	return Sum;
}

int notLose(int *match,int n)
{
	int notLose = 0;
	for (int i = 0; i < n; i++)
	{
		if (match[i] != 0)
			notLose++;
	}
	return notLose;
}

int Lost(int *match, int n)
{
	int Lost = 0;
	for (int i = 0; i < n; i++)
	{
		if (match[i] == 0)
			Lost++;
	}
	return Lost;
}

void main()
{
	setlocale(LC_ALL,"");
	int n;
	cout << "Введите количество матчей:";
	cin >> n;
	int *match;
	match = Set(setMemory(n),n);
	cout << "Сумма очков матча = " << Sum(match, n) << endl;
	cout << "Количество матчей в которых команда не проиграла = " << notLose(match, n) << endl;
	cout << "Количество матчей в которых команда проиграла = " << Lost(match, n) << endl;


	system("pause");
}