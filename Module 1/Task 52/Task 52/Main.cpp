/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
52. ����������� ���������, ��������������� ��� ��������� ���������� � ������, ��������� ���������� ��������.
���������� ��������� ������ � ������������ � ��� ���������� ����� �������� � ����������. 
�� ���� ������� �������� ���� 3 ���� � ������ ������, ���� 0 ����� � � ������ ���������, ���� 1 ����, 
���� ���� ����������� �� ������.  � ��������� ���������� ��������� �������:
�)	������� ������������� ��������� ������ ��� ������;
�)	������� ���������� ������� ������� � ����������;
�)	������� ��� ���������� ���������� ���������� ������������ �����;
�)	������� ��� ���������� ���������� ������, � ������� ������� �� ��������� � ���������� ������, � ������� ���� ���������.
*/

#include "iostream"

using namespace std;


int *Set(int *match,int n)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "���������� ����� " << i + 1 << " ����� =";
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
	cout << "������� ���������� ������:";
	cin >> n;
	int *match;
	match = Set(setMemory(n),n);
	cout << "����� ����� ����� = " << Sum(match, n) << endl;
	cout << "���������� ������ � ������� ������� �� ��������� = " << notLose(match, n) << endl;
	cout << "���������� ������ � ������� ������� ��������� = " << Lost(match, n) << endl;


	system("pause");
}