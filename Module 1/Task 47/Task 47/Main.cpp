/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
47. Написать программу, в которой динамически создается массив строк. Строки вводятся с клавиатуры. 
В созданном массиве удалить все  одинаковые строки и вывести полученный массив на экран.
*/

#include "iostream"
#include <vector>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int count;
	cout << "Введите количство строк:";
	cin >> count;
	cin.get();
	string *array = new string[count];
	for (int i = 0; i < count; i++)
	{
		cout << "array[" << i << "] = ";
		getline(cin, array[i]);
	}


	for (int i = 0; i < count; i++)
		for (int j = i+1; j < count; j++)
		{
			if (array[i] == array[j])
			{
				array[j] = "";
			}
		}

	for (int i = 0; i < count; i++)
		if(array[i] != "")
		cout << array[i] << endl;

	system("pause");
}