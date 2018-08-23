/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
30. � ���� �������� �������� ���������� 20 ��� ���� ���������� ������ 
(���� ���� ���������� ��������� ������ �������, �� �������� ����� 3, ���������� � 0, ���� ���� ���������� ������ � 1). 
������������ ���������� �������� � ���������� � �������� ������������ ����� ��������. �� ������ ��������� ������ ����������:
�)	��������� ���������� ������, ������� ���������� ������ �������:
�)	���������� ������, ������������ �������, ��� ������ �������;
�)	�������, ����� ���� ������� ����� �������� ���������.
*/
#include "iostream"
#include "time.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int team1[20];
	int team2[20];
	int maybe;
	do
	{
		cout << "����� ��������� ���������� ����������? (1 - �� 0 - ���):" << endl;
		cin >> maybe;
	} while ((maybe < 0) || (maybe>1));

	if (maybe == 1)
	{
		for (int i = 0; i < 20; i++)
		{
			do
				team1[i] = rand() % 4;
			while (team1[i] == 2);
			do
				team2[i] = rand() % 4;
			while (team2[i] == 2);
		}
		for (int i = 0; i < 20; i++)
		{
			cout << "Team 1[" << i + 1 << "] = " << team1[i] << "\t" << "Team 2[" << i + 1 << "] = " << team2[i] << endl;
		}

	}
	else
	{
		cout << "Team 1:" << endl;
		for (int i = 0; i < 20; i++)
		{
			do
			{
				cout << "Team 1[" << i + 1 << "] = ";
				cin >> team1[i];
			} while ((team1[i] < 0) || (team1[i] > 3) || (team1[i] == 2));
		}

		cout << "Team 2:" << endl;
		for (int i = 0; i < 20; i++)
		{
			do
			{
				cout << "Team 2[" << i + 1 << "] = ";
				cin >> team2[i];
			} while ((team2[i] < 0) || (team2[i] > 3) || (team2[i] == 2));
		}
	}

	// ������� ������� =D
	int sum_team1 = 0, sum_team2 = 0;
	int win_team1 = 0, win_team2 = 0;
	int games[20];
	for (int i = 0; i < 20; i++)
	{
		sum_team1 += team1[i];
		sum_team2 += team2[i];
		if (team1[i] == 3) win_team1++;
		if (team2[i] == 3) win_team2++;
		if (((team1[i] == 0) && (team2[i] == 3))|| (team1[i]==1) && (team2[i]==1)) games[i] = 1;
	}

	cout << "��������� ���������� ����� ������ �������� =" << sum_team1 << endl;
	cout << "��������� ���������� ����� ������ �������� =" << sum_team2 << endl;
	cout << "���������� ������ ������������ ������� ������ �������� = " << win_team1 << endl;
	cout << "���������� ������ ������������ ������� ������ �������� = " << win_team2 << endl;
	cout << "�������� ����� �������� �������� ";
	for (int i = 0; i < 20; i++)
		if (games[i] == 1) cout << i+1 << ", ";
	cout << " ����." << endl;
	system("pause");
}