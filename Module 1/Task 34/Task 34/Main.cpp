/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
34. ¬ поезде 18 вагонов, в каждом из которых 36 мест. »нформаци€ о проданных на поезд билетах хранитс€ в двумерном массиве, 
номера строк которых соответствуют номерам вагонов, а номера столбцов - номерам мест. ≈сли билет на то или иное место продан, 
то соответствующий элемент массива имеет значение 1, в противном случае - 0. ќрганизовать заполнение 
двумерного массива случайным образом.
—оставить программу, определ€ющую:
а)	число свободных мест в любом из вагонов поезда;
б)	номер вагона, в котором максимальное количество свободных мест (если таких несколько, вывести все);
в)	номера вагонов, зан€тых полностью;
г)	номера трех самых заполненных вагонов
(дл€ выполнени€ задани€ необходимо использовать вспомогательный одномерный массив, 
содержащий количество зан€тых мест в каждом вагоне)
*/

#include "iostream"
#include "time.h"
using namespace std;

const int places_vagons = 18;
const int places_places = 36;
void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int empty[places_vagons] = {0};
	int max = 0;
	int first = 0, second = 0, third = 0;
	int first_id = 0, second_id = 0, third_id = 0;
	int places[places_vagons][places_places];

	for (int i = 0; i < places_vagons; i++)
	{
		for (int j = 0; j < places_places; j++)
		{
			places[i][j] = rand() % 2;
			if (places[i][j] == 0)empty[i]++;
			if (max < empty[i]) max = empty[i];
		}
		if (first < places_places - empty[i])
			first = places_places - empty[i];

		if ((second < places_places - empty[i]) && (places_places - empty[i] != first) && (places_places - empty[i] != third))
			second = places_places - empty[i];

		if ((third < places_places - empty[i]) && (places_places - empty[i] != first) && (places_places - empty[i] != second))
			third = places_places - empty[i];
	}


	// вывод
	for (int i = 0; i < places_vagons; i++)
	{
		for (int j = 0; j < places_places; j++)
			cout << places[i][j] << " ";
		cout << endl;
	}

	cout << " оличество свободных мест:" << endl;
	for (int i = 0; i < places_vagons; i++)
		cout << "¬агон є" << i+1 << " = " << empty[i] << endl;
	
		for (int i = 0; i < places_vagons; i++)
			if(empty[i] == max)
			cout << "¬ вагоне є" << i+1 << " максимальное количество свободных мест = " << empty[i] << endl;


	for (int i = 0; i < places_vagons; i++)
		if (empty[i] == places_places)
			cout << "¬ вагоне є" << i+1 << " все места зан€ты." << endl;
		else if (i == places_vagons - 1)
			cout << "ѕолностью полных вагонов нет." << endl;

	for (int i = 0; i < places_vagons; i++)
	{
		if (places_places - empty[i] == first) first_id = i+1;
		if (places_places - empty[i] == second) second_id = i+1;
		if (places_places - empty[i] == third) third_id = i+1;
	}
		cout << "—амый заполненый вагон є" << first_id << " в котором " << first << " человек" << endl;
		cout << "¬торой самый заполненый вагон є" << second_id << " в котором " << second << " человек" << endl;
		cout << "“рейтий самый заполненый вагон є" << third_id << " в котором " << third << " человек" << endl;
	
	system("pause");
}