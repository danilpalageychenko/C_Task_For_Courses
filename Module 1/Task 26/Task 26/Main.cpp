/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
26. Дано натуральное число. Определить:
а)	сколько раз в нем встречается цифра а;
б)	количество его цифр, кратных z (значение z вводится с клавиатуры; z = 2,3,4);
в)	сумму его цифр, больших а (значение а вводится с клавиатуры; 0< а <8);
г)	сколько раз в нем встречаются цифры х и у.
*/

#include "iostream"

using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int num,a,z,x,y;
	cout << "Введите число=";
	cin >> num;//ввод числа
	int num_orig = num;
	
	do//ввод цифры а (0<a<8)
	{
		cout << "Введите цифру a ( 0 < a < 8)=";
		cin >> a;
	} while (a <= 0 || a >= 8);

	do//ввод цифры z ( z = 2,3,4)
	{
		cout << "Введите цифру z ( z =  2,3,4)=";
		cin >> z;
	} while (z < 2 || z > 4);

	do//введите цифры x,y ( 0<= x,y <= 9)
	{
		cout << "Введите цифры x,y через пробел ( 0<= x,y <= 9) =";
		cin >> x >> y;
	} while ((x < 0 || x > 9) || (y < 0 || y > 9));



	// Определения количества цифр в числе
	int kof_del; // Коєфициент деления (10 100 1000 10000...)
	int kol_elm = 0; //количество цифр в числе
	for (kof_del = 1; kof_del < num; kof_del *= 10, kol_elm++);
	kof_del /= 10;
	int n = 0; // счётчик цифр
	int  *digit = new int[kol_elm]; //массив цифр

	while (num > 0)
	{
		digit[n] = num / kof_del;
		num %= kof_del;

		kof_del /= 10;
		n++;
	}
	// -----Конец определения количества цифр в числе
	//возврат массив digit[] с "n" количество елементов
	
	int KOL_OF_A = 0; // Количество цифр а(задание номер 1)
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
	//выводы
	cout << "Количество цифр a=" << a << " встречающихся в числе " << num_orig << "\t=\t\t\t" << KOL_OF_A << endl;
	cout << "Количество цифр кратных z = " << z << " в числе " << num_orig << "\t=\t\t\t" << KOL_OF_MULT_Z << endl;
	cout << "Сума цифр, больших чем а = " << a << " встречающихся в числе " << num_orig << "\t=\t" << SUM_OF_DIGITS_BIGER_THAN_A << endl;
	cout << "Количество цифр x=" << x << " встречающихся в числе " << num_orig << "\t=\t\t\t" << KOL_OF_X << endl;
	cout << "Количество цифр y=" << y << " встречающихся в числе " << num_orig << "\t=\t\t\t" << KOL_OF_Y << endl;

	system("pause");
	delete[]digit;
}