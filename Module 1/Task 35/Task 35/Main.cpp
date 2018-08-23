/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*

35. Известно количество студентов в каждой из шести групп каждого курса института:

Курс|  Группа
      1 2 3...6
_____________
  1  |_|_|_|_|
  2  |_|_|_|_|
  ...|_|_|_|_|
  5  |_|_|_|_|


Организовать ввод информации по этой таблице и определить:
а)	на каком курсе обучается меньше всего студентов;
б)	какая из групп (указать  номер и номер курса) самая малочисленная,
в)	номер самой малочисленной группы (для каждого курса);
г)	среднее количество студентов для каждого курса.

*/

#include "iostream"
#include "time.h"
using namespace std;

const int groups = 6;
const int courses = 5;
void main()
{
    setlocale(LC_ALL, "");
    srand(time(0));
    int students[courses][groups];
    bool in_type;
    int sum_courses[courses] = {0},min_sum_course=10000,min_sum_course_id = 0; // самый малочисленый курс
    int min=100, min_course, min_group; // самая малочисленная группа
    int min_group_of_course[courses];
    fill(min_group_of_course, min_group_of_course + courses, 100);
    int id_min_group_of_course[courses]; //номер самой малочисленной группы (для каждого курса)
    int avr_course[courses] = {0};
    cout << "Способ ввода(1 - вручную, 0 - авто):";
        cin >> in_type;
    //ручной ввод
        if (in_type == true)
        {
            for (int i = 0; i < courses; i++)
                for (int j = 0; j < groups; j++)
                {
                    cout << i + 1 << " курс," << j + 1 << " группа=";
                    cin >> students[i][j];
                }
        }
    //авто ввод
        else
        {
            for (int i = 0; i < groups; i++)
                cout << "\t" << i+1;
            cout << endl << endl;
            for (int i = 0; i < courses; i++)
            {
                cout << i+1;
                for (int j = 0; j < groups; j++)
                {
                    students[i][j] = 5 + rand() % 30;
                    cout << "\t" << students[i][j];
                }
                cout << endl;
            }
        }

        //решение
        for (int i = 0; i < courses; i++)
        {
            for (int j = 0; j < groups; j++)
            {
                sum_courses[i] += students[i][j];
                if (min > students[i][j]) // самая малочисленная група курса
                {
                    min = students[i][j];
                    min_course = i+1;
                    min_group = j + 1;

                }

                if (min_group_of_course[i] > students[i][j]) // самая маленькая группа курса
                {
                    min_group_of_course[i] = students[i][j];
                    id_min_group_of_course[i] = j + 1;
                }
                avr_course[i] += students[i][j];
                }
            avr_course[i] /= groups;

            if (min_sum_course > sum_courses[i])
            {
                min_sum_course_id = i+1;
                min_sum_course = sum_courses[i];
            }
        }

        //вывод ответов
        cout << "На " << min_sum_course_id << " курсе обучается меньше всего студентов, а именно " << min_sum_course << " студентов." << endl;
        cout << "Группа №" << min_group << ", " << min_course << "-го курса самая малочисленная, а именно " << min << " студентов." << endl;
        for (int i = 0; i < courses; i++)
            cout << "На " << i+1 << " курсе самая малочисленая группа №" << id_min_group_of_course[i] << " =" << min_group_of_course[i] << " студентов." << endl;
        for (int i = 0; i < courses; i++)
            cout << "На " << i+1 << " курсе среднне количество равно " << avr_course[i] << " студентов." << endl;
    system("pause");
}