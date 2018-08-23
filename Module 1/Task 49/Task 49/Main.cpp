/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
49. Разработать программу вычисления периметр треугольника, заданного координатами своих вершин.
Координаты вершин задаются с клавиатуры. Вычисление длины отрезка между двумя точками организовать в виде функции.
Длина отрезка между двумя точками вычисляется по формуле: l =sqrt(x1-x2)^2+(y1-y2)^2  , где(x1,y1) - координаты первой точки, 
а (x2,y2) - координаты второй  точки. 
Вычисление периметра треугольника также организовать в виде функции.
*/

#include "iostream"
#include "math.h"
using namespace std;


int *Length(int coords[3][2])
{
	int* length = new int[3];
	length[0] = sqrt(pow((coords[0][0] - coords[1][0]), 2) + pow((coords[0][1] - coords[1][1]), 2));
	length[1] = sqrt(pow((coords[1][0] - coords[2][0]), 2) + pow((coords[1][1] - coords[2][1]), 2));
	length[2] = sqrt(pow((coords[2][0] - coords[0][0]), 2) + pow((coords[2][1] - coords[0][1]), 2));

	return length;
}

int Perimetr(int *length)
{
	int P = 0;
	for (int i = 0; i < 3; i++)
		P += length[i];

	return P;
}

void main()
{
	setlocale(LC_ALL,"");
	int coords[3][2];
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координаты " << i+1 << " точки(x,y через пробел)=";
		cin >> coords[i][0] >> coords[i][1];
	}

	
	cout << "Периметр треугольника = " << Perimetr(Length(coords))<< endl;
	system("pause");
}