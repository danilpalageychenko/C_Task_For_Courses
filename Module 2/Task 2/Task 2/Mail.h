#pragma once
#include <string>
using namespace std;
class Mail
{
public:
	~Mail();
	Mail(string street,string house_number,	string locality, string district, string republi, string country, string index);
	Mail();
	void KillMe() { this->~Mail(); }


	void setStreet(string street);
	void setHouseNumber(string house_number);
	void setLocality(string locality);
	void setDistrict(string district);
	void setRepublic(string republic);
	void setCountry(string country);
	void setIndex(string index);

	
	string getStreet();
	string getHouseNumber();
	string getLocality();
	string getDistrict();
	string getRepublic();
	string getCountry();
	string getIndex();
	

	void show();



private:
	string _street;
	string _house_number;
	string _locality;
	string _district;
	string _republic;
	string _country;
	string _index;

};

