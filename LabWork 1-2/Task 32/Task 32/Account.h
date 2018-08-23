#pragma once
#include <string>

using namespace std;
class Account
{
public:
	Account();
	~Account();

	//setters
	void setAll();
	void setOwner();


	void takeOff();
	void addMoney();
	void addPercent();

	void turnToDollars();
	void turnToEvro();

	void Print();
private:
	string _sur_name;
	int _account_num;
	int _percent;
	float _money;
	int _rde; // 1 рубли 2 доллары 3 евро
};

