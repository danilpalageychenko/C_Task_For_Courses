/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*�������� ��� � ����� ������ �������� ��������, � ����� ��� � ����� ������ 
������������ ��� (������ � 1 � �. �.). ���������� ������� �������� (����� ������ ���). 
� ������ ���������� ��������� ������� �������� �������, ��� ������ ������ ���.*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	int Byear, Bmonth;
	int Tyear, Tmonth;
	cout << "��� �������� = ";
	cin >> Byear;

	cout << "����� �������� = ";
	cin >> Bmonth;

	cout << "������� ��� = ";
	cin >> Tyear;

	cout << "������� ����� = ";
	cin >> Tmonth;


	int Year, Month;

	Year = Tyear - Byear;
	Month = Tmonth - Bmonth;
	if (Month < 0)
	{
		Year--;
		Month = 12 + Month;
	}

	cout << "�������� " << Year << " ��� � " << Month << " �������"<< endl;

	system("pause");
}