/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*

35. �������� ���������� ��������� � ������ �� ����� ����� ������� ����� ���������:

����|  ������
      1 2 3...6
_____________
  1  |_|_|_|_|
  2  |_|_|_|_|
  ...|_|_|_|_|
  5  |_|_|_|_|


������������ ���� ���������� �� ���� ������� � ����������:
�)	�� ����� ����� ��������� ������ ����� ���������;
�)	����� �� ����� (�������  ����� � ����� �����) ����� �������������,
�)	����� ����� ������������� ������ (��� ������� �����);
�)	������� ���������� ��������� ��� ������� �����.

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
    int sum_courses[courses] = {0},min_sum_course=10000,min_sum_course_id = 0; // ����� ������������ ����
    int min=100, min_course, min_group; // ����� ������������� ������
    int min_group_of_course[courses];
    fill(min_group_of_course, min_group_of_course + courses, 100);
    int id_min_group_of_course[courses]; //����� ����� ������������� ������ (��� ������� �����)
    int avr_course[courses] = {0};
    cout << "������ �����(1 - �������, 0 - ����):";
        cin >> in_type;
    //������ ����
        if (in_type == true)
        {
            for (int i = 0; i < courses; i++)
                for (int j = 0; j < groups; j++)
                {
                    cout << i + 1 << " ����," << j + 1 << " ������=";
                    cin >> students[i][j];
                }
        }
    //���� ����
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

        //�������
        for (int i = 0; i < courses; i++)
        {
            for (int j = 0; j < groups; j++)
            {
                sum_courses[i] += students[i][j];
                if (min > students[i][j]) // ����� ������������� ����� �����
                {
                    min = students[i][j];
                    min_course = i+1;
                    min_group = j + 1;

                }

                if (min_group_of_course[i] > students[i][j]) // ����� ��������� ������ �����
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

        //����� �������
        cout << "�� " << min_sum_course_id << " ����� ��������� ������ ����� ���������, � ������ " << min_sum_course << " ���������." << endl;
        cout << "������ �" << min_group << ", " << min_course << "-�� ����� ����� �������������, � ������ " << min << " ���������." << endl;
        for (int i = 0; i < courses; i++)
            cout << "�� " << i+1 << " ����� ����� ������������ ������ �" << id_min_group_of_course[i] << " =" << min_group_of_course[i] << " ���������." << endl;
        for (int i = 0; i < courses; i++)
            cout << "�� " << i+1 << " ����� ������� ���������� ����� " << avr_course[i] << " ���������." << endl;
    system("pause");
}