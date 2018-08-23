/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
Дан двумерный массив целых чисел. Определить:
а)	есть ли в нем столбец, состоящий только из нулей;
б)	есть ли в нем столбец, состоящий только из элементов, принадлежащих промежутку от 0 до b;
в)	есть ли в нем столбец, состоящий только из четных элементов;
г)	есть ли в нем столбец, в котором равное количество положительных и отрицательных элементов;
д)	есть ли в нем столбец, в котором имеются одинаковые элементы;
е)	есть ли в нем столбец, в котором имеются как минимум три элемента, являющиеся минимальными в массиве.

*/

#include "iostream"

using namespace std;

const int width = 10;
const int height = 10;


void Print(int nums[height][width])
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			cout << nums[i][j] << "\t";
		cout << endl;
	}
}

void onlyZero(int nums[height][width])
{
	int check[height] = {1};
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			if (nums[j][i] != 0)
				check[i] = 0;
		}
	for (int i = 0; i < height; i++)
		if (check[i] == 1)
		{
			cout << "В массиве есть столбец состоящий только из нулей" << endl;
				break;
		}
		else if(check[i] == 0 && i == height-1)
			cout << "В массиве нет столбца состоящего только из нулей" << endl;
}

void numsForTo(int nums[height][width])
{
	int b;
	cout << "Введите значение b=";
	cin >> b;

	int check[height] = { 1 };
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			if (nums[j][i] < 0 || nums[j][i]> b)
				check[i] = 0;
		}
	for (int i = 0; i < height; i++)
		if (check[i] == 1)
		{
			cout << "В массиве есть столбец состоящий только из элементов, принадлежащих промежутку от 0 до b=" << b << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "В массиве нет столбца состоящего только из элементов, принадлежащих промежутку от 0 до b=" << b << endl;

}

void onlyEven(int nums[height][width])
{
	int check[height] = { 1 };
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			if (nums[j][i]%2 !=0)
				check[i] = 0;
		}
	for (int i = 0; i < height; i++)
		if (check[i] == 1)
		{
			cout << "В массиве есть столбец состоящий только из четных элементов" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "В массиве нет столбца состоящего только из четных элементов" << endl;
}


void negativeEqualPositive(int nums[height][width])
{
	int check[height];
	int negative = 0;
	int positive = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (nums[j][i] < 0)
				negative += nums[j][i];
			else
				positive += nums[j][i];
		}
		if (positive != negative)
			check[i] = 0;
		positive = 0;
		negative = 0;
	}
	for (int i = 0; i < height; i++)
		if (check[i] == 1)
		{
			cout << "В массиве есть столбец в котором равное количество положитель¬ных и отрицательных элементов" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "В массиве нет столбца в котором равное количество положитель¬ных и отрицательных элементов" << endl;
}

void repeat(int nums[height][width])
{
	int check[height] = { 0 };
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			for (int u = 0; u< height; u++)
			if (nums[j][i] == nums[u][i])
				check[i] = 1;
		}
	for (int i = 0; i < height; i++)
		if (check[i] == 1)
		{
			cout << "В массиве есть столбец в котором имеются одинаковые элементы" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "В массиве нет столбца в котором имеются одинаковые элементы" << endl;
}

void threeMins(int nums[height][width])
{
	int min = 1000;
	int check[height] = { 0 };
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			if (min > nums[i][j])
			{
				min = nums[i][j];
			}
		}

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			if (nums[j][i] == min)
				check[i]++;
		}


	for (int i = 0; i < height; i++)
		if (check[i] == 3)
		{
			cout << "В массиве есть столбец в котором имеются как минимум три элемента, являющиеся минимальными в массиве" << endl;
			break;
		}
		else if (check[i] != 3 && i == height - 1)
			cout << "В массиве нет столбца в котором имеются как минимум три элемента, являющиеся минимальными в массиве" << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	int nums[10][10];
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			nums[i][j] =  rand() % 20; // задание элементов массива


	Print(nums);
	onlyZero(nums);
	numsForTo(nums);
	onlyEven(nums);
	negativeEqualPositive(nums);
	repeat(nums);
	threeMins(nums);
	system("pause");
}