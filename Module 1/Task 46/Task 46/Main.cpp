/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
46. Разработать программу, которая в двумерном массиве производит циклический сдвиг на k столбцов вправо или влево.
Размерность,  элементы двумерного массива, а также значение k и направление сдвига задаются с клавиатуры.
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

void Move(int **array, int height, int width, int direction)
{

	int *tmp_array = new int[height];
	switch (direction)
	{
	case 1:
		for (int i = 0; i < width - 1; i++)
		{
			for (int j = 0; j < height; j++)
			{
				tmp_array[j] = array[j][i];
				array[j][i] = array[j][i+1];
				array[j][i + 1] = tmp_array[j];
			}
		}
		break;
	case 2:
		for (int i = 0; i < width - 1; i++)
		{
			for (int j = 0; j < height; j++)
			{
				tmp_array[j] = array[j][i + 1];
				array[j][i + 1] = array[j][i];
				array[j][i] = tmp_array[j];
			}
		}
		break;
	}

}
void main()
{
	setlocale(LC_ALL, "");
	int height, width;
	cout << "Введите размерность массива(height,width) через пробел:";
	cin >> height >> width;
	int **array = new int*[height];
	for (int i = 0; i < height; i++)
		array[i] = new int[width];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			cout << "array[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> array[i][j];
		}

	int k;
	int direction;
	cout << "На сколько строк сдвинуть массив?:";
	cin >> k;
	do
	{
		cout << "В какую сторону сдвинуть массив?(1 - Влево, 2 - Вправо):";
		cin >> direction;
	} while (direction < 1 || direction > 2);

	Print(array, height, width);
	cout << endl;
	for (int i = 0; i < k; i++)
		Move(array, height, width, direction);

	Print(array, height, width);
	system("pause");
}