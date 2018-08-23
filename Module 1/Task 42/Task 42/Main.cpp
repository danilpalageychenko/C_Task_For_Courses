/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
42. ƒаны два одномерных массива A и B размерности n, элементы которых упор€дочены по возрастанию (убыванию). 
ќбъединить  массивы так, чтобы результирующий массив C размерности 2*n осталс€ упор€доченным по возрастанию (убыванию). 
«аполнение исходных массивов A и B организовать программно.
*/

#include "iostream"
#include "time.h"
using namespace std;
const int width = 10;

void Sorting(int *array,int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (array[i] < array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
}

void Random(int *array,int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] =-50 + rand() % 100;
	}
}


void Print(int *array,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void Union(int *unionArray, int UnionN,int *array1,int n1,int *array2,int n2)
{
	int i;
	for (i = 0; i < n1; i++)
		unionArray[i] = array1[i];
	for (i = 0; i < n2; i++)
		unionArray[i+10] = array2[i];
}

void main()
{
	srand(time(0));
	setlocale(LC_ALL,"");
	int A[width];
	int B[width];
	int C[width*2];
	
	Random(A, width);
	Sorting(A,width);
	Print(A, width);

	Random(B, width);
	Sorting(B, width);
	Print(B, width);

	Union(C, width * 2, A, width, B, width);
	Sorting(C, width*2);
	Print(C, width*2);


	system("pause");
}