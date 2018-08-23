/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
33. Дан двумерный массив символов, состоящий из 10 строк и 10 столбцов. Заполнить массив двумя типа символов: 
звездочкой ('*') и пробелом (' ') так, чтобы выше главной диагонали и на диагонали находились звездочки, 
а ниже главной диагонали – пробелы. Вывести массив на экран в виде таблицы. Должен быть получен рисунок вида:

а) *****
    ****
     ***
      **
       *
Меняя способ заполнения массива, организовать вывод на экран следующих фигур:
б)***** 
  ****
  ***
  **
  *

в)     *
      **
     ***
    ****
  ******

г)*   *
  ** **
  *****
  *****
  *****

д)*****
   ****
    ***
   ****
  *****

е)*****
   ***
    *
   ***
  *****
*/

#include "iostream"

using namespace std;
void main()
{
    setlocale(LC_ALL, "");
    int a;
    do
    {
        cout << "Номер способа вывода = ";
        cin >> a;
    } while ((a < 1) || (a>6));
    char symbols[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            symbols[i][j] = ' ';


    switch (a)
    {
    case 1:
    {

        // a)

        for (int i = 0; i < 10; i++)
            for (int j = i; j < 10; j++)
                symbols[i][j] = '*';
        break;
    }

    case 2:
    {


        // b)

        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10-i; j++)
                symbols[i][j] = '*';
        break;
    }
    case 3:
    {
        // c)

        for (int i = 0; i < 10; i++)
            for (int j = 9-i; j < 10 ; j++)
                symbols[i][j] = '*';
        break;
    }
        

    case 4:
    {
        // d)

        for (int i = 0; i < 10; i++)
            for (int j = 0; j <= i; j++)
            {
                symbols[i][j] = '*';
                symbols[i][9-j] = '*';
            }
        break;
    }
    case 5:
    {
        // e)

        for (int i = 0; i < 5; i++)
            for (int j = i; j < 10; j++)
            {
                symbols[i][j] = '*';
                symbols[9-i][j] = '*';
            }
        break;
    }


    case 6:
    {
        // f)

        for (int i = 0; i < 5; i++)
            for (int j = i; j < 10-i; j++)
            {
                symbols[i][j] = '*';
                symbols[9 - i][j] = '*';
            }
        break;
    }
    }
    //вывод
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << symbols[i][j] << " ";
        cout << endl;
    }


    system("pause");
}