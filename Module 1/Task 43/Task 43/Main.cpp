/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
43. Двумерный массив целых чисел, размерность и элементы которого задаются с клавиатуры, 
вывести на экран в виде таблицы. Вычислить максимальное значение для каждой 
строки и найти минимальное из этих максимальных значений. На экран вывести полученное значение и номер 
соответствующей строки. Выполнить задачу в двух вариантах:
а)	двумерный массив представлен одномерным динамическим массивом;
б)	двумерный массив представлен массивом указателей.
*/

#include "iostream"

using namespace std;


void minInMax(int *array,int width,int height)
{
	int u = 0;
	int l = 0;

	int *max = new int[height];
	for (int i = 0; i < width*height;i++)
	{
		if (max[l] < array[i])
		{
			max[l] = array[i];
		}
		cout << array[i] << " ";
		u++;
		if (u == width)
		{
			cout << endl;
			u = 0;
			l++;
		}
	}
	int min = INT_MAX;
	for (int i = 0; i < height; i++)
	{
		cout << "max[" << i << "] = " << max[i] << endl;
		if (min > max[i])
			min = max[i];
	}
	cout << "min=" << min << endl;

	
}


void minInMaxNormal(int **array1,int width,int height)
{
	int *max = new int[height];
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << array1[i][j] << " ";
			if (max[i] < array1[i][j])
				max[i] = array1[i][j];
		}
		cout << endl;
	}

	int min = INT_MAX;
	for (int i = 0; i < height; i++)
	{
		cout << "max[" << i << "] = " << max[i] << endl;
		if (min > max[i])
			min = max[i];
	}
	cout << "min=" << min << endl;

}

void main()
{
	setlocale(LC_ALL,"");
	int width;
	int height;
	cout << "Размерность двумерного массива(height,width через пробел):";
	cin >> height >> width;
	int *array = new int[height*width]; // одномерный массив 
	int **array1 = new int*[height];
	for (int i = 0; i < height; i++)
		array1[i] = new int[width];

	int u = 0;
	int l = 0;
	for (int i = 0; i < height*width; i++)
	{
		cout << "array[" << l+1 << "][" << u+1 << "] = ";
		cin >> array[i];
		array1[l][u] = array[i];
		u++;
		if (u == width)
		{
			u = 0;
			l++;
		}
	}
	short int method;
	do
	{
		cout << "Способ решения(1 или 2)=";
		cin >> method;
	} while (method < 1 || method > 2);

	switch (method)
	{
	case 1:	minInMax(array, width, height); break;
	case 2: minInMaxNormal(array1, width, height); break;
	}
	system("pause");
}