/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Разработать программу, которая выведет на экран размеры в байтах всех стандартных типов данных.*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	cout << "int =" << sizeof(int) << endl;
	cout << "short int =" << sizeof(short int) << endl;
	cout << "unsigned short int =" << sizeof(unsigned short int) << endl;
	cout << "unsigned int =" << sizeof(unsigned int) << endl;
	cout << "long int =" << sizeof(long int) << endl;
	cout << "unsigned long int =" << sizeof(unsigned long int) << endl;
	cout << "float =" << sizeof(float) << endl;
	cout << "long float = " << sizeof(long float) << endl;
	cout << "double =" << sizeof(double) << endl;
	cout << "bool =" << sizeof(bool) << endl;
	cout << "char =" << sizeof(char) << endl;
	


	system("pause");
}