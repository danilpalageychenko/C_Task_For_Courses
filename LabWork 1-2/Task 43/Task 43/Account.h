#pragma once
#include "Date.h"
class Account
{
public:
	Account();

	//setters
	void setNewAccount();


	void addPercentToToday();

	void showAccountInfo();
private:

	float _money;
	float _percent;
	Date _date;
};

