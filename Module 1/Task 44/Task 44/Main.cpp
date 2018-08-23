/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
44. Разработать программу, которая циклически сдвигает строки в двумерном массиве следующим образом: 
первая строка становится последней, вторая – первой, третья – второй и т.д. Размерность и элементы двумерного 
массива задаются с клавиатуры.
*/

#include "iostream"

using namespace std;

void Print(int **array, int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

void Move(int **array, int height, int width)
{
	int *tmp_array = new int[width];
	for (int i = 0; i < height - 1; i++)
		for (int j = 0; j < width; j++)
		{
			tmp_array[j] = array[i][j];
			array[i][j] = array[i + 1][j];
			array[i + 1][j] = tmp_array[j];
		}

	Print(array, height, width);
	system("pause");
}

void main()
{
	setlocale(LC_ALL, "");
	int width;
	int height;
	cout << "Введите размерность массива через пробел(height,width)=";
	cin >> height >> width;

	int **array = new int*[height];
	for (int i = 0; i < height; i++)
		array[i] = new int[width];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			cout << "array[" << i+1 << "][" << j+1 << "] = ";
			cin >> array[i][j];
		}

	while(true)
	Move(array, height, width);
	system("pause");
}