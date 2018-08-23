/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*»звестны год и номер мес€ца рождени€ человека, а также год и номер мес€ца 
сегодн€шнего дн€ (€нварь Ч 1 и т. д.). ќпределить возраст челођвека (число полных лет). 
¬ случае совпадени€ указанных номеров мес€ђцев считать, что прошел полный год.*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	int Byear, Bmonth;
	int Tyear, Tmonth;
	cout << "√од рождени€ = ";
	cin >> Byear;

	cout << "ћес€ц рождени€ = ";
	cin >> Bmonth;

	cout << "“екущий год = ";
	cin >> Tyear;

	cout << "“екущий мес€ц = ";
	cin >> Tmonth;


	int Year, Month;

	Year = Tyear - Byear;
	Month = Tmonth - Bmonth;
	if (Month < 0)
	{
		Year--;
		Month = 12 + Month;
	}

	cout << "„еловеку " << Year << " лет и " << Month << " мес€цев"<< endl;

	system("pause");
}