/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

#include "iostream"

using namespace std;
/*
14. Разработать программу, которая проверяет, попадает ли точка с заданными координатами в заштрихованную область:
*/


void main()
{
	setlocale(LC_ALL, "");

	float x, y;

	cout << "Введите координаты через пробел" << endl;
	cin >> x >> y;

	if ((y<1.5) && (y>-2))
		cout << "В первую область попадает" << endl;
	else 
		cout << "В первую область не попадает" << endl;


	if (((x < -1) && (y > 1)) || ((x > 2) && (y > 1)))
		cout << "В вторую область попадает" << endl;
	else
		cout << "В вторую область не попадает" << endl;


	if((y>0.5) && (y <1.5))
		cout << "В третью область попадает" << endl;
	else if (x > 2)
		cout << "В третью область попадает" << endl;
	else
		cout << "В третью область не попадает" << endl;



	system("pause");
}