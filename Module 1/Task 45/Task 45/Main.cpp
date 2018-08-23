/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
45. ����������� ���������, ������� � ��������� ������� ���������� ����������� ����� �� k ����� ����� ��� ����. 
�����������,  �������� ���������� �������, � ����� �������� k � ����������� ������ �������� � ����������.
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

void Move(int **array,int height,int width,int direction)
{
	
	int *tmp_array = new int[width];
	switch (direction)
	{
	case 1:
		for (int i = 0; i < height - 1; i++)
			for (int j = 0; j < width; j++)
			{
				tmp_array[j] = array[i][j];
				array[i][j] = array[i + 1][j];
				array[i + 1][j] = tmp_array[j];
			}
		break;
	case 2:
		for (int i = 0; i < height - 1; i++)
			for (int j = 0; j < width; j++)
			{
				tmp_array[j] = array[i + 1][j];
				array[i + 1][j] = array[i][j];
				array[i][j] = tmp_array[j];
			}
		break;
	}

}
void main()
{
	setlocale(LC_ALL, "");
	int height, width;
	cout << "������� ����������� �������(height,width) ����� ������:";
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

	int k;
	int direction;
	cout << "�� ������� ����� �������� ������?:";
	cin >> k;
	do
	{
		cout << "� ����� ������� �������� ������?(1 - �����, 2 - ����):";
		cin >> direction;
	} while (direction < 1 || direction > 2);

	Print(array, height, width);
	cout << endl;
	for (int i = 0; i < k;i++)
	Move(array, height, width, direction);

	Print(array, height, width);
	system("pause");
}