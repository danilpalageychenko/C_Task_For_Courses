/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
40. Заданы два статических массива из 10 элементов, заполненных произвольным образом. Разработать программу, 
в которой на основе данных массивов создается третий массив, содержащий:
а)	пересечение двух массивов (без повторений);
б)	объединение двух массивов (без повторений).
Результат работы программы должен включать вывод элементов двух исходных массивов и элементы результирующего массива.
*/

#include "iostream"
#include "time.h"
using namespace std;

void Random(int *start)
{
	for (int i = 0; i < 10; i++)
	{
		*start = rand() % 10;
		start++;
	}
}

void Intersection(int array_1[10], int array_2[10])
{
	int answer[10];
	int array1[10];
	int array2[10];
	for (int i = 0; i < 10; i++)
	{
		array1[i] = array_1[i];
		array2[i] = array_2[i];
	}
	int u=0;
	for (int i = 0; i < 10;i++)
		for (int j = 0; j < 10; j++)
		{
			if (array1[i] == array2[j])
			{
				answer[u] = array1[i];
				array1[i] = INT_MIN+i;
				array2[i] = INT_MIN;
			
				u++;
			}
		}
	for (int i = 0; i < u; i++)
		cout << answer[i] << " ";
	cout << endl;
}




void Union(int array1[10], int array2[10])
{
	int answer[20];
	int u = 0;



	bool check = true;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < u; j++)
		{
			if (array1[i] != answer[j])
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		if (check == true)
		{
			answer[u] = array1[i];
			u++;
		}
	}





	check = true;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < u; j++)
		{
			if (array2[i] != answer[j])
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		if (check == true)
		{
			answer[u] = array2[i];
			u++;
		}
	}


	for (int i = 0; i < u; i++)
		cout << answer[i] << " ";
	cout << endl;
}
void Print(int *array)
{
	for (int i = 0; i < 10; i++)
	{
		cout << *array << " ";
		array++;
	}
	cout << endl;
}

void main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	int array1[10];
	int array2[10];


	Random(&array1[0]);
	Random(&array2[0]);
	Print(array1);
	Print(array2);
	cout << "Пересечение:" << endl;
	Intersection(array1, array2);
	cout << "Объединение:" << endl;
	Union(array1, array2);
	system("pause");
}