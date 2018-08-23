/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Разработать программу, которая позволит при известном годовом проценте вычислить сумму
вклада в банке через два года, если задана исходная величина вклада.*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int In, Per;

	cout << "Вклад = ";
	cin >> In;
	cout << "Под сколько %?=";
	cin >> Per;

	cout << "Прибыль за два года =" << (In / 100)*Per << endl;
	cout << "В итоге у вас будет =" << In + ((In / 100)*Per) << endl;

	system("pause");
}