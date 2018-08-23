/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
26. ���� ����������� �����. ����������:
�)	������� ��� � ��� ����������� ����� �;
�)	���������� ��� ����, ������� z (�������� z �������� � ����������; z = 2,3,4);
�)	����� ��� ����, ������� � (�������� � �������� � ����������; 0< � <8);
�)	������� ��� � ��� ����������� ����� � � �.
*/

#include "iostream"

using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int num,a,z,x,y;
	cout << "������� �����=";
	cin >> num;//���� �����
	int num_orig = num;
	
	do//���� ����� � (0<a<8)
	{
		cout << "������� ����� a ( 0 < a < 8)=";
		cin >> a;
	} while (a <= 0 || a >= 8);

	do//���� ����� z ( z = 2,3,4)
	{
		cout << "������� ����� z ( z =  2,3,4)=";
		cin >> z;
	} while (z < 2 || z > 4);

	do//������� ����� x,y ( 0<= x,y <= 9)
	{
		cout << "������� ����� x,y ����� ������ ( 0<= x,y <= 9) =";
		cin >> x >> y;
	} while ((x < 0 || x > 9) || (y < 0 || y > 9));



	// ����������� ���������� ���� � �����
	int kof_del; // ��������� ������� (10 100 1000 10000...)
	int kol_elm = 0; //���������� ���� � �����
	for (kof_del = 1; kof_del < num; kof_del *= 10, kol_elm++);
	kof_del /= 10;
	int n = 0; // ������� ����
	int  *digit = new int[kol_elm]; //������ ����

	while (num > 0)
	{
		digit[n] = num / kof_del;
		num %= kof_del;

		kof_del /= 10;
		n++;
	}
	// -----����� ����������� ���������� ���� � �����
	//������� ������ digit[] � "n" ���������� ���������
	
	int KOL_OF_A = 0; // ���������� ���� �(������� ����� 1)
	for (int i = 0; i < n; i++)
		if (a == digit[i]) KOL_OF_A++ ;


	int KOL_OF_MULT_Z = 0;
	for (int i = 0; i < n; i++)
		if (digit[i] % z != 0) KOL_OF_MULT_Z++;

	int SUM_OF_DIGITS_BIGER_THAN_A = 0;
	for (int i = 0; i < n; i++)
		if (digit[i] > a) SUM_OF_DIGITS_BIGER_THAN_A +=digit[i];


	int KOL_OF_X = 0;
	int KOL_OF_Y = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == digit[i]) KOL_OF_X++;
		if (y == digit[i]) KOL_OF_Y++;
	}
	//������
	cout << "���������� ���� a=" << a << " ������������� � ����� " << num_orig << "\t=\t\t\t" << KOL_OF_A << endl;
	cout << "���������� ���� ������� z = " << z << " � ����� " << num_orig << "\t=\t\t\t" << KOL_OF_MULT_Z << endl;
	cout << "���� ����, ������� ��� � = " << a << " ������������� � ����� " << num_orig << "\t=\t" << SUM_OF_DIGITS_BIGER_THAN_A << endl;
	cout << "���������� ���� x=" << x << " ������������� � ����� " << num_orig << "\t=\t\t\t" << KOL_OF_X << endl;
	cout << "���������� ���� y=" << y << " ������������� � ����� " << num_orig << "\t=\t\t\t" << KOL_OF_Y << endl;

	system("pause");
	delete[]digit;
}