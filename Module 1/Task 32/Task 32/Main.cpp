/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
32. ��������� ������ ��������� �����, ��������� �������� ������� ���������������� �������.
*/

#include "iostream"

using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int r;
	do
	{
		cout << "������� ������ ������� = ";
		cin >> r;
	} while (r <= 0);
	int *Nums = new int[r];
	for (int i = 0; i < r; i++)
	{
		Nums[i] = rand() % 100;
		for (int j = 0; j < i; j++)
			if (Nums[j] == Nums[i]) Nums[i] = rand() % 100;
	}
	// ����������
	int c;
	for (int i = 0; i < r;i++)
		for (int j = 0; j < r; j++)
		{
			if (Nums[j] > Nums[i])
			{
				c = Nums[i];
				Nums[i] = Nums[j];
				Nums[j] = c;
			}
		}
	for (int i = 0; i < r; i++)
		cout << "Nums[" << i << "] = " << Nums[i] << endl;

		delete[] Nums;
	system("pause");
}