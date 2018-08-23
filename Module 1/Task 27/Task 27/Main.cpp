/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
27. Дано натуральное числом. Напечатать разложение этого числа па простые множители. Реализовать два варианта:
а)	каждый простой множитель должен быть напечатан один раз;
б)	каждый простой множитель должен быть напечатан столько раз, сколько раз он входит в разложение.
*/
#include "iostream"

using namespace std;

bool simple(int x)
{
	bool ans = true;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return (false);
		else ans = true;
	}
	return ans;
}



int main()
{
	setlocale(LC_ALL, "");
	int a,orig_a;
	short int method;

		cout << "Введите натуральное число" << endl;
		cin >> a;
		orig_a = a;
		do
		{
			cout << "Введите номер способа (1 - простые числа повторяются(в написании); 2- простые числа не повторяются(в написании))" << endl;
			cin >> method;
		} while ((method < 1) || (method > 2));
		system("cls");
		//simple?
		if (simple(a) == 1)
		{
			cout << a << " - уже простое число" << endl;
			system("pause");
			return(1);
		}

		if (method == 1)
		{
			//способ 1:простые числа повторяются(в написании)
			do
			{
				for (int i = 2; i < a; i++)
					if ((a%i == 0) && simple(i) == 1)
					{
						a /= i;
						cout << i << "*";

					}

			} while (simple(a) != 1);
			cout << a << " = " << orig_a << endl;
		}
		else if (method == 2)
		{

			//способ 2:простые числа не повторяются (в написании)
			int *simp_mass = new int[a];
			int j = 0;
			do
			{
				for (int i = 2; i < a; i++)
				{

					if ((a%i == 0) && simple(i) == 1)
					{
						a /= i;
						simp_mass[j] = i;
						j++;

					}

				}
			} while (simple(a) != 1);
			simp_mass[j] = a;

			for (int i = 0; i <= j; i++)
			{
				if(simp_mass[i] != 0)cout << simp_mass[i] << " ";
				for (int k = i+1; k <= j; k++)
					if (simp_mass[k] == simp_mass[i]) 
						simp_mass[k] = 0;
			}
			cout << endl;
		}
		else cout << "Program error" << endl;

	system("pause");
}