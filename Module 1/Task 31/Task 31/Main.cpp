/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
31. В массиве хранится информация о результатах 22 спортсменов, участвовавших в соревнованиях по бегу на 100 м. 
Определить результаты спортсменов, занявших первое и второе места. Задачу решить, не используя два прохода по массиву.
*/

#include "iostream"
#include "time.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	float results[22];
	float dot;
	float min1 = 20, min2 = 20;
	for (int i = 0; i < 22; i++)
	{
		dot = rand() % 10;
		dot /= 10;
		results[i] = (6 + rand() % 14) + dot;
		cout << results[i] << endl;
		if (min1 > results[i])
		{
			min2 = min1;
			min1 = results[i];
		}
	}
	cout << "Первое место - " << min1 << " c" << endl;
	cout << "Второе место - " << min2 << " c"<< endl;
	
	system("pause");
}