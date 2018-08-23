/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
55. ���������� ����������� �������:
�)	���������� ����� ���� ������������ �����;
�)	���������� ���������� ���� ������������ �����.
����������� ���������, � ������� ������������ ��������� �������.
*/

#include "iostream"

using namespace std;

void Sum(int n,int *S)
{
		*S += n % 10;
		n /= 10;
		//cout << n << endl;
		if (n > 10)
		{
			Sum(n, S);
		}
		else
		{
			*S += n;
		}
}

void Num(int n, int *count)
{
	*count+=1;
	n /= 10;
	//cout << n << endl;
	if (n > 10)
	{
		Num(n, count);
	}
	else
	{
		*count+=1;
	}
}

void main()
{

	setlocale(LC_ALL,"");
	int n;
	int S = 0;
	int count = 0;
	cout << "������� �����=";
	cin >> n;

	Sum(n, &S);
	Num(n, &count);
	cout << "����� ����=" << S << endl;
	cout << "���������� ����=" << count << endl;
	system("pause");
}