/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
53. Разработать программу, которая в двумерном массиве целых чисел выполнит перестановку строк следующим образом:
первую с последней, вторую - с предпоследней и т.д. Размерность матрицы задается с клавиатуры. 
Элементы матрицы заполняются псевдослучайными числами. В программе определить следующие функции:
а)	функция динамического выделения памяти под двумерный массив;
б)	функция заполнения двумерного массива псевдослучайными числами;
в)	функция вывода элементов массива в виде матрицы;
г)	функция обмена строк.
*/

#include "iostream"
#include "time.h"
using namespace std;


int **setMemory(int height,int width)
{
	int **array = new int*[height];
	for (int i = 0; i < height; i++)
		array[i] = new int[width];

	return array;
}

void random(int **array,int height,int width)
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			array[i][j] = -50 + rand() % 100;
		}
}

void Print(int **array, int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		cout << "\t";
		for (int j = 0; j < width; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}

void change(int **array, int height, int width)
{
	int *tmp_array = new int[width];
	for (int i = 0; i < (height/2) ;i++)
		for (int j = 0; j < width; j++)
		{
			tmp_array[i] = array[i][j];
			array[i][j] = array[height - i - 1][j];
			array[height - i - 1][j] = tmp_array[i];
		}
}
void main()
{
	srand(time(0));
	setlocale(LC_ALL,"");
	int height;
	int width;
	cout << "Введите рамерность массива (height,width через пробел):";
	cin >> height >> width;
	int **array;
	array = setMemory(height, width);
	random(array,height,width);
	Print(array, height, width);
	change(array, height, width);
	cout << "После замены строк:" << endl;
	Print(array, height, width);
	system("pause");
}