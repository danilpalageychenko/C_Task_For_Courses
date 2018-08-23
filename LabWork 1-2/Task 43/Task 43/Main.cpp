/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*����������� ����� Account (������� 32). �������� ����-���� �������� �����, ��������� ����� Date �� ������� 29.
������� �����, ����������� ���������� ����, ��������� � ������ �������� �����, � ����������� �� 0.01%
� �������� ���������� �� ������ ����.*/

#include "iostream"
#include "Account.h"
using namespace std;

void main()
{
	setlocale(LC_ALL,"");
	Account MyAccount;

	MyAccount.setNewAccount();

	MyAccount.addPercentToToday();
	MyAccount.showAccountInfo();

	system("pause");
}