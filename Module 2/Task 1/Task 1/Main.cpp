/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/


/*1.	����������� ����� ����������. ���������� ������ ��� �������� ��������, 
����������� �� ���������, ����������� �������, ��-�������\������ ����������. 
� ��������� ������� 3 ���������� � ���������� �� ��������� �������.  */ 

#include <iostream>
#include "Circle.h"
#include "windows.h"
#include "conio.h"
#include <vector>
using namespace std;


void showAll(vector <Circle> &circles)
{
	float square = 0;
	for (int i = 0; i < circles.size(); i++)
	{
		circles[i].show();
		square += circles[i].square();
	}
	circles[0].setCursorPos(0, 24);
	cout << square;
}

void setColor(int one,int two)
{
	/*���������� ����������� ���������� ������������ ������*/
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	/*��������� ������ ���� �� ��������� ��������. ���� ������� - ������*/
	SetConsoleTextAttribute(hConsole, (WORD)((one << 4) | two));

}

void pickAndMove(vector <Circle> &circles)
{

	
	int chose = 0;
	char finput;
	do
	{
		system("cls");
		showAll(circles);
		setColor(0, 2);
		circles[chose].show();
		setColor(0, 7);
		circles[chose].setCursorPos(10, 23);
		cout << "w,a - �������, e - �����, r - ����� ����������, f -������� ����������,";
		circles[chose].setCursorPos(10, 24);
		cout << "q - �����.";
		finput = _getch();
		switch (finput)
		{
		case 'a':
				chose--;
				if (chose < 0)
					chose = circles.size() - 1;
			break;
		case 'd':
				chose++;
				if (chose >= circles.size())
					chose = 0;
			break;
		case 'q':
			exit(0);
		case 'r':
		{
			Circle obj(10, 10, 5);
			circles.push_back(obj);
			chose = circles.size()-1;
			finput = 'e';
			break;
		}
		case 'f':
			if (circles.size() == 1)
			{
				circles[chose].setCursorPos(0, 0);
				cout << "�� �� ������ ������� ��������� ����������";
				_getch();
			}
			else
			{
				circles.erase(circles.begin() + chose);
				chose = 0;
			}
			break;
		default:
			break;
		}
		

	} while (finput != 'e');

	system("cls");
	showAll(circles);

	char input;
	do
	{
		circles[chose].setCursorPos(10, 24);
		cout << "w,a,s,d - ��������, +,- - ��������� �������, q - �����.";
		input = circles[chose].move();
		system("cls");
		
		showAll(circles);
		setColor(0, 2);
		circles[chose].show();
		setColor(0, 7);

		if (input == 'q') exit(0);
	} while (input != 'e');
}


void main()
{
	setlocale(LC_ALL,"");
	Circle obj1(10,10,5);
	Circle obj2(14, 13, 6);

	vector <Circle> circles;
	circles.push_back(obj1);
	circles.push_back(obj2);
	
	showAll(circles);

	while(1)
	pickAndMove(circles);
	

	cin.get();
}