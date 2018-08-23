#pragma once
#include <string>
#include "Date.h"

using namespace std;
class Biblio
{
public:
	Biblio();
	Biblio(string Name,string SeconName,string SurName,string Number,string Fakult, int bday, int bmonth, int byear,string Phone);
	
	void setAll();
	void show();
	string getSurName();
	string getFakult();

private:

	string _Name;
	string _SecondName;
	string _SurName;
	string _Number;
	string _Fakult;
	Date _Birth;
	string _Phone;
};

