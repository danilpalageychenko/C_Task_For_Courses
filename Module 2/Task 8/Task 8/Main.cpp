/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*Создать базовый класс Саr, характеризуемый торговой маркой (строка), весом, 
мощностью. Определить методы переназначения и изменения мощности. Создать производный 
класс Lorry (грузовик), характеризуемый также грузоподъемностью кузова. Определить для
него функции переназначения марки и изменения грузоподъемности.*/

#include <iostream>
#include "Car.h"
#include "Lorry.h"
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	Car obj1("Name", 100, 20);
	Lorry obj2("Name", 500, 50, 130);

	cout << "Машина:" << endl;
	obj1.show();
	cout << "---------------" << endl;
	cout << "Грузовик:" << endl;
	obj2.show();
	cout << "---------------" << endl;

	double tmp_power;
	cout << "Введите новую мощность машины" << endl;
	cin >> tmp_power;
	cin.ignore();
	obj1.setPower(tmp_power);
	


	string tmp_mark;
	cout << "Введите новую марку грузовика" << endl;
	getline(cin, tmp_mark);
	
	obj2.setMark(tmp_mark);


	double tmp_LC;
	cout << "Введите новую грузоподьемность грузовика" << endl;
	cin >> tmp_LC;
	cin.ignore();
	obj2.setLoadCapacity(tmp_LC);

	cout << "Машина:" << endl;
	obj1.show();
	cout << "---------------" << endl;
	cout << "Грузовик:" << endl;
	obj2.show();

	system("pause");
}