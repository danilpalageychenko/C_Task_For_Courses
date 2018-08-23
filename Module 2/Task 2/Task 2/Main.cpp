/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*2.	Разработать класс, содержащий информацию о почтовом адресе организации. 
Предусмотреть возможность раздельного изменения/вывода  составных частей адреса, 
создания и уничтоже¬ния объектов этого класса.*/

#include <iostream>
#include "Mail.h"
#include <vector>
using namespace std;

void main()
{
	setlocale(LC_ALL,"");

	Mail obj1("Mystreet","23","Kharkiv","dzerginskiy","","Ukraine","68919");
	vector <Mail> mails;
	mails.push_back(obj1);

	int input,chose;

	while(1)
	{
		do
		{
			system("cls");
			cout << "0.Создать новый адресс" << endl;
			for (int i = 0; i < mails.size(); i++)
			{
				cout << i + 1 << ".";
				mails[i].show();
				cout << endl;
			}
			cout << endl << "Ваш выбор:";
			cin >> input;

			if(input == 0)
			{
				string tmp;
				system("cls");
				Mail obj;
				cout << "Введите улицу:";
				cin >> tmp;
				obj.setStreet(tmp);

				cout << "Введите номер дома:";
				cin >> tmp;
				obj.setHouseNumber(tmp);

				cout << "Введите название населенного пункта:";
				cin >> tmp;
				obj.setLocality(tmp);

				cout << "Введите район:";
				cin >> tmp;
				obj.setDistrict(tmp);

				cout << "Введите республику:";
				cin >> tmp;
				obj.setRepublic(tmp);

				cout << "Введите страну:";
				cin >> tmp;
				obj.setCountry(tmp);

				cout << "Введите индекс:";
				cin >> tmp;
				obj.setIndex(tmp);

				mails.push_back(obj);

				cout << "Объект добавлен!";
			}


		} while (input <= 0 || input > mails.size());

		input--;


		do
		{

			do
			{

				system("cls");
				cout << "1.Изменить улицу." << endl;
				cout << "2.Изменить номер дома." << endl;
				cout << "3.Изменить название населенного пункта." << endl;
				cout << "4.Изменить район." << endl;
				cout << "5.Изменить республику." << endl;
				cout << "6.Изменить страну." << endl;
				cout << "7.Изменить индекс." << endl;
				cout << "8.Вывести на экран улицу." << endl;
				cout << "9.Вывести на экран номер дома." << endl;
				cout << "10.Вывести на экран название населенного пункта." << endl;
				cout << "11.Вывести на экран район." << endl;
				cout << "12.Вывести на экран республику." << endl;
				cout << "13.Вывести на экран страну." << endl;
				cout << "14.Вывести на экран индекс." << endl;
				cout << "15.Вывести на экран адресс целиком." << endl;
				cout << "16.Уничтожить объект" << endl;
				cout << "17.Назад" << endl;

				cin >> chose;

			} while (chose <= 0 || chose > 18);
			cin.ignore();
			string tmp;
			switch (chose)
			{
			case 1:
				cout << "Изменить улицу на:" << endl;
				getline(cin, tmp);
				mails[input].setStreet(tmp);
				break;

			case 2:
				cout << "Изменить номер дома на:" << endl;
				getline(cin, tmp);
				mails[input].setHouseNumber(tmp);
				break;

			case 3:
				cout << "Изменить название населенного пункта на:" << endl;
				getline(cin, tmp);
				mails[input].setLocality(tmp);
				break;

			case 4:
				cout << "Изменить район на:" << endl;
				getline(cin, tmp);
				mails[input].setDistrict(tmp);
				break;

			case 5:
				cout << "Изменить республику на:" << endl;
				getline(cin, tmp);
				mails[input].setRepublic(tmp);
				break;

			case 6:
				cout << "Изменить страну на:" << endl;
				getline(cin, tmp);
				mails[input].setCountry(tmp);
				break;

			case 7:
				cout << "Изменить индекс на:" << endl;
				getline(cin, tmp);
				mails[input].setIndex(tmp);
				break;

			case 8:
				cout << mails[input].getStreet() << endl;
				break;

			case 9:
				cout << mails[input].getHouseNumber() << endl;
				break;

			case 10:
				cout << mails[input].getLocality() << endl;
				break;

			case 11:
				cout << mails[input].getDistrict() << endl;
				break;

			case 12:
				cout << mails[input].getRepublic() << endl;
				break;

			case 13:
				cout << mails[input].getCountry() << endl;
				break;

			case 14:
				cout << mails[input].getIndex() << endl;
				break;

			case 15:
				mails[input].show();
				break;

		

			case 16:
				mails.erase(mails.begin()+input);
				
			default:
				break;
			}

			cout << endl;
			system("pause");

		} while (chose < 16);

	}

	system("pause");
}