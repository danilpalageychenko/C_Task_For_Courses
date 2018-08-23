/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*–еализовать класс Account (задание 32). ƒобавить поле-дату открыти€ счета, использу€ класс Date из задани€ 29.
ƒобавть метод, вычисл€ющий количество дней, прошедших с начала открыти€ счета, и добавл€ющий по 0.01%
к проценту начислени€ за каждый день.*/

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