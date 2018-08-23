/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Создать класс Man (человек), с полями: имя, возраст, пол и вес. 
Определить методы задания имени, возраста и веса. Создать производный класс Student,
имеющий поле года обучения. Определить методы задания и увеличения года обучения.*/

#include <iostream>
#include "Man.h"
#include "Student.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	Man objMan("Name",18,true,68.6);
	objMan.setName("NewName");
	objMan.setOld(20);
	objMan.setWeight(75.3);
	objMan.show();
	cout << "----------------" << endl;
	Student objStudent("Name2",20,false,76.1,2010);

	objStudent.show();
	cout << "----------------" << endl;
	objStudent.setYear(2011);
	objStudent++;

	objStudent.show();

	


	system("pause");
}