/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
34. � ������ 18 �������, � ������ �� ������� 36 ����. ���������� � ��������� �� ����� ������� �������� � ��������� �������, 
������ ����� ������� ������������� ������� �������, � ������ �������� - ������� ����. ���� ����� �� �� ��� ���� ����� ������, 
�� ��������������� ������� ������� ����� �������� 1, � ��������� ������ - 0. ������������ ���������� 
���������� ������� ��������� �������.
��������� ���������, ������������:
�)	����� ��������� ���� � ����� �� ������� ������;
�)	����� ������, � ������� ������������ ���������� ��������� ���� (���� ����� ���������, ������� ���);
�)	������ �������, ������� ���������;
�)	������ ���� ����� ����������� �������
(��� ���������� ������� ���������� ������������ ��������������� ���������� ������, 
���������� ���������� ������� ���� � ������ ������)
*/

#include "iostream"
#include "time.h"
using namespace std;

const int places_vagons = 18;
const int places_places = 36;
void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int empty[places_vagons] = {0};
	int max = 0;
	int first = 0, second = 0, third = 0;
	int first_id = 0, second_id = 0, third_id = 0;
	int places[places_vagons][places_places];

	for (int i = 0; i < places_vagons; i++)
	{
		for (int j = 0; j < places_places; j++)
		{
			places[i][j] = rand() % 2;
			if (places[i][j] == 0)empty[i]++;
			if (max < empty[i]) max = empty[i];
		}
		if (first < places_places - empty[i])
			first = places_places - empty[i];

		if ((second < places_places - empty[i]) && (places_places - empty[i] != first) && (places_places - empty[i] != third))
			second = places_places - empty[i];

		if ((third < places_places - empty[i]) && (places_places - empty[i] != first) && (places_places - empty[i] != second))
			third = places_places - empty[i];
	}


	// �����
	for (int i = 0; i < places_vagons; i++)
	{
		for (int j = 0; j < places_places; j++)
			cout << places[i][j] << " ";
		cout << endl;
	}

	cout << "���������� ��������� ����:" << endl;
	for (int i = 0; i < places_vagons; i++)
		cout << "����� �" << i+1 << " = " << empty[i] << endl;
	
		for (int i = 0; i < places_vagons; i++)
			if(empty[i] == max)
			cout << "� ������ �" << i+1 << " ������������ ���������� ��������� ���� = " << empty[i] << endl;


	for (int i = 0; i < places_vagons; i++)
		if (empty[i] == places_places)
			cout << "� ������ �" << i+1 << " ��� ����� ������." << endl;
		else if (i == places_vagons - 1)
			cout << "��������� ������ ������� ���." << endl;

	for (int i = 0; i < places_vagons; i++)
	{
		if (places_places - empty[i] == first) first_id = i+1;
		if (places_places - empty[i] == second) second_id = i+1;
		if (places_places - empty[i] == third) third_id = i+1;
	}
		cout << "����� ���������� ����� �" << first_id << " � ������� " << first << " �������" << endl;
		cout << "������ ����� ���������� ����� �" << second_id << " � ������� " << second << " �������" << endl;
		cout << "������� ����� ���������� ����� �" << third_id << " � ������� " << third << " �������" << endl;
	
	system("pause");
}