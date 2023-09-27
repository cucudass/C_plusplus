#pragma once
#include <iostream>
using namespace std;
class Item
{
private:
	int price;
	const char * name;
	bool check;

public:
	Item(int price = 0, const char * name = "");

	void SetCheck(bool check);
	bool GetCheck();
	void SetItem(int price, const char * name);
	void Information();
};

