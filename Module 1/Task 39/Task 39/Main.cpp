/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
39. Задан статический массив из 10 элементов, заполненный произвольным образом. 
Разработать программу, в которой с помощью двух указателей (на начало и конец массива) проверяется, 
является ли массив симметричным.
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

void Print(int array[10])
{
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
}

bool symmetry(int array[10])
{
	int *start = &array[0];
	int *end = &array[9];
	bool answer = true;

	for (int i = 0; i < 5; i++)
	{
		if (*start != *end)
		{
			answer = false;
		}
		start++;
		end--;
	}
	return answer;
}
void main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	int array[10];// = {1,2,3,4,5,5,4,3,2,1};
	
	Random(&array[0]);
	Print(array);
	if (symmetry(array) == true)
		cout << "Массив симетричный" << endl;
	else
		cout << "Массив не симетричный" << endl;
	system("pause");
}