/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
��� ��������� ������ ����� �����. ����������:
�)	���� �� � ��� �������, ��������� ������ �� �����;
�)	���� �� � ��� �������, ��������� ������ �� ���������, ������������� ���������� �� 0 �� b;
�)	���� �� � ��� �������, ��������� ������ �� ������ ���������;
�)	���� �� � ��� �������, � ������� ������ ���������� ������������� � ������������� ���������;
�)	���� �� � ��� �������, � ������� ������� ���������� ��������;
�)	���� �� � ��� �������, � ������� ������� ��� ������� ��� ��������, ���������� ������������ � �������.

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
			cout << "� ������� ���� ������� ��������� ������ �� �����" << endl;
				break;
		}
		else if(check[i] == 0 && i == height-1)
			cout << "� ������� ��� ������� ���������� ������ �� �����" << endl;
}

void numsForTo(int nums[height][width])
{
	int b;
	cout << "������� �������� b=";
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
			cout << "� ������� ���� ������� ��������� ������ �� ���������, ������������� ���������� �� 0 �� b=" << b << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "� ������� ��� ������� ���������� ������ �� ���������, ������������� ���������� �� 0 �� b=" << b << endl;

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
			cout << "� ������� ���� ������� ��������� ������ �� ������ ���������" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "� ������� ��� ������� ���������� ������ �� ������ ���������" << endl;
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
			cout << "� ������� ���� ������� � ������� ������ ���������� �������������� � ������������� ���������" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "� ������� ��� ������� � ������� ������ ���������� �������������� � ������������� ���������" << endl;
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
			cout << "� ������� ���� ������� � ������� ������� ���������� ��������" << endl;
			break;
		}
		else if (check[i] == 0 && i == height - 1)
			cout << "� ������� ��� ������� � ������� ������� ���������� ��������" << endl;
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
			cout << "� ������� ���� ������� � ������� ������� ��� ������� ��� ��������, ���������� ������������ � �������" << endl;
			break;
		}
		else if (check[i] != 3 && i == height - 1)
			cout << "� ������� ��� ������� � ������� ������� ��� ������� ��� ��������, ���������� ������������ � �������" << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	int nums[10][10];
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			nums[i][j] =  rand() % 20; // ������� ��������� �������


	Print(nums);
	onlyZero(nums);
	numsForTo(nums);
	onlyEven(nums);
	negativeEqualPositive(nums);
	repeat(nums);
	threeMins(nums);
	system("pause");
}