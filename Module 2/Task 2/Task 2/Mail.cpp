#include "Mail.h"
#include "iostream"

using namespace std;
Mail::~Mail()
{
}
Mail::Mail(string street, string house_number, string locality, string district, string republic, string country, string index)
{
	_street = street;
	_house_number = house_number;
	_locality = locality;
	_district = district;
	_republic = republic;
	_country = country;
	_index = index;
}

Mail::Mail()
{

}

void Mail::setStreet(string street)
{
	_street = street;
}
void Mail::setHouseNumber(string house_number)
{
	_house_number = house_number;
}
void Mail::setLocality(string locality)
{
	_locality = locality;
}
void Mail::setDistrict(string district)
{
	_district = district;
}
void Mail::setRepublic(string republic)
{
	_republic = republic;
}
void Mail::setCountry(string country)
{
	_country = country;
}
void Mail::setIndex(string index)
{
	_index = index;
}

//getters


string Mail::getStreet()
{
	return _street;
}
string Mail::getHouseNumber()
{
	return _house_number;
}
string Mail::getLocality()
{
	return _locality;
}
string Mail::getDistrict()
{
	return _district;
}
string Mail::getRepublic()
{
	return _republic;
}
string Mail::getCountry()
{
	return _country;
}
string Mail::getIndex()
{
	return _index;
}

void Mail::show()
{
	cout << _street << "/";
	cout <<_house_number << "/";
	cout << _locality << "/";
	cout << _district << "/";
	cout << _republic << "/";
	cout << _country << "/";
	cout << _index;
}

