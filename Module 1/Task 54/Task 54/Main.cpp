/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
54. ����������� ���������, ������� ��������� ������� � ��� ���������� � ���������� �����, ��������� ��������� �� �������.
*/

#include "iostream"

using namespace std;

void coube(int *a)
{
	*a = pow(*a, 3);
}
void square(int *a)
{
	*a = pow(*a, 2);
}


void main()
{
	setlocale(LC_ALL,"");
	void(*fun1)(int*) = &coube;
	void(*fun2)(int*) = &square;
	int a;
	cout << "������� ����� =";
	cin >> a;
	fun1(&a);
	cout << "��� ����� = " << a << endl;


	cout << "������� ����� =";
	cin >> a;
	fun2(&a);
	cout << "������� ����� = " << a << endl;

	system("pause");
}