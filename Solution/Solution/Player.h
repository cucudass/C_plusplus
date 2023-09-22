#pragma once
#include <iostream>
class Player
{
private:
	int money = 30000;
	friend class Bank;
public:
	void ShowInfo();
	int GetMoney();
};

