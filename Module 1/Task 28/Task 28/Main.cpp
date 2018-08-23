/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
28. Массив предназначен для хранения значений ростов двенадцати человек. С помощью датчика случайных чисел 
заполнить массив целыми значениями, лежащими в диапазоне от 163 до 190 включительно. На основе данных массива вычислить:
а)	среднее арифметическое значение роста и вывести его на экран;
б)	минимальное значение роста и индекс соответствующего элемента массива (если таких элементов несколько, 
вернуть индекс первого встретившегося).
Распечатать элементы массива в прямом и обратном порядке.
*/

#include "iostream"
#include "time.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int people[20];
	float avr=0;
	cout << "Для информативности, элементы массива:" << endl;
	for (int i = 0; i < 20; i++)
	{
		people[i] = 163 + rand() % 28;
		cout << "people[" << i << "] = " << people[i] << ";" << endl;
		avr += people[i];
	}
	
	avr /= 20;

	int min = people[0];
	int min_index = 0;
	for (int i = 0; i < 20; i++)
	{
		if (min > people[i])
		{
			min = people[i];
			min_index = i;
		}
	}
	cout << "Среднее значение массива =" << avr << endl;
	cout << "Минимальное значение массива people[" << min_index << "] = " << min << endl;

	system("pause");
}